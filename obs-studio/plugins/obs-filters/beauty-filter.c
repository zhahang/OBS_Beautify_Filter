#include <obs-module.h>
#include <graphics/vec2.h>

/* clang-format off */

#define SETTING_BEAUTY_FRAME_SIZE      "frame_size"
#define SETTING_BEAUTY_TINY_BODY_X     "tiny_body_x"
#define SETTING_BEAUTY_TINY_BODY_Y     "tiny_body_y"
//#define SETTING_BEAUTY_LEVEL	       "beauty_level"
#define SETTING_BEAUTY_SMOOTH	       "beauty_smooth"
#define SETTING_BEAUTY_WHITEN	       "beauty_whiten"
#define SETTING_BEAUTY_REDDEN	       "beauty_redden"

#define TEXT_BEAUTY_TINY_BODY_X	       obs_module_text("Beauty.TinybodyX")
#define TEXT_BEAUTY_TINY_BODY_Y        obs_module_text("Beauty.TinybodyY")
//#define TEXT_BEAUTY_LEVEL              obs_module_text("Beauty.Level")
#define TEXT_BEAUTY_SMOOTH             obs_module_text("Beauty.Smooth")
#define TEXT_BEAUTY_WHITEN             obs_module_text("Beauty.Whiten")
#define TEXT_BEAUTY_REDDEN             obs_module_text("Beauty.Redden")

/* clang-format on */

struct beauty_filter_data {
	obs_source_t *context;

	gs_effect_t *effect;
	gs_eparam_t *param_frame_size;
	gs_eparam_t *param_tiny_body_x;
	gs_eparam_t *param_tiny_body_y;
	//gs_eparam_t *param_beauty_level;
	gs_eparam_t *param_beauty_smooth;
	gs_eparam_t *param_beauty_whiten;
	gs_eparam_t *param_beauty_redden;

	int width;
	int height;

	struct vec2 frame_size;
	float tiny_body_x;
	float tiny_body_y;
	//int beauty_level;
	float beauty_smooth;
	float beauty_whiten;
	float beauty_redden;
};

static const char *beauty_filter_get_name(void *unused)
{
	UNUSED_PARAMETER(unused);
	return obs_module_text("BeautyFilter");
}

static void *beauty_filter_create(obs_data_t *settings, obs_source_t *context)
{
	struct beauty_filter_data *filter = bzalloc(sizeof(*filter));
	char *effect_path = obs_module_file("beauty_filter.effect");

	filter->context = context;

	obs_enter_graphics();
	filter->effect = gs_effect_create_from_file(effect_path, NULL);
	obs_leave_graphics();

	bfree(effect_path);

	if (!filter->effect) {
		bfree(filter);
		return NULL;
	}

	filter->param_frame_size = gs_effect_get_param_by_name(
		filter->effect, SETTING_BEAUTY_FRAME_SIZE);
	filter->param_tiny_body_x = gs_effect_get_param_by_name(
		filter->effect, SETTING_BEAUTY_TINY_BODY_X);
	filter->param_tiny_body_y = gs_effect_get_param_by_name(
		filter->effect, SETTING_BEAUTY_TINY_BODY_Y);
	//filter->param_beauty_level = gs_effect_get_param_by_name(
	//	filter->effect, SETTING_BEAUTY_LEVEL);
	filter->param_beauty_smooth = gs_effect_get_param_by_name(
		filter->effect, SETTING_BEAUTY_SMOOTH);
	filter->param_beauty_whiten = gs_effect_get_param_by_name(
		filter->effect, SETTING_BEAUTY_WHITEN);
	filter->param_beauty_redden = gs_effect_get_param_by_name(
		filter->effect, SETTING_BEAUTY_REDDEN);

	obs_source_update(context, settings);
	return filter;
}

static void beauty_filter_destroy(void *data)
{
	struct beauty_filter_data *filter = data;

	obs_enter_graphics();
	gs_effect_destroy(filter->effect);
	obs_leave_graphics();

	bfree(filter);
}

static void beauty_filter_update(void *data, obs_data_t *settings)
{
	struct beauty_filter_data *filter = data;

	int tiny_body_x =
		(int)obs_data_get_int(settings, SETTING_BEAUTY_TINY_BODY_X);
	int tiny_body_y =
		(int)obs_data_get_int(settings, SETTING_BEAUTY_TINY_BODY_Y);
	//int beauty_level =
	//	(int)obs_data_get_int(settings, SETTING_BEAUTY_LEVEL);
	int beauty_smooth =
		(int)obs_data_get_int(settings, SETTING_BEAUTY_SMOOTH);
	int beauty_whiten =
		(int)obs_data_get_int(settings, SETTING_BEAUTY_WHITEN);
	int beauty_redden =
		(int)obs_data_get_int(settings, SETTING_BEAUTY_REDDEN);

	filter->tiny_body_x = 0.002f * tiny_body_x;
	filter->tiny_body_y = 0.002f * tiny_body_y;
	//filter->beauty_level = (int)(0.09f * beauty_level + 1.0f);
	filter->beauty_smooth = 0.01f * beauty_smooth;
	filter->beauty_whiten = 0.01f * beauty_whiten;
	filter->beauty_redden = 0.01f * beauty_redden;
}

