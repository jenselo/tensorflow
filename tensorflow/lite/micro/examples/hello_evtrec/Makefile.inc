include tensorflow/lite/micro/evtrec_profiler/Makefile.inc

PERSON_DETECT_MODEL_HDRS := \
$(MAKEFILE_DIR)/downloads/person_model_int8/person_detect_model_data.h

PERSON_DETECT_MODEL_SRCS := \
$(MAKEFILE_DIR)/downloads/person_model_int8/person_detect_model_data.cc

HELLO_EVTREC_SRCS := \
tensorflow/lite/micro/examples/hello_evtrec/main.cc \
tensorflow/lite/micro/examples/hello_evtrec/main_functions.cc \
$(EVENT_RECORDER_SRCS) \
$(EVTREC_PROFILER_SRCS) \
$(PERSON_DETECT_MODEL_SRCS)

HELLO_EVTREC_HDRS := \
tensorflow/lite/micro/examples/hello_evtrec/main_functions.h \
tensorflow/lite/micro/examples/person_detection/person_detect_model_data.h \
$(EVENT_RECORDER_HDRS) \
$(EVTREC_PROFILER_HDRS) \
tensorflow/lite/micro/cortex_m_generic/debug_log_callback.h \
$(PERSON_DETECT_MODEL_HDRS)

THIRD_PARTY_CC_HDRS += \
$(EVENT_RECORDER_HDRS)

THIRD_PARTY_CC_SRCS += \
$(EVENT_RECORDER_SRCS)

$(eval $(call microlite_test,hello_evtrec,\
$(HELLO_EVTREC_SRCS), $(HELLO_EVTREC_HDRS)))
