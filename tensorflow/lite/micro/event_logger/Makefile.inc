ifneq ($(filter logevents,$(ALL_TAGS)),)
		ifneq ($(filter ethos-u, $(ALL_TAGS)),)
				INCLUDES += -Itensorflow/lite/micro/event_logger/ethosu/
		else
				INCLUDES += -Itensorflow/lite/micro/event_logger/default/
		endif
endif
