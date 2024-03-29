# - Config file for the w32-pthreads package
# It defines the following variables
#  THREADS_INCLUDE_DIRS
#  THREADS_LIBRARIES

set(W32_PTHREADS_INCLUDE_DIRS "D:/Dev/obs-studio/deps/w32-pthreads")

# Cleanup possible relative paths
get_filename_component(W32_PTHREADS_INCLUDE_DIRS "${THREADS_INCLUDE_DIRS}" ABSOLUTE)

if(NOT TARGET w32-pthreads)
	include("${CMAKE_CURRENT_LIST_DIR}/w32-pthreadsTarget.cmake")
endif()

set(W32_PTHREADS_LIBRARIES w32-pthreads)
