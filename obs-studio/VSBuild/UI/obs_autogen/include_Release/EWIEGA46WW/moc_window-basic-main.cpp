/****************************************************************************
** Meta object code from reading C++ file 'window-basic-main.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../UI/window-basic-main.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-basic-main.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OBSBasic_t {
    QByteArrayData data[310];
    char stringdata0[6296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSBasic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSBasic_t qt_meta_stringdata_OBSBasic = {
    {
QT_MOC_LITERAL(0, 0, 8), // "OBSBasic"
QT_MOC_LITERAL(1, 9, 14), // "DeferSaveBegin"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "DeferSaveEnd"
QT_MOC_LITERAL(4, 38, 23), // "DisplayStreamStartError"
QT_MOC_LITERAL(5, 62, 14), // "StartStreaming"
QT_MOC_LITERAL(6, 77, 13), // "StopStreaming"
QT_MOC_LITERAL(7, 91, 18), // "ForceStopStreaming"
QT_MOC_LITERAL(8, 110, 19), // "StreamDelayStarting"
QT_MOC_LITERAL(9, 130, 3), // "sec"
QT_MOC_LITERAL(10, 134, 19), // "StreamDelayStopping"
QT_MOC_LITERAL(11, 154, 14), // "StreamingStart"
QT_MOC_LITERAL(12, 169, 14), // "StreamStopping"
QT_MOC_LITERAL(13, 184, 13), // "StreamingStop"
QT_MOC_LITERAL(14, 198, 9), // "errorcode"
QT_MOC_LITERAL(15, 208, 10), // "last_error"
QT_MOC_LITERAL(16, 219, 14), // "StartRecording"
QT_MOC_LITERAL(17, 234, 13), // "StopRecording"
QT_MOC_LITERAL(18, 248, 14), // "RecordingStart"
QT_MOC_LITERAL(19, 263, 14), // "RecordStopping"
QT_MOC_LITERAL(20, 278, 13), // "RecordingStop"
QT_MOC_LITERAL(21, 292, 4), // "code"
QT_MOC_LITERAL(22, 297, 28), // "ShowReplayBufferPauseWarning"
QT_MOC_LITERAL(23, 326, 17), // "StartReplayBuffer"
QT_MOC_LITERAL(24, 344, 16), // "StopReplayBuffer"
QT_MOC_LITERAL(25, 361, 17), // "ReplayBufferStart"
QT_MOC_LITERAL(26, 379, 16), // "ReplayBufferSave"
QT_MOC_LITERAL(27, 396, 17), // "ReplayBufferSaved"
QT_MOC_LITERAL(28, 414, 20), // "ReplayBufferStopping"
QT_MOC_LITERAL(29, 435, 16), // "ReplayBufferStop"
QT_MOC_LITERAL(30, 452, 15), // "StartVirtualCam"
QT_MOC_LITERAL(31, 468, 14), // "StopVirtualCam"
QT_MOC_LITERAL(32, 483, 17), // "OnVirtualCamStart"
QT_MOC_LITERAL(33, 501, 16), // "OnVirtualCamStop"
QT_MOC_LITERAL(34, 518, 19), // "SaveProjectDeferred"
QT_MOC_LITERAL(35, 538, 11), // "SaveProject"
QT_MOC_LITERAL(36, 550, 13), // "SetTransition"
QT_MOC_LITERAL(37, 564, 9), // "OBSSource"
QT_MOC_LITERAL(38, 574, 10), // "transition"
QT_MOC_LITERAL(39, 585, 18), // "OverrideTransition"
QT_MOC_LITERAL(40, 604, 17), // "TransitionToScene"
QT_MOC_LITERAL(41, 622, 8), // "OBSScene"
QT_MOC_LITERAL(42, 631, 5), // "scene"
QT_MOC_LITERAL(43, 637, 5), // "force"
QT_MOC_LITERAL(44, 643, 15), // "quickTransition"
QT_MOC_LITERAL(45, 659, 13), // "quickDuration"
QT_MOC_LITERAL(46, 673, 5), // "black"
QT_MOC_LITERAL(47, 679, 6), // "manual"
QT_MOC_LITERAL(48, 686, 15), // "SetCurrentScene"
QT_MOC_LITERAL(49, 702, 18), // "AddSceneCollection"
QT_MOC_LITERAL(50, 721, 10), // "create_new"
QT_MOC_LITERAL(51, 732, 4), // "name"
QT_MOC_LITERAL(52, 737, 16), // "UpdatePatronJson"
QT_MOC_LITERAL(53, 754, 4), // "text"
QT_MOC_LITERAL(54, 759, 5), // "error"
QT_MOC_LITERAL(55, 765, 14), // "ShowContextBar"
QT_MOC_LITERAL(56, 780, 14), // "HideContextBar"
QT_MOC_LITERAL(57, 795, 14), // "PauseRecording"
QT_MOC_LITERAL(58, 810, 16), // "UnpauseRecording"
QT_MOC_LITERAL(59, 827, 12), // "AddSceneItem"
QT_MOC_LITERAL(60, 840, 12), // "OBSSceneItem"
QT_MOC_LITERAL(61, 853, 4), // "item"
QT_MOC_LITERAL(62, 858, 8), // "AddScene"
QT_MOC_LITERAL(63, 867, 6), // "source"
QT_MOC_LITERAL(64, 874, 11), // "RemoveScene"
QT_MOC_LITERAL(65, 886, 13), // "RenameSources"
QT_MOC_LITERAL(66, 900, 7), // "newName"
QT_MOC_LITERAL(67, 908, 8), // "prevName"
QT_MOC_LITERAL(68, 917, 19), // "ActivateAudioSource"
QT_MOC_LITERAL(69, 937, 21), // "DeactivateAudioSource"
QT_MOC_LITERAL(70, 959, 22), // "DuplicateSelectedScene"
QT_MOC_LITERAL(71, 982, 19), // "RemoveSelectedScene"
QT_MOC_LITERAL(72, 1002, 23), // "RemoveSelectedSceneItem"
QT_MOC_LITERAL(73, 1026, 17), // "ToggleAlwaysOnTop"
QT_MOC_LITERAL(74, 1044, 14), // "ReorderSources"
QT_MOC_LITERAL(75, 1059, 14), // "RefreshSources"
QT_MOC_LITERAL(76, 1074, 13), // "ProcessHotkey"
QT_MOC_LITERAL(77, 1088, 13), // "obs_hotkey_id"
QT_MOC_LITERAL(78, 1102, 2), // "id"
QT_MOC_LITERAL(79, 1105, 7), // "pressed"
QT_MOC_LITERAL(80, 1113, 13), // "AddTransition"
QT_MOC_LITERAL(81, 1127, 16), // "RenameTransition"
QT_MOC_LITERAL(82, 1144, 17), // "TransitionClicked"
QT_MOC_LITERAL(83, 1162, 17), // "TransitionStopped"
QT_MOC_LITERAL(84, 1180, 22), // "TransitionFullyStopped"
QT_MOC_LITERAL(85, 1203, 22), // "TriggerQuickTransition"
QT_MOC_LITERAL(86, 1226, 20), // "SetDeinterlacingMode"
QT_MOC_LITERAL(87, 1247, 21), // "SetDeinterlacingOrder"
QT_MOC_LITERAL(88, 1269, 14), // "SetScaleFilter"
QT_MOC_LITERAL(89, 1284, 13), // "IconActivated"
QT_MOC_LITERAL(90, 1298, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(91, 1332, 6), // "reason"
QT_MOC_LITERAL(92, 1339, 10), // "SetShowing"
QT_MOC_LITERAL(93, 1350, 7), // "showing"
QT_MOC_LITERAL(94, 1358, 14), // "ToggleShowHide"
QT_MOC_LITERAL(95, 1373, 16), // "HideAudioControl"
QT_MOC_LITERAL(96, 1390, 22), // "UnhideAllAudioControls"
QT_MOC_LITERAL(97, 1413, 15), // "ToggleHideMixer"
QT_MOC_LITERAL(98, 1429, 17), // "MixerRenameSource"
QT_MOC_LITERAL(99, 1447, 46), // "on_vMixerScrollArea_customCon..."
QT_MOC_LITERAL(100, 1494, 46), // "on_hMixerScrollArea_customCon..."
QT_MOC_LITERAL(101, 1541, 29), // "on_actionCopySource_triggered"
QT_MOC_LITERAL(102, 1571, 27), // "on_actionPasteRef_triggered"
QT_MOC_LITERAL(103, 1599, 27), // "on_actionPasteDup_triggered"
QT_MOC_LITERAL(104, 1627, 30), // "on_actionCopyFilters_triggered"
QT_MOC_LITERAL(105, 1658, 31), // "on_actionPasteFilters_triggered"
QT_MOC_LITERAL(106, 1690, 11), // "ColorChange"
QT_MOC_LITERAL(107, 1702, 26), // "GetItemWidgetFromSceneItem"
QT_MOC_LITERAL(108, 1729, 15), // "SourceTreeItem*"
QT_MOC_LITERAL(109, 1745, 16), // "obs_sceneitem_t*"
QT_MOC_LITERAL(110, 1762, 9), // "sceneItem"
QT_MOC_LITERAL(111, 1772, 28), // "on_actionShowAbout_triggered"
QT_MOC_LITERAL(112, 1801, 21), // "AudioMixerCopyFilters"
QT_MOC_LITERAL(113, 1823, 22), // "AudioMixerPasteFilters"
QT_MOC_LITERAL(114, 1846, 13), // "EnablePreview"
QT_MOC_LITERAL(115, 1860, 14), // "DisablePreview"
QT_MOC_LITERAL(116, 1875, 16), // "SceneCopyFilters"
QT_MOC_LITERAL(117, 1892, 17), // "ScenePasteFilters"
QT_MOC_LITERAL(118, 1910, 23), // "CheckDiskSpaceRemaining"
QT_MOC_LITERAL(119, 1934, 18), // "OpenSavedProjector"
QT_MOC_LITERAL(120, 1953, 19), // "SavedProjectorInfo*"
QT_MOC_LITERAL(121, 1973, 4), // "info"
QT_MOC_LITERAL(122, 1978, 15), // "ScenesReordered"
QT_MOC_LITERAL(123, 1994, 16), // "ResetStatsHotkey"
QT_MOC_LITERAL(124, 2011, 12), // "SetImageIcon"
QT_MOC_LITERAL(125, 2024, 4), // "icon"
QT_MOC_LITERAL(126, 2029, 12), // "SetColorIcon"
QT_MOC_LITERAL(127, 2042, 16), // "SetSlideshowIcon"
QT_MOC_LITERAL(128, 2059, 17), // "SetAudioInputIcon"
QT_MOC_LITERAL(129, 2077, 18), // "SetAudioOutputIcon"
QT_MOC_LITERAL(130, 2096, 17), // "SetDesktopCapIcon"
QT_MOC_LITERAL(131, 2114, 16), // "SetWindowCapIcon"
QT_MOC_LITERAL(132, 2131, 14), // "SetGameCapIcon"
QT_MOC_LITERAL(133, 2146, 13), // "SetCameraIcon"
QT_MOC_LITERAL(134, 2160, 11), // "SetTextIcon"
QT_MOC_LITERAL(135, 2172, 12), // "SetMediaIcon"
QT_MOC_LITERAL(136, 2185, 14), // "SetBrowserIcon"
QT_MOC_LITERAL(137, 2200, 12), // "SetGroupIcon"
QT_MOC_LITERAL(138, 2213, 12), // "SetSceneIcon"
QT_MOC_LITERAL(139, 2226, 14), // "SetDefaultIcon"
QT_MOC_LITERAL(140, 2241, 11), // "TBarChanged"
QT_MOC_LITERAL(141, 2253, 5), // "value"
QT_MOC_LITERAL(142, 2259, 12), // "TBarReleased"
QT_MOC_LITERAL(143, 2272, 17), // "LockVolumeControl"
QT_MOC_LITERAL(144, 2290, 4), // "lock"
QT_MOC_LITERAL(145, 2295, 38), // "on_actionFullscreenInterface_..."
QT_MOC_LITERAL(146, 2334, 34), // "on_actionShow_Recordings_trig..."
QT_MOC_LITERAL(147, 2369, 24), // "on_actionRemux_triggered"
QT_MOC_LITERAL(148, 2394, 28), // "on_action_Settings_triggered"
QT_MOC_LITERAL(149, 2423, 37), // "on_actionAdvAudioProperties_t..."
QT_MOC_LITERAL(150, 2461, 24), // "on_advAudioProps_clicked"
QT_MOC_LITERAL(151, 2486, 26), // "on_advAudioProps_destroyed"
QT_MOC_LITERAL(152, 2513, 27), // "on_actionShowLogs_triggered"
QT_MOC_LITERAL(153, 2541, 35), // "on_actionUploadCurrentLog_tri..."
QT_MOC_LITERAL(154, 2577, 32), // "on_actionUploadLastLog_triggered"
QT_MOC_LITERAL(155, 2610, 33), // "on_actionViewCurrentLog_trigg..."
QT_MOC_LITERAL(156, 2644, 34), // "on_actionCheckForUpdates_trig..."
QT_MOC_LITERAL(157, 2679, 32), // "on_actionShowCrashLogs_triggered"
QT_MOC_LITERAL(158, 2712, 37), // "on_actionUploadLastCrashLog_t..."
QT_MOC_LITERAL(159, 2750, 32), // "on_actionEditTransform_triggered"
QT_MOC_LITERAL(160, 2783, 32), // "on_actionCopyTransform_triggered"
QT_MOC_LITERAL(161, 2816, 33), // "on_actionPasteTransform_trigg..."
QT_MOC_LITERAL(162, 2850, 29), // "on_actionRotate90CW_triggered"
QT_MOC_LITERAL(163, 2880, 30), // "on_actionRotate90CCW_triggered"
QT_MOC_LITERAL(164, 2911, 28), // "on_actionRotate180_triggered"
QT_MOC_LITERAL(165, 2940, 33), // "on_actionFlipHorizontal_trigg..."
QT_MOC_LITERAL(166, 2974, 31), // "on_actionFlipVertical_triggered"
QT_MOC_LITERAL(167, 3006, 30), // "on_actionFitToScreen_triggered"
QT_MOC_LITERAL(168, 3037, 34), // "on_actionStretchToScreen_trig..."
QT_MOC_LITERAL(169, 3072, 33), // "on_actionCenterToScreen_trigg..."
QT_MOC_LITERAL(170, 3106, 33), // "on_actionVerticalCenter_trigg..."
QT_MOC_LITERAL(171, 3140, 35), // "on_actionHorizontalCenter_tri..."
QT_MOC_LITERAL(172, 3176, 29), // "on_customContextMenuRequested"
QT_MOC_LITERAL(173, 3206, 3), // "pos"
QT_MOC_LITERAL(174, 3210, 28), // "on_scenes_currentItemChanged"
QT_MOC_LITERAL(175, 3239, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(176, 3256, 7), // "current"
QT_MOC_LITERAL(177, 3264, 4), // "prev"
QT_MOC_LITERAL(178, 3269, 36), // "on_scenes_customContextMenuRe..."
QT_MOC_LITERAL(179, 3306, 27), // "on_actionGridMode_triggered"
QT_MOC_LITERAL(180, 3334, 27), // "on_actionAddScene_triggered"
QT_MOC_LITERAL(181, 3362, 30), // "on_actionRemoveScene_triggered"
QT_MOC_LITERAL(182, 3393, 26), // "on_actionSceneUp_triggered"
QT_MOC_LITERAL(183, 3420, 28), // "on_actionSceneDown_triggered"
QT_MOC_LITERAL(184, 3449, 37), // "on_sources_customContextMenuR..."
QT_MOC_LITERAL(185, 3487, 27), // "on_scenes_itemDoubleClicked"
QT_MOC_LITERAL(186, 3515, 28), // "on_actionAddSource_triggered"
QT_MOC_LITERAL(187, 3544, 31), // "on_actionRemoveSource_triggered"
QT_MOC_LITERAL(188, 3576, 27), // "on_actionInteract_triggered"
QT_MOC_LITERAL(189, 3604, 35), // "on_actionSourceProperties_tri..."
QT_MOC_LITERAL(190, 3640, 27), // "on_actionSourceUp_triggered"
QT_MOC_LITERAL(191, 3668, 29), // "on_actionSourceDown_triggered"
QT_MOC_LITERAL(192, 3698, 25), // "on_actionMoveUp_triggered"
QT_MOC_LITERAL(193, 3724, 27), // "on_actionMoveDown_triggered"
QT_MOC_LITERAL(194, 3752, 28), // "on_actionMoveToTop_triggered"
QT_MOC_LITERAL(195, 3781, 31), // "on_actionMoveToBottom_triggered"
QT_MOC_LITERAL(196, 3813, 30), // "on_actionLockPreview_triggered"
QT_MOC_LITERAL(197, 3844, 26), // "on_scalingMenu_aboutToShow"
QT_MOC_LITERAL(198, 3871, 30), // "on_actionScaleWindow_triggered"
QT_MOC_LITERAL(199, 3902, 30), // "on_actionScaleCanvas_triggered"
QT_MOC_LITERAL(200, 3933, 30), // "on_actionScaleOutput_triggered"
QT_MOC_LITERAL(201, 3964, 23), // "on_streamButton_clicked"
QT_MOC_LITERAL(202, 3988, 23), // "on_recordButton_clicked"
QT_MOC_LITERAL(203, 4012, 17), // "VCamButtonClicked"
QT_MOC_LITERAL(204, 4030, 25), // "on_settingsButton_clicked"
QT_MOC_LITERAL(205, 4056, 10), // "Screenshot"
QT_MOC_LITERAL(206, 4067, 7), // "source_"
QT_MOC_LITERAL(207, 4075, 24), // "ScreenshotSelectedSource"
QT_MOC_LITERAL(208, 4100, 17), // "ScreenshotProgram"
QT_MOC_LITERAL(209, 4118, 15), // "ScreenshotScene"
QT_MOC_LITERAL(210, 4134, 29), // "on_actionHelpPortal_triggered"
QT_MOC_LITERAL(211, 4164, 26), // "on_actionWebsite_triggered"
QT_MOC_LITERAL(212, 4191, 26), // "on_actionDiscord_triggered"
QT_MOC_LITERAL(213, 4218, 37), // "on_preview_customContextMenuR..."
QT_MOC_LITERAL(214, 4256, 37), // "on_program_customContextMenuR..."
QT_MOC_LITERAL(215, 4294, 19), // "PreviewDisabledMenu"
QT_MOC_LITERAL(216, 4314, 37), // "on_actionNewSceneCollection_t..."
QT_MOC_LITERAL(217, 4352, 37), // "on_actionDupSceneCollection_t..."
QT_MOC_LITERAL(218, 4390, 40), // "on_actionRenameSceneCollectio..."
QT_MOC_LITERAL(219, 4431, 40), // "on_actionRemoveSceneCollectio..."
QT_MOC_LITERAL(220, 4472, 40), // "on_actionImportSceneCollectio..."
QT_MOC_LITERAL(221, 4513, 40), // "on_actionExportSceneCollectio..."
QT_MOC_LITERAL(222, 4554, 29), // "on_actionNewProfile_triggered"
QT_MOC_LITERAL(223, 4584, 29), // "on_actionDupProfile_triggered"
QT_MOC_LITERAL(224, 4614, 32), // "on_actionRenameProfile_triggered"
QT_MOC_LITERAL(225, 4647, 32), // "on_actionRemoveProfile_triggered"
QT_MOC_LITERAL(226, 4680, 32), // "on_actionImportProfile_triggered"
QT_MOC_LITERAL(227, 4713, 32), // "on_actionExportProfile_triggered"
QT_MOC_LITERAL(228, 4746, 37), // "on_actionShowSettingsFolder_t..."
QT_MOC_LITERAL(229, 4784, 36), // "on_actionShowProfileFolder_tr..."
QT_MOC_LITERAL(230, 4821, 30), // "on_actionAlwaysOnTop_triggered"
QT_MOC_LITERAL(231, 4852, 32), // "on_toggleListboxToolbars_toggled"
QT_MOC_LITERAL(232, 4885, 7), // "visible"
QT_MOC_LITERAL(233, 4893, 27), // "on_toggleContextBar_toggled"
QT_MOC_LITERAL(234, 4921, 26), // "on_toggleStatusBar_toggled"
QT_MOC_LITERAL(235, 4948, 28), // "on_toggleSourceIcons_toggled"
QT_MOC_LITERAL(236, 4977, 34), // "on_transitions_currentIndexCh..."
QT_MOC_LITERAL(237, 5012, 5), // "index"
QT_MOC_LITERAL(238, 5018, 27), // "on_transitionRemove_clicked"
QT_MOC_LITERAL(239, 5046, 26), // "on_transitionProps_clicked"
QT_MOC_LITERAL(240, 5073, 34), // "on_transitionDuration_valueCh..."
QT_MOC_LITERAL(241, 5108, 21), // "on_modeSwitch_clicked"
QT_MOC_LITERAL(242, 5130, 33), // "on_sourcePropertiesButton_cli..."
QT_MOC_LITERAL(243, 5164, 30), // "on_sourceFiltersButton_clicked"
QT_MOC_LITERAL(244, 5195, 31), // "on_sourceInteractButton_clicked"
QT_MOC_LITERAL(245, 5227, 26), // "on_autoConfigure_triggered"
QT_MOC_LITERAL(246, 5254, 18), // "on_stats_triggered"
QT_MOC_LITERAL(247, 5273, 20), // "on_resetUI_triggered"
QT_MOC_LITERAL(248, 5294, 17), // "on_lockUI_toggled"
QT_MOC_LITERAL(249, 5312, 12), // "PauseToggled"
QT_MOC_LITERAL(250, 5325, 17), // "logUploadFinished"
QT_MOC_LITERAL(251, 5343, 19), // "crashUploadFinished"
QT_MOC_LITERAL(252, 5363, 13), // "openLogDialog"
QT_MOC_LITERAL(253, 5377, 5), // "crash"
QT_MOC_LITERAL(254, 5383, 19), // "updateCheckFinished"
QT_MOC_LITERAL(255, 5403, 19), // "AddSourceFromAction"
QT_MOC_LITERAL(256, 5423, 14), // "MoveSceneToTop"
QT_MOC_LITERAL(257, 5438, 17), // "MoveSceneToBottom"
QT_MOC_LITERAL(258, 5456, 13), // "EditSceneName"
QT_MOC_LITERAL(259, 5470, 17), // "EditSceneItemName"
QT_MOC_LITERAL(260, 5488, 15), // "SceneNameEdited"
QT_MOC_LITERAL(261, 5504, 8), // "QWidget*"
QT_MOC_LITERAL(262, 5513, 6), // "editor"
QT_MOC_LITERAL(263, 5520, 34), // "QAbstractItemDelegate::EndEdi..."
QT_MOC_LITERAL(264, 5555, 7), // "endHint"
QT_MOC_LITERAL(265, 5563, 16), // "OpenSceneFilters"
QT_MOC_LITERAL(266, 5580, 11), // "OpenFilters"
QT_MOC_LITERAL(267, 5592, 20), // "EnablePreviewDisplay"
QT_MOC_LITERAL(268, 5613, 6), // "enable"
QT_MOC_LITERAL(269, 5620, 13), // "TogglePreview"
QT_MOC_LITERAL(270, 5634, 7), // "NudgeUp"
QT_MOC_LITERAL(271, 5642, 9), // "NudgeDown"
QT_MOC_LITERAL(272, 5652, 9), // "NudgeLeft"
QT_MOC_LITERAL(273, 5662, 10), // "NudgeRight"
QT_MOC_LITERAL(274, 5673, 26), // "OpenStudioProgramProjector"
QT_MOC_LITERAL(275, 5700, 20), // "OpenPreviewProjector"
QT_MOC_LITERAL(276, 5721, 19), // "OpenSourceProjector"
QT_MOC_LITERAL(277, 5741, 22), // "OpenMultiviewProjector"
QT_MOC_LITERAL(278, 5764, 18), // "OpenSceneProjector"
QT_MOC_LITERAL(279, 5783, 23), // "OpenStudioProgramWindow"
QT_MOC_LITERAL(280, 5807, 17), // "OpenPreviewWindow"
QT_MOC_LITERAL(281, 5825, 16), // "OpenSourceWindow"
QT_MOC_LITERAL(282, 5842, 19), // "OpenMultiviewWindow"
QT_MOC_LITERAL(283, 5862, 15), // "OpenSceneWindow"
QT_MOC_LITERAL(284, 5878, 19), // "DeferredSysTrayLoad"
QT_MOC_LITERAL(285, 5898, 12), // "requeueCount"
QT_MOC_LITERAL(286, 5911, 36), // "StackedMixerAreaContextMenuRe..."
QT_MOC_LITERAL(287, 5948, 24), // "ResizeOutputSizeOfSource"
QT_MOC_LITERAL(288, 5973, 33), // "on_actionResetTransform_trigg..."
QT_MOC_LITERAL(289, 6007, 15), // "StreamingActive"
QT_MOC_LITERAL(290, 6023, 15), // "RecordingActive"
QT_MOC_LITERAL(291, 6039, 18), // "ReplayBufferActive"
QT_MOC_LITERAL(292, 6058, 15), // "ClearContextBar"
QT_MOC_LITERAL(293, 6074, 16), // "UpdateContextBar"
QT_MOC_LITERAL(294, 6091, 24), // "UpdateContextBarDeferred"
QT_MOC_LITERAL(295, 6116, 9), // "imageIcon"
QT_MOC_LITERAL(296, 6126, 9), // "colorIcon"
QT_MOC_LITERAL(297, 6136, 13), // "slideshowIcon"
QT_MOC_LITERAL(298, 6150, 14), // "audioInputIcon"
QT_MOC_LITERAL(299, 6165, 15), // "audioOutputIcon"
QT_MOC_LITERAL(300, 6181, 14), // "desktopCapIcon"
QT_MOC_LITERAL(301, 6196, 13), // "windowCapIcon"
QT_MOC_LITERAL(302, 6210, 11), // "gameCapIcon"
QT_MOC_LITERAL(303, 6222, 10), // "cameraIcon"
QT_MOC_LITERAL(304, 6233, 8), // "textIcon"
QT_MOC_LITERAL(305, 6242, 9), // "mediaIcon"
QT_MOC_LITERAL(306, 6252, 11), // "browserIcon"
QT_MOC_LITERAL(307, 6264, 9), // "groupIcon"
QT_MOC_LITERAL(308, 6274, 9), // "sceneIcon"
QT_MOC_LITERAL(309, 6284, 11) // "defaultIcon"

    },
    "OBSBasic\0DeferSaveBegin\0\0DeferSaveEnd\0"
    "DisplayStreamStartError\0StartStreaming\0"
    "StopStreaming\0ForceStopStreaming\0"
    "StreamDelayStarting\0sec\0StreamDelayStopping\0"
    "StreamingStart\0StreamStopping\0"
    "StreamingStop\0errorcode\0last_error\0"
    "StartRecording\0StopRecording\0"
    "RecordingStart\0RecordStopping\0"
    "RecordingStop\0code\0ShowReplayBufferPauseWarning\0"
    "StartReplayBuffer\0StopReplayBuffer\0"
    "ReplayBufferStart\0ReplayBufferSave\0"
    "ReplayBufferSaved\0ReplayBufferStopping\0"
    "ReplayBufferStop\0StartVirtualCam\0"
    "StopVirtualCam\0OnVirtualCamStart\0"
    "OnVirtualCamStop\0SaveProjectDeferred\0"
    "SaveProject\0SetTransition\0OBSSource\0"
    "transition\0OverrideTransition\0"
    "TransitionToScene\0OBSScene\0scene\0force\0"
    "quickTransition\0quickDuration\0black\0"
    "manual\0SetCurrentScene\0AddSceneCollection\0"
    "create_new\0name\0UpdatePatronJson\0text\0"
    "error\0ShowContextBar\0HideContextBar\0"
    "PauseRecording\0UnpauseRecording\0"
    "AddSceneItem\0OBSSceneItem\0item\0AddScene\0"
    "source\0RemoveScene\0RenameSources\0"
    "newName\0prevName\0ActivateAudioSource\0"
    "DeactivateAudioSource\0DuplicateSelectedScene\0"
    "RemoveSelectedScene\0RemoveSelectedSceneItem\0"
    "ToggleAlwaysOnTop\0ReorderSources\0"
    "RefreshSources\0ProcessHotkey\0obs_hotkey_id\0"
    "id\0pressed\0AddTransition\0RenameTransition\0"
    "TransitionClicked\0TransitionStopped\0"
    "TransitionFullyStopped\0TriggerQuickTransition\0"
    "SetDeinterlacingMode\0SetDeinterlacingOrder\0"
    "SetScaleFilter\0IconActivated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason\0SetShowing\0showing\0ToggleShowHide\0"
    "HideAudioControl\0UnhideAllAudioControls\0"
    "ToggleHideMixer\0MixerRenameSource\0"
    "on_vMixerScrollArea_customContextMenuRequested\0"
    "on_hMixerScrollArea_customContextMenuRequested\0"
    "on_actionCopySource_triggered\0"
    "on_actionPasteRef_triggered\0"
    "on_actionPasteDup_triggered\0"
    "on_actionCopyFilters_triggered\0"
    "on_actionPasteFilters_triggered\0"
    "ColorChange\0GetItemWidgetFromSceneItem\0"
    "SourceTreeItem*\0obs_sceneitem_t*\0"
    "sceneItem\0on_actionShowAbout_triggered\0"
    "AudioMixerCopyFilters\0AudioMixerPasteFilters\0"
    "EnablePreview\0DisablePreview\0"
    "SceneCopyFilters\0ScenePasteFilters\0"
    "CheckDiskSpaceRemaining\0OpenSavedProjector\0"
    "SavedProjectorInfo*\0info\0ScenesReordered\0"
    "ResetStatsHotkey\0SetImageIcon\0icon\0"
    "SetColorIcon\0SetSlideshowIcon\0"
    "SetAudioInputIcon\0SetAudioOutputIcon\0"
    "SetDesktopCapIcon\0SetWindowCapIcon\0"
    "SetGameCapIcon\0SetCameraIcon\0SetTextIcon\0"
    "SetMediaIcon\0SetBrowserIcon\0SetGroupIcon\0"
    "SetSceneIcon\0SetDefaultIcon\0TBarChanged\0"
    "value\0TBarReleased\0LockVolumeControl\0"
    "lock\0on_actionFullscreenInterface_triggered\0"
    "on_actionShow_Recordings_triggered\0"
    "on_actionRemux_triggered\0"
    "on_action_Settings_triggered\0"
    "on_actionAdvAudioProperties_triggered\0"
    "on_advAudioProps_clicked\0"
    "on_advAudioProps_destroyed\0"
    "on_actionShowLogs_triggered\0"
    "on_actionUploadCurrentLog_triggered\0"
    "on_actionUploadLastLog_triggered\0"
    "on_actionViewCurrentLog_triggered\0"
    "on_actionCheckForUpdates_triggered\0"
    "on_actionShowCrashLogs_triggered\0"
    "on_actionUploadLastCrashLog_triggered\0"
    "on_actionEditTransform_triggered\0"
    "on_actionCopyTransform_triggered\0"
    "on_actionPasteTransform_triggered\0"
    "on_actionRotate90CW_triggered\0"
    "on_actionRotate90CCW_triggered\0"
    "on_actionRotate180_triggered\0"
    "on_actionFlipHorizontal_triggered\0"
    "on_actionFlipVertical_triggered\0"
    "on_actionFitToScreen_triggered\0"
    "on_actionStretchToScreen_triggered\0"
    "on_actionCenterToScreen_triggered\0"
    "on_actionVerticalCenter_triggered\0"
    "on_actionHorizontalCenter_triggered\0"
    "on_customContextMenuRequested\0pos\0"
    "on_scenes_currentItemChanged\0"
    "QListWidgetItem*\0current\0prev\0"
    "on_scenes_customContextMenuRequested\0"
    "on_actionGridMode_triggered\0"
    "on_actionAddScene_triggered\0"
    "on_actionRemoveScene_triggered\0"
    "on_actionSceneUp_triggered\0"
    "on_actionSceneDown_triggered\0"
    "on_sources_customContextMenuRequested\0"
    "on_scenes_itemDoubleClicked\0"
    "on_actionAddSource_triggered\0"
    "on_actionRemoveSource_triggered\0"
    "on_actionInteract_triggered\0"
    "on_actionSourceProperties_triggered\0"
    "on_actionSourceUp_triggered\0"
    "on_actionSourceDown_triggered\0"
    "on_actionMoveUp_triggered\0"
    "on_actionMoveDown_triggered\0"
    "on_actionMoveToTop_triggered\0"
    "on_actionMoveToBottom_triggered\0"
    "on_actionLockPreview_triggered\0"
    "on_scalingMenu_aboutToShow\0"
    "on_actionScaleWindow_triggered\0"
    "on_actionScaleCanvas_triggered\0"
    "on_actionScaleOutput_triggered\0"
    "on_streamButton_clicked\0on_recordButton_clicked\0"
    "VCamButtonClicked\0on_settingsButton_clicked\0"
    "Screenshot\0source_\0ScreenshotSelectedSource\0"
    "ScreenshotProgram\0ScreenshotScene\0"
    "on_actionHelpPortal_triggered\0"
    "on_actionWebsite_triggered\0"
    "on_actionDiscord_triggered\0"
    "on_preview_customContextMenuRequested\0"
    "on_program_customContextMenuRequested\0"
    "PreviewDisabledMenu\0"
    "on_actionNewSceneCollection_triggered\0"
    "on_actionDupSceneCollection_triggered\0"
    "on_actionRenameSceneCollection_triggered\0"
    "on_actionRemoveSceneCollection_triggered\0"
    "on_actionImportSceneCollection_triggered\0"
    "on_actionExportSceneCollection_triggered\0"
    "on_actionNewProfile_triggered\0"
    "on_actionDupProfile_triggered\0"
    "on_actionRenameProfile_triggered\0"
    "on_actionRemoveProfile_triggered\0"
    "on_actionImportProfile_triggered\0"
    "on_actionExportProfile_triggered\0"
    "on_actionShowSettingsFolder_triggered\0"
    "on_actionShowProfileFolder_triggered\0"
    "on_actionAlwaysOnTop_triggered\0"
    "on_toggleListboxToolbars_toggled\0"
    "visible\0on_toggleContextBar_toggled\0"
    "on_toggleStatusBar_toggled\0"
    "on_toggleSourceIcons_toggled\0"
    "on_transitions_currentIndexChanged\0"
    "index\0on_transitionRemove_clicked\0"
    "on_transitionProps_clicked\0"
    "on_transitionDuration_valueChanged\0"
    "on_modeSwitch_clicked\0"
    "on_sourcePropertiesButton_clicked\0"
    "on_sourceFiltersButton_clicked\0"
    "on_sourceInteractButton_clicked\0"
    "on_autoConfigure_triggered\0"
    "on_stats_triggered\0on_resetUI_triggered\0"
    "on_lockUI_toggled\0PauseToggled\0"
    "logUploadFinished\0crashUploadFinished\0"
    "openLogDialog\0crash\0updateCheckFinished\0"
    "AddSourceFromAction\0MoveSceneToTop\0"
    "MoveSceneToBottom\0EditSceneName\0"
    "EditSceneItemName\0SceneNameEdited\0"
    "QWidget*\0editor\0QAbstractItemDelegate::EndEditHint\0"
    "endHint\0OpenSceneFilters\0OpenFilters\0"
    "EnablePreviewDisplay\0enable\0TogglePreview\0"
    "NudgeUp\0NudgeDown\0NudgeLeft\0NudgeRight\0"
    "OpenStudioProgramProjector\0"
    "OpenPreviewProjector\0OpenSourceProjector\0"
    "OpenMultiviewProjector\0OpenSceneProjector\0"
    "OpenStudioProgramWindow\0OpenPreviewWindow\0"
    "OpenSourceWindow\0OpenMultiviewWindow\0"
    "OpenSceneWindow\0DeferredSysTrayLoad\0"
    "requeueCount\0StackedMixerAreaContextMenuRequested\0"
    "ResizeOutputSizeOfSource\0"
    "on_actionResetTransform_triggered\0"
    "StreamingActive\0RecordingActive\0"
    "ReplayBufferActive\0ClearContextBar\0"
    "UpdateContextBar\0UpdateContextBarDeferred\0"
    "imageIcon\0colorIcon\0slideshowIcon\0"
    "audioInputIcon\0audioOutputIcon\0"
    "desktopCapIcon\0windowCapIcon\0gameCapIcon\0"
    "cameraIcon\0textIcon\0mediaIcon\0browserIcon\0"
    "groupIcon\0sceneIcon\0defaultIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSBasic[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     255,   14, // methods
      15, 1756, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0, 1289,    2, 0x0a /* Public */,
       3,    0, 1290,    2, 0x0a /* Public */,
       4,    0, 1291,    2, 0x0a /* Public */,
       5,    0, 1292,    2, 0x0a /* Public */,
       6,    0, 1293,    2, 0x0a /* Public */,
       7,    0, 1294,    2, 0x0a /* Public */,
       8,    1, 1295,    2, 0x0a /* Public */,
      10,    1, 1298,    2, 0x0a /* Public */,
      11,    0, 1301,    2, 0x0a /* Public */,
      12,    0, 1302,    2, 0x0a /* Public */,
      13,    2, 1303,    2, 0x0a /* Public */,
      16,    0, 1308,    2, 0x0a /* Public */,
      17,    0, 1309,    2, 0x0a /* Public */,
      18,    0, 1310,    2, 0x0a /* Public */,
      19,    0, 1311,    2, 0x0a /* Public */,
      20,    2, 1312,    2, 0x0a /* Public */,
      22,    0, 1317,    2, 0x0a /* Public */,
      23,    0, 1318,    2, 0x0a /* Public */,
      24,    0, 1319,    2, 0x0a /* Public */,
      25,    0, 1320,    2, 0x0a /* Public */,
      26,    0, 1321,    2, 0x0a /* Public */,
      27,    0, 1322,    2, 0x0a /* Public */,
      28,    0, 1323,    2, 0x0a /* Public */,
      29,    1, 1324,    2, 0x0a /* Public */,
      30,    0, 1327,    2, 0x0a /* Public */,
      31,    0, 1328,    2, 0x0a /* Public */,
      32,    0, 1329,    2, 0x0a /* Public */,
      33,    1, 1330,    2, 0x0a /* Public */,
      34,    0, 1333,    2, 0x0a /* Public */,
      35,    0, 1334,    2, 0x0a /* Public */,
      36,    1, 1335,    2, 0x0a /* Public */,
      39,    1, 1338,    2, 0x0a /* Public */,
      40,    2, 1341,    2, 0x0a /* Public */,
      40,    1, 1346,    2, 0x2a /* Public | MethodCloned */,
      40,    6, 1349,    2, 0x0a /* Public */,
      40,    5, 1362,    2, 0x2a /* Public | MethodCloned */,
      40,    4, 1373,    2, 0x2a /* Public | MethodCloned */,
      40,    3, 1382,    2, 0x2a /* Public | MethodCloned */,
      40,    2, 1389,    2, 0x2a /* Public | MethodCloned */,
      40,    1, 1394,    2, 0x2a /* Public | MethodCloned */,
      48,    2, 1397,    2, 0x0a /* Public */,
      48,    1, 1402,    2, 0x2a /* Public | MethodCloned */,
      49,    2, 1405,    2, 0x0a /* Public */,
      49,    1, 1410,    2, 0x2a /* Public | MethodCloned */,
      52,    2, 1413,    2, 0x0a /* Public */,
      55,    0, 1418,    2, 0x0a /* Public */,
      56,    0, 1419,    2, 0x0a /* Public */,
      57,    0, 1420,    2, 0x0a /* Public */,
      58,    0, 1421,    2, 0x0a /* Public */,
      59,    1, 1422,    2, 0x08 /* Private */,
      62,    1, 1425,    2, 0x08 /* Private */,
      64,    1, 1428,    2, 0x08 /* Private */,
      65,    3, 1431,    2, 0x08 /* Private */,
      68,    1, 1438,    2, 0x08 /* Private */,
      69,    1, 1441,    2, 0x08 /* Private */,
      70,    0, 1444,    2, 0x08 /* Private */,
      71,    0, 1445,    2, 0x08 /* Private */,
      72,    0, 1446,    2, 0x08 /* Private */,
      73,    0, 1447,    2, 0x08 /* Private */,
      74,    1, 1448,    2, 0x08 /* Private */,
      75,    1, 1451,    2, 0x08 /* Private */,
      76,    2, 1454,    2, 0x08 /* Private */,
      80,    1, 1459,    2, 0x08 /* Private */,
      81,    0, 1462,    2, 0x08 /* Private */,
      82,    0, 1463,    2, 0x08 /* Private */,
      83,    0, 1464,    2, 0x08 /* Private */,
      84,    0, 1465,    2, 0x08 /* Private */,
      85,    1, 1466,    2, 0x08 /* Private */,
      86,    0, 1469,    2, 0x08 /* Private */,
      87,    0, 1470,    2, 0x08 /* Private */,
      88,    0, 1471,    2, 0x08 /* Private */,
      89,    1, 1472,    2, 0x08 /* Private */,
      92,    1, 1475,    2, 0x08 /* Private */,
      94,    0, 1478,    2, 0x08 /* Private */,
      95,    0, 1479,    2, 0x08 /* Private */,
      96,    0, 1480,    2, 0x08 /* Private */,
      97,    0, 1481,    2, 0x08 /* Private */,
      98,    0, 1482,    2, 0x08 /* Private */,
      99,    0, 1483,    2, 0x08 /* Private */,
     100,    0, 1484,    2, 0x08 /* Private */,
     101,    0, 1485,    2, 0x08 /* Private */,
     102,    0, 1486,    2, 0x08 /* Private */,
     103,    0, 1487,    2, 0x08 /* Private */,
     104,    0, 1488,    2, 0x08 /* Private */,
     105,    0, 1489,    2, 0x08 /* Private */,
     106,    0, 1490,    2, 0x08 /* Private */,
     107,    1, 1491,    2, 0x08 /* Private */,
     111,    0, 1494,    2, 0x08 /* Private */,
     112,    0, 1495,    2, 0x08 /* Private */,
     113,    0, 1496,    2, 0x08 /* Private */,
     114,    0, 1497,    2, 0x08 /* Private */,
     115,    0, 1498,    2, 0x08 /* Private */,
     116,    0, 1499,    2, 0x08 /* Private */,
     117,    0, 1500,    2, 0x08 /* Private */,
     118,    0, 1501,    2, 0x08 /* Private */,
     119,    1, 1502,    2, 0x08 /* Private */,
     122,    0, 1505,    2, 0x08 /* Private */,
     123,    0, 1506,    2, 0x08 /* Private */,
     124,    1, 1507,    2, 0x08 /* Private */,
     126,    1, 1510,    2, 0x08 /* Private */,
     127,    1, 1513,    2, 0x08 /* Private */,
     128,    1, 1516,    2, 0x08 /* Private */,
     129,    1, 1519,    2, 0x08 /* Private */,
     130,    1, 1522,    2, 0x08 /* Private */,
     131,    1, 1525,    2, 0x08 /* Private */,
     132,    1, 1528,    2, 0x08 /* Private */,
     133,    1, 1531,    2, 0x08 /* Private */,
     134,    1, 1534,    2, 0x08 /* Private */,
     135,    1, 1537,    2, 0x08 /* Private */,
     136,    1, 1540,    2, 0x08 /* Private */,
     137,    1, 1543,    2, 0x08 /* Private */,
     138,    1, 1546,    2, 0x08 /* Private */,
     139,    1, 1549,    2, 0x08 /* Private */,
     140,    1, 1552,    2, 0x08 /* Private */,
     142,    0, 1555,    2, 0x08 /* Private */,
     143,    1, 1556,    2, 0x08 /* Private */,
     145,    0, 1559,    2, 0x08 /* Private */,
     146,    0, 1560,    2, 0x08 /* Private */,
     147,    0, 1561,    2, 0x08 /* Private */,
     148,    0, 1562,    2, 0x08 /* Private */,
     149,    0, 1563,    2, 0x08 /* Private */,
     150,    0, 1564,    2, 0x08 /* Private */,
     151,    0, 1565,    2, 0x08 /* Private */,
     152,    0, 1566,    2, 0x08 /* Private */,
     153,    0, 1567,    2, 0x08 /* Private */,
     154,    0, 1568,    2, 0x08 /* Private */,
     155,    0, 1569,    2, 0x08 /* Private */,
     156,    0, 1570,    2, 0x08 /* Private */,
     157,    0, 1571,    2, 0x08 /* Private */,
     158,    0, 1572,    2, 0x08 /* Private */,
     159,    0, 1573,    2, 0x08 /* Private */,
     160,    0, 1574,    2, 0x08 /* Private */,
     161,    0, 1575,    2, 0x08 /* Private */,
     162,    0, 1576,    2, 0x08 /* Private */,
     163,    0, 1577,    2, 0x08 /* Private */,
     164,    0, 1578,    2, 0x08 /* Private */,
     165,    0, 1579,    2, 0x08 /* Private */,
     166,    0, 1580,    2, 0x08 /* Private */,
     167,    0, 1581,    2, 0x08 /* Private */,
     168,    0, 1582,    2, 0x08 /* Private */,
     169,    0, 1583,    2, 0x08 /* Private */,
     170,    0, 1584,    2, 0x08 /* Private */,
     171,    0, 1585,    2, 0x08 /* Private */,
     172,    1, 1586,    2, 0x08 /* Private */,
     174,    2, 1589,    2, 0x08 /* Private */,
     178,    1, 1594,    2, 0x08 /* Private */,
     179,    0, 1597,    2, 0x08 /* Private */,
     180,    0, 1598,    2, 0x08 /* Private */,
     181,    0, 1599,    2, 0x08 /* Private */,
     182,    0, 1600,    2, 0x08 /* Private */,
     183,    0, 1601,    2, 0x08 /* Private */,
     184,    1, 1602,    2, 0x08 /* Private */,
     185,    1, 1605,    2, 0x08 /* Private */,
     186,    0, 1608,    2, 0x08 /* Private */,
     187,    0, 1609,    2, 0x08 /* Private */,
     188,    0, 1610,    2, 0x08 /* Private */,
     189,    0, 1611,    2, 0x08 /* Private */,
     190,    0, 1612,    2, 0x08 /* Private */,
     191,    0, 1613,    2, 0x08 /* Private */,
     192,    0, 1614,    2, 0x08 /* Private */,
     193,    0, 1615,    2, 0x08 /* Private */,
     194,    0, 1616,    2, 0x08 /* Private */,
     195,    0, 1617,    2, 0x08 /* Private */,
     196,    0, 1618,    2, 0x08 /* Private */,
     197,    0, 1619,    2, 0x08 /* Private */,
     198,    0, 1620,    2, 0x08 /* Private */,
     199,    0, 1621,    2, 0x08 /* Private */,
     200,    0, 1622,    2, 0x08 /* Private */,
     201,    0, 1623,    2, 0x08 /* Private */,
     202,    0, 1624,    2, 0x08 /* Private */,
     203,    0, 1625,    2, 0x08 /* Private */,
     204,    0, 1626,    2, 0x08 /* Private */,
     205,    1, 1627,    2, 0x08 /* Private */,
     205,    0, 1630,    2, 0x28 /* Private | MethodCloned */,
     207,    0, 1631,    2, 0x08 /* Private */,
     208,    0, 1632,    2, 0x08 /* Private */,
     209,    0, 1633,    2, 0x08 /* Private */,
     210,    0, 1634,    2, 0x08 /* Private */,
     211,    0, 1635,    2, 0x08 /* Private */,
     212,    0, 1636,    2, 0x08 /* Private */,
     213,    1, 1637,    2, 0x08 /* Private */,
     214,    1, 1640,    2, 0x08 /* Private */,
     215,    1, 1643,    2, 0x08 /* Private */,
     216,    0, 1646,    2, 0x08 /* Private */,
     217,    0, 1647,    2, 0x08 /* Private */,
     218,    0, 1648,    2, 0x08 /* Private */,
     219,    0, 1649,    2, 0x08 /* Private */,
     220,    0, 1650,    2, 0x08 /* Private */,
     221,    0, 1651,    2, 0x08 /* Private */,
     222,    0, 1652,    2, 0x08 /* Private */,
     223,    0, 1653,    2, 0x08 /* Private */,
     224,    0, 1654,    2, 0x08 /* Private */,
     225,    0, 1655,    2, 0x08 /* Private */,
     226,    0, 1656,    2, 0x08 /* Private */,
     227,    0, 1657,    2, 0x08 /* Private */,
     228,    0, 1658,    2, 0x08 /* Private */,
     229,    0, 1659,    2, 0x08 /* Private */,
     230,    0, 1660,    2, 0x08 /* Private */,
     231,    1, 1661,    2, 0x08 /* Private */,
     233,    1, 1664,    2, 0x08 /* Private */,
     234,    1, 1667,    2, 0x08 /* Private */,
     235,    1, 1670,    2, 0x08 /* Private */,
     236,    1, 1673,    2, 0x08 /* Private */,
     238,    0, 1676,    2, 0x08 /* Private */,
     239,    0, 1677,    2, 0x08 /* Private */,
     240,    1, 1678,    2, 0x08 /* Private */,
     241,    0, 1681,    2, 0x08 /* Private */,
     242,    0, 1682,    2, 0x08 /* Private */,
     243,    0, 1683,    2, 0x08 /* Private */,
     244,    0, 1684,    2, 0x08 /* Private */,
     245,    0, 1685,    2, 0x08 /* Private */,
     246,    0, 1686,    2, 0x08 /* Private */,
     247,    0, 1687,    2, 0x08 /* Private */,
     248,    1, 1688,    2, 0x08 /* Private */,
     249,    0, 1691,    2, 0x08 /* Private */,
     250,    2, 1692,    2, 0x08 /* Private */,
     251,    2, 1697,    2, 0x08 /* Private */,
     252,    2, 1702,    2, 0x08 /* Private */,
     254,    0, 1707,    2, 0x08 /* Private */,
     255,    0, 1708,    2, 0x08 /* Private */,
     256,    0, 1709,    2, 0x08 /* Private */,
     257,    0, 1710,    2, 0x08 /* Private */,
     258,    0, 1711,    2, 0x08 /* Private */,
     259,    0, 1712,    2, 0x08 /* Private */,
     260,    2, 1713,    2, 0x08 /* Private */,
     265,    0, 1718,    2, 0x08 /* Private */,
     266,    0, 1719,    2, 0x08 /* Private */,
     267,    1, 1720,    2, 0x08 /* Private */,
     269,    0, 1723,    2, 0x08 /* Private */,
     270,    0, 1724,    2, 0x08 /* Private */,
     271,    0, 1725,    2, 0x08 /* Private */,
     272,    0, 1726,    2, 0x08 /* Private */,
     273,    0, 1727,    2, 0x08 /* Private */,
     274,    0, 1728,    2, 0x08 /* Private */,
     275,    0, 1729,    2, 0x08 /* Private */,
     276,    0, 1730,    2, 0x08 /* Private */,
     277,    0, 1731,    2, 0x08 /* Private */,
     278,    0, 1732,    2, 0x08 /* Private */,
     279,    0, 1733,    2, 0x08 /* Private */,
     280,    0, 1734,    2, 0x08 /* Private */,
     281,    0, 1735,    2, 0x08 /* Private */,
     282,    0, 1736,    2, 0x08 /* Private */,
     283,    0, 1737,    2, 0x08 /* Private */,
     284,    1, 1738,    2, 0x08 /* Private */,
     286,    0, 1741,    2, 0x08 /* Private */,
     287,    0, 1742,    2, 0x08 /* Private */,
     288,    0, 1743,    2, 0x0a /* Public */,
     289,    0, 1744,    2, 0x0a /* Public */,
     290,    0, 1745,    2, 0x0a /* Public */,
     291,    0, 1746,    2, 0x0a /* Public */,
     292,    0, 1747,    2, 0x0a /* Public */,
     293,    1, 1748,    2, 0x0a /* Public */,
     293,    0, 1751,    2, 0x2a /* Public | MethodCloned */,
     294,    1, 1752,    2, 0x0a /* Public */,
     294,    0, 1755,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   21,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void, 0x80000000 | 41, QMetaType::Bool,   42,   43,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void, 0x80000000 | 37, QMetaType::Bool, QMetaType::Bool, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,   42,   43,   44,   45,   46,   47,
    QMetaType::Void, 0x80000000 | 37, QMetaType::Bool, QMetaType::Bool, QMetaType::Int, QMetaType::Bool,   42,   43,   44,   45,   46,
    QMetaType::Void, 0x80000000 | 37, QMetaType::Bool, QMetaType::Bool, QMetaType::Int,   42,   43,   44,   45,
    QMetaType::Void, 0x80000000 | 37, QMetaType::Bool, QMetaType::Bool,   42,   43,   44,
    QMetaType::Void, 0x80000000 | 37, QMetaType::Bool,   42,   43,
    QMetaType::Void, 0x80000000 | 37,   42,
    QMetaType::Void, 0x80000000 | 37, QMetaType::Bool,   42,   43,
    QMetaType::Void, 0x80000000 | 37,   42,
    QMetaType::Bool, QMetaType::Bool, QMetaType::QString,   50,   51,
    QMetaType::Bool, QMetaType::Bool,   50,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   53,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 60,   61,
    QMetaType::Void, 0x80000000 | 37,   63,
    QMetaType::Void, 0x80000000 | 37,   63,
    QMetaType::Void, 0x80000000 | 37, QMetaType::QString, QMetaType::QString,   63,   66,   67,
    QMetaType::Void, 0x80000000 | 37,   63,
    QMetaType::Void, 0x80000000 | 37,   63,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void, 0x80000000 | 77, QMetaType::Bool,   78,   79,
    QMetaType::Void, QMetaType::QString,   78,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   78,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 90,   91,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 108, 0x80000000 | 109,  110,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 120,  121,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::Int,  141,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  144,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,  173,
    QMetaType::Void, 0x80000000 | 175, 0x80000000 | 175,  176,  177,
    QMetaType::Void, QMetaType::QPoint,  173,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,  173,
    QMetaType::Void, 0x80000000 | 175,   61,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 37,  206,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,  173,
    QMetaType::Void, QMetaType::QPoint,  173,
    QMetaType::Void, QMetaType::QPoint,  173,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  232,
    QMetaType::Void, QMetaType::Bool,  232,
    QMetaType::Void, QMetaType::Bool,  232,
    QMetaType::Void, QMetaType::Bool,  232,
    QMetaType::Void, QMetaType::Int,  237,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  141,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  144,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   53,   54,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   53,   54,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   53,  253,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 261, 0x80000000 | 263,  262,  264,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  268,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  285,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void,

 // properties: name, type, flags
     295, QMetaType::QIcon, 0x00095003,
     296, QMetaType::QIcon, 0x00095003,
     297, QMetaType::QIcon, 0x00095003,
     298, QMetaType::QIcon, 0x00095003,
     299, QMetaType::QIcon, 0x00095003,
     300, QMetaType::QIcon, 0x00095003,
     301, QMetaType::QIcon, 0x00095003,
     302, QMetaType::QIcon, 0x00095003,
     303, QMetaType::QIcon, 0x00095003,
     304, QMetaType::QIcon, 0x00095003,
     305, QMetaType::QIcon, 0x00095003,
     306, QMetaType::QIcon, 0x00095003,
     307, QMetaType::QIcon, 0x00095003,
     308, QMetaType::QIcon, 0x00095003,
     309, QMetaType::QIcon, 0x00095003,

       0        // eod
};

