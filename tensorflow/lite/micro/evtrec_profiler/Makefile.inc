$(eval $(call add_third_party_download,$(EVENTRECORDER_URL),$(EVENTRECORDER_MD5),event_recorder,))

EVENT_RECORDER_HDRS := \
$(MAKEFILE_DIR)/downloads/event_recorder/EventRecorder/Include/EventRecorder.h \
$(MAKEFILE_DIR)/downloads/event_recorder/EventRecorder/Config/EventRecorderConf.h

EVENT_RECORDER_SRCS := \
$(MAKEFILE_DIR)/downloads/event_recorder/EventRecorder/Source/EventRecorder.c

EVTREC_PROFILER_HDRS := \
tensorflow/lite/micro/evtrec_profiler/evtrec_profiler.h \
tensorflow/lite/micro/micro_profiler.h \

EVTREC_PROFILER_SRCS := \
tensorflow/lite/micro/evtrec_profiler/evtrec_profiler.cc

INCLUDES += \
  -I$(MAKEFILE_DIR)/downloads/event_recorder