static obs_properties_t *beauty_filter_properties(void *data)
{
	obs_properties_t *props = obs_properties_create();

	obs_properties_add_int_slider(props, SETTING_BEAUTY_TINY_BODY_X,
				      TEXT_BEAUTY_TINY_BODY_X, 0, 100, 1);
	obs_properties_add_int_slider(props, SETTING_BEAUTY_TINY_BODY_Y,
				      TEXT_BEAUTY_TINY_BODY_Y, 0, 100, 1);
	//obs_properties_add_int_slider(props, SETTING_BEAUTY_LEVEL,
	//			      TEXT_BEAUTY_LEVEL, 0, 100, 1);
	obs_properties_add_int_slider(props, SETTING_BEAUTY_SMOOTH,
				      TEXT_BEAUTY_SMOOTH, 0, 100, 1);
	obs_properties_add_int_slider(props, SETTING_BEAUTY_WHITEN,
				      TEXT_BEAUTY_WHITEN, 0, 100, 1);
	obs_properties_add_int_slider(props, SETTING_BEAUTY_REDDEN,
				      TEXT_BEAUTY_REDDEN, 0, 100, 1);

	UNUSED_PARAMETER(data);
	return props;
}

static void beauty_filter_defaults(obs_data_t *settings)
{
	obs_data_set_default_int(settings, SETTING_BEAUTY_TINY_BODY_X, 0);
	obs_data_set_default_int(settings, SETTING_BEAUTY_TINY_BODY_Y, 0);
	//obs_data_set_default_int(settings, SETTING_BEAUTY_LEVEL, 40);
	obs_data_set_default_int(settings, SETTING_BEAUTY_SMOOTH, 90);
	obs_data_set_default_int(settings, SETTING_BEAUTY_WHITEN, 50);
	obs_data_set_default_int(settings, SETTING_BEAUTY_REDDEN, 50);
}

static void beauty_filter_tick(void *data, float seconds)
{
	struct beauty_filter_data *filter = data;

	vec2_zero(&filter->frame_size);
	struct vec2 *frame_size = &filter->frame_size;

	obs_source_t *target = obs_filter_get_target(filter->context);
	uint32_t width;
	uint32_t height;

	if (!target) {
		width = 0;
		height = 0;
		return;
	} else {
		width = obs_source_get_base_width(target);
		height = obs_source_get_base_height(target);
	}

	filter->width = width;
	filter->height = height;

	if (filter->width < 1)
		filter->width = 1;
	if (filter->height < 1)
		filter->height = 1;

	if (width) {
		frame_size->x = (float)filter->width;
	}

	if (height) {
		frame_size->y = (float)filter->height;
	}

	UNUSED_PARAMETER(seconds);
}

static void beauty_filter_render(void *data, gs_effect_t *effect)
{
	struct beauty_filter_data *filter = data;

	if (!obs_source_process_filter_begin(filter->context, GS_RGBA,
					     OBS_NO_DIRECT_RENDERING))
		return;

	gs_effect_set_vec2(filter->param_frame_size, &filter->frame_size);
	gs_effect_set_float(filter->param_tiny_body_x, filter->tiny_body_x);
	gs_effect_set_float(filter->param_tiny_body_y, filter->tiny_body_y);
	//gs_effect_set_int(filter->param_beauty_level, filter->beauty_level);
	gs_effect_set_float(filter->param_beauty_smooth, filter->beauty_smooth);
	gs_effect_set_float(filter->param_beauty_whiten, filter->beauty_whiten);
	gs_effect_set_float(filter->param_beauty_redden, filter->beauty_redden);

	obs_source_process_filter_end(filter->context, filter->effect,
				      filter->width, filter->height);

	UNUSED_PARAMETER(effect);
}

static uint32_t beauty_filter_width(void *data)
{
	struct beauty_filter_data *crop = data;
	return (uint32_t)crop->width;
}

static uint32_t beauty_filter_height(void *data)
{
	struct beauty_filter_data *crop = data;
	return (uint32_t)crop->height;
}

struct obs_source_info beauty_filter = {
	.id = "beauty_filter",
	.type = OBS_SOURCE_TYPE_FILTER,
	.output_flags = OBS_SOURCE_VIDEO,
	.get_name = beauty_filter_get_name,
	.create = beauty_filter_create,
	.destroy = beauty_filter_destroy,
	.update = beauty_filter_update,
	.get_properties = beauty_filter_properties,
	.get_defaults = beauty_filter_defaults,
	.video_tick = beauty_filter_tick,
	.video_render = beauty_filter_render,
	.get_width = beauty_filter_width,
	.get_height = beauty_filter_height,
};