void OBSBasic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OBSBasic *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DeferSaveBegin(); break;
        case 1: _t->DeferSaveEnd(); break;
        case 2: _t->DisplayStreamStartError(); break;
        case 3: _t->StartStreaming(); break;
        case 4: _t->StopStreaming(); break;
        case 5: _t->ForceStopStreaming(); break;
        case 6: _t->StreamDelayStarting((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->StreamDelayStopping((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->StreamingStart(); break;
        case 9: _t->StreamStopping(); break;
        case 10: _t->StreamingStop((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->StartRecording(); break;
        case 12: _t->StopRecording(); break;
        case 13: _t->RecordingStart(); break;
        case 14: _t->RecordStopping(); break;
        case 15: _t->RecordingStop((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: _t->ShowReplayBufferPauseWarning(); break;
        case 17: _t->StartReplayBuffer(); break;
        case 18: _t->StopReplayBuffer(); break;
        case 19: _t->ReplayBufferStart(); break;
        case 20: _t->ReplayBufferSave(); break;
        case 21: _t->ReplayBufferSaved(); break;
        case 22: _t->ReplayBufferStopping(); break;
        case 23: _t->ReplayBufferStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->StartVirtualCam(); break;
        case 25: _t->StopVirtualCam(); break;
        case 26: _t->OnVirtualCamStart(); break;
        case 27: _t->OnVirtualCamStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->SaveProjectDeferred(); break;
        case 29: _t->SaveProject(); break;
        case 30: _t->SetTransition((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 31: _t->OverrideTransition((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 32: _t->TransitionToScene((*reinterpret_cast< OBSScene(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 33: _t->TransitionToScene((*reinterpret_cast< OBSScene(*)>(_a[1]))); break;
        case 34: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 35: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 36: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 37: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 38: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 39: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 40: _t->SetCurrentScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 41: _t->SetCurrentScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 42: { bool _r = _t->AddSceneCollection((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 43: { bool _r = _t->AddSceneCollection((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 44: _t->UpdatePatronJson((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 45: _t->ShowContextBar(); break;
        case 46: _t->HideContextBar(); break;
        case 47: _t->PauseRecording(); break;
        case 48: _t->UnpauseRecording(); break;
        case 49: _t->AddSceneItem((*reinterpret_cast< OBSSceneItem(*)>(_a[1]))); break;
        case 50: _t->AddScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 51: _t->RemoveScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 52: _t->RenameSources((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 53: _t->ActivateAudioSource((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 54: _t->DeactivateAudioSource((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 55: _t->DuplicateSelectedScene(); break;
        case 56: _t->RemoveSelectedScene(); break;
        case 57: _t->RemoveSelectedSceneItem(); break;
        case 58: _t->ToggleAlwaysOnTop(); break;
        case 59: _t->ReorderSources((*reinterpret_cast< OBSScene(*)>(_a[1]))); break;
        case 60: _t->RefreshSources((*reinterpret_cast< OBSScene(*)>(_a[1]))); break;
        case 61: _t->ProcessHotkey((*reinterpret_cast< obs_hotkey_id(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 62: _t->AddTransition((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 63: _t->RenameTransition(); break;
        case 64: _t->TransitionClicked(); break;
        case 65: _t->TransitionStopped(); break;
        case 66: _t->TransitionFullyStopped(); break;
        case 67: _t->TriggerQuickTransition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 68: _t->SetDeinterlacingMode(); break;
        case 69: _t->SetDeinterlacingOrder(); break;
        case 70: _t->SetScaleFilter(); break;
        case 71: _t->IconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 72: _t->SetShowing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 73: _t->ToggleShowHide(); break;
        case 74: _t->HideAudioControl(); break;
        case 75: _t->UnhideAllAudioControls(); break;
        case 76: _t->ToggleHideMixer(); break;
        case 77: _t->MixerRenameSource(); break;
        case 78: _t->on_vMixerScrollArea_customContextMenuRequested(); break;
        case 79: _t->on_hMixerScrollArea_customContextMenuRequested(); break;
        case 80: _t->on_actionCopySource_triggered(); break;
        case 81: _t->on_actionPasteRef_triggered(); break;
        case 82: _t->on_actionPasteDup_triggered(); break;
        case 83: _t->on_actionCopyFilters_triggered(); break;
        case 84: _t->on_actionPasteFilters_triggered(); break;
        case 85: _t->ColorChange(); break;
        case 86: { SourceTreeItem* _r = _t->GetItemWidgetFromSceneItem((*reinterpret_cast< obs_sceneitem_t*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< SourceTreeItem**>(_a[0]) = std::move(_r); }  break;
        case 87: _t->on_actionShowAbout_triggered(); break;
        case 88: _t->AudioMixerCopyFilters(); break;
        case 89: _t->AudioMixerPasteFilters(); break;
        case 90: _t->EnablePreview(); break;
        case 91: _t->DisablePreview(); break;
        case 92: _t->SceneCopyFilters(); break;
        case 93: _t->ScenePasteFilters(); break;
        case 94: _t->CheckDiskSpaceRemaining(); break;
        case 95: _t->OpenSavedProjector((*reinterpret_cast< SavedProjectorInfo*(*)>(_a[1]))); break;
        case 96: _t->ScenesReordered(); break;
        case 97: _t->ResetStatsHotkey(); break;
        case 98: _t->SetImageIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 99: _t->SetColorIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 100: _t->SetSlideshowIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 101: _t->SetAudioInputIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 102: _t->SetAudioOutputIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 103: _t->SetDesktopCapIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 104: _t->SetWindowCapIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 105: _t->SetGameCapIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 106: _t->SetCameraIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 107: _t->SetTextIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 108: _t->SetMediaIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 109: _t->SetBrowserIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 110: _t->SetGroupIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 111: _t->SetSceneIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 112: _t->SetDefaultIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 113: _t->TBarChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 114: _t->TBarReleased(); break;
        case 115: _t->LockVolumeControl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 116: _t->on_actionFullscreenInterface_triggered(); break;
        case 117: _t->on_actionShow_Recordings_triggered(); break;
        case 118: _t->on_actionRemux_triggered(); break;
        case 119: _t->on_action_Settings_triggered(); break;
        case 120: _t->on_actionAdvAudioProperties_triggered(); break;
        case 121: _t->on_advAudioProps_clicked(); break;
        case 122: _t->on_advAudioProps_destroyed(); break;
        case 123: _t->on_actionShowLogs_triggered(); break;
        case 124: _t->on_actionUploadCurrentLog_triggered(); break;
        case 125: _t->on_actionUploadLastLog_triggered(); break;
        case 126: _t->on_actionViewCurrentLog_triggered(); break;
        case 127: _t->on_actionCheckForUpdates_triggered(); break;
        case 128: _t->on_actionShowCrashLogs_triggered(); break;
        case 129: _t->on_actionUploadLastCrashLog_triggered(); break;
        case 130: _t->on_actionEditTransform_triggered(); break;
        case 131: _t->on_actionCopyTransform_triggered(); break;
        case 132: _t->on_actionPasteTransform_triggered(); break;
        case 133: _t->on_actionRotate90CW_triggered(); break;
        case 134: _t->on_actionRotate90CCW_triggered(); break;
        case 135: _t->on_actionRotate180_triggered(); break;
        case 136: _t->on_actionFlipHorizontal_triggered(); break;
        case 137: _t->on_actionFlipVertical_triggered(); break;
        case 138: _t->on_actionFitToScreen_triggered(); break;
        case 139: _t->on_actionStretchToScreen_triggered(); break;
        case 140: _t->on_actionCenterToScreen_triggered(); break;
        case 141: _t->on_actionVerticalCenter_triggered(); break;
        case 142: _t->on_actionHorizontalCenter_triggered(); break;
        case 143: _t->on_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 144: _t->on_scenes_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 145: _t->on_scenes_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 146: _t->on_actionGridMode_triggered(); break;
        case 147: _t->on_actionAddScene_triggered(); break;
        case 148: _t->on_actionRemoveScene_triggered(); break;
        case 149: _t->on_actionSceneUp_triggered(); break;
        case 150: _t->on_actionSceneDown_triggered(); break;
        case 151: _t->on_sources_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 152: _t->on_scenes_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 153: _t->on_actionAddSource_triggered(); break;
        case 154: _t->on_actionRemoveSource_triggered(); break;
        case 155: _t->on_actionInteract_triggered(); break;
        case 156: _t->on_actionSourceProperties_triggered(); break;
        case 157: _t->on_actionSourceUp_triggered(); break;
        case 158: _t->on_actionSourceDown_triggered(); break;
        case 159: _t->on_actionMoveUp_triggered(); break;
        case 160: _t->on_actionMoveDown_triggered(); break;
        case 161: _t->on_actionMoveToTop_triggered(); break;
        case 162: _t->on_actionMoveToBottom_triggered(); break;
        case 163: _t->on_actionLockPreview_triggered(); break;
        case 164: _t->on_scalingMenu_aboutToShow(); break;
        case 165: _t->on_actionScaleWindow_triggered(); break;
        case 166: _t->on_actionScaleCanvas_triggered(); break;
        case 167: _t->on_actionScaleOutput_triggered(); break;
        case 168: _t->on_streamButton_clicked(); break;
        case 169: _t->on_recordButton_clicked(); break;
        case 170: _t->VCamButtonClicked(); break;
        case 171: _t->on_settingsButton_clicked(); break;
        case 172: _t->Screenshot((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 173: _t->Screenshot(); break;
        case 174: _t->ScreenshotSelectedSource(); break;
        case 175: _t->ScreenshotProgram(); break;
        case 176: _t->ScreenshotScene(); break;
        case 177: _t->on_actionHelpPortal_triggered(); break;
        case 178: _t->on_actionWebsite_triggered(); break;
        case 179: _t->on_actionDiscord_triggered(); break;
        case 180: _t->on_preview_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 181: _t->on_program_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 182: _t->PreviewDisabledMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 183: _t->on_actionNewSceneCollection_triggered(); break;
        case 184: _t->on_actionDupSceneCollection_triggered(); break;
        case 185: _t->on_actionRenameSceneCollection_triggered(); break;
        case 186: _t->on_actionRemoveSceneCollection_triggered(); break;
        case 187: _t->on_actionImportSceneCollection_triggered(); break;
        case 188: _t->on_actionExportSceneCollection_triggered(); break;
        case 189: _t->on_actionNewProfile_triggered(); break;
        case 190: _t->on_actionDupProfile_triggered(); break;
        case 191: _t->on_actionRenameProfile_triggered(); break;
        case 192: _t->on_actionRemoveProfile_triggered(); break;
        case 193: _t->on_actionImportProfile_triggered(); break;
        case 194: _t->on_actionExportProfile_triggered(); break;
        case 195: _t->on_actionShowSettingsFolder_triggered(); break;
        case 196: _t->on_actionShowProfileFolder_triggered(); break;
        case 197: _t->on_actionAlwaysOnTop_triggered(); break;
        case 198: _t->on_toggleListboxToolbars_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 199: _t->on_toggleContextBar_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 200: _t->on_toggleStatusBar_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 201: _t->on_toggleSourceIcons_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 202: _t->on_transitions_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 203: _t->on_transitionRemove_clicked(); break;
        case 204: _t->on_transitionProps_clicked(); break;
        case 205: _t->on_transitionDuration_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 206: _t->on_modeSwitch_clicked(); break;
        case 207: _t->on_sourcePropertiesButton_clicked(); break;
        case 208: _t->on_sourceFiltersButton_clicked(); break;
        case 209: _t->on_sourceInteractButton_clicked(); break;
        case 210: _t->on_autoConfigure_triggered(); break;
        case 211: _t->on_stats_triggered(); break;
        case 212: _t->on_resetUI_triggered(); break;
        case 213: _t->on_lockUI_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 214: _t->PauseToggled(); break;
        case 215: _t->logUploadFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 216: _t->crashUploadFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 217: _t->openLogDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 218: _t->updateCheckFinished(); break;
        case 219: _t->AddSourceFromAction(); break;
        case 220: _t->MoveSceneToTop(); break;
        case 221: _t->MoveSceneToBottom(); break;
        case 222: _t->EditSceneName(); break;
        case 223: _t->EditSceneItemName(); break;
        case 224: _t->SceneNameEdited((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemDelegate::EndEditHint(*)>(_a[2]))); break;
        case 225: _t->OpenSceneFilters(); break;
        case 226: _t->OpenFilters(); break;
        case 227: _t->EnablePreviewDisplay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 228: _t->TogglePreview(); break;
        case 229: _t->NudgeUp(); break;
        case 230: _t->NudgeDown(); break;
        case 231: _t->NudgeLeft(); break;
        case 232: _t->NudgeRight(); break;
        case 233: _t->OpenStudioProgramProjector(); break;
        case 234: _t->OpenPreviewProjector(); break;
        case 235: _t->OpenSourceProjector(); break;
        case 236: _t->OpenMultiviewProjector(); break;
        case 237: _t->OpenSceneProjector(); break;
        case 238: _t->OpenStudioProgramWindow(); break;
        case 239: _t->OpenPreviewWindow(); break;
        case 240: _t->OpenSourceWindow(); break;
        case 241: _t->OpenMultiviewWindow(); break;
        case 242: _t->OpenSceneWindow(); break;
        case 243: _t->DeferredSysTrayLoad((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 244: _t->StackedMixerAreaContextMenuRequested(); break;
        case 245: _t->ResizeOutputSizeOfSource(); break;
        case 246: _t->on_actionResetTransform_triggered(); break;
        case 247: { bool _r = _t->StreamingActive();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 248: { bool _r = _t->RecordingActive();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 249: { bool _r = _t->ReplayBufferActive();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 250: _t->ClearContextBar(); break;
        case 251: _t->UpdateContextBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 252: _t->UpdateContextBar(); break;
        case 253: _t->UpdateContextBarDeferred((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 254: _t->UpdateContextBarDeferred(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 224:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<OBSBasic *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QIcon*>(_v) = _t->GetImageIcon(); break;
        case 1: *reinterpret_cast< QIcon*>(_v) = _t->GetColorIcon(); break;
        case 2: *reinterpret_cast< QIcon*>(_v) = _t->GetSlideshowIcon(); break;
        case 3: *reinterpret_cast< QIcon*>(_v) = _t->GetAudioInputIcon(); break;
        case 4: *reinterpret_cast< QIcon*>(_v) = _t->GetAudioOutputIcon(); break;
        case 5: *reinterpret_cast< QIcon*>(_v) = _t->GetDesktopCapIcon(); break;
        case 6: *reinterpret_cast< QIcon*>(_v) = _t->GetWindowCapIcon(); break;
        case 7: *reinterpret_cast< QIcon*>(_v) = _t->GetGameCapIcon(); break;
        case 8: *reinterpret_cast< QIcon*>(_v) = _t->GetCameraIcon(); break;
        case 9: *reinterpret_cast< QIcon*>(_v) = _t->GetTextIcon(); break;
        case 10: *reinterpret_cast< QIcon*>(_v) = _t->GetMediaIcon(); break;
        case 11: *reinterpret_cast< QIcon*>(_v) = _t->GetBrowserIcon(); break;
        case 12: *reinterpret_cast< QIcon*>(_v) = _t->GetGroupIcon(); break;
        case 13: *reinterpret_cast< QIcon*>(_v) = _t->GetSceneIcon(); break;
        case 14: *reinterpret_cast< QIcon*>(_v) = _t->GetDefaultIcon(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<OBSBasic *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->SetImageIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 1: _t->SetColorIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 2: _t->SetSlideshowIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 3: _t->SetAudioInputIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 4: _t->SetAudioOutputIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 5: _t->SetDesktopCapIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 6: _t->SetWindowCapIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 7: _t->SetGameCapIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 8: _t->SetCameraIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 9: _t->SetTextIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 10: _t->SetMediaIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 11: _t->SetBrowserIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 12: _t->SetGroupIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 13: _t->SetSceneIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 14: _t->SetDefaultIcon(*reinterpret_cast< QIcon*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject OBSBasic::staticMetaObject = { {
    QMetaObject::SuperData::link<OBSMainWindow::staticMetaObject>(),
    qt_meta_stringdata_OBSBasic.data,
    qt_meta_data_OBSBasic,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OBSBasic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasic::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OBSBasic.stringdata0))
        return static_cast<void*>(this);
    return OBSMainWindow::qt_metacast(_clname);
}

int OBSBasic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OBSMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 255)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 255;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 255)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 255;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_SceneRenameDelegate_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SceneRenameDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SceneRenameDelegate_t qt_meta_stringdata_SceneRenameDelegate = {
    {
QT_MOC_LITERAL(0, 0, 19) // "SceneRenameDelegate"

    },
    "SceneRenameDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SceneRenameDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SceneRenameDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SceneRenameDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_SceneRenameDelegate.data,
    qt_meta_data_SceneRenameDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SceneRenameDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SceneRenameDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SceneRenameDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int SceneRenameDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
