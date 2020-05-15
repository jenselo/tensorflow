/* Copyright 2020 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_LITE_MICRO_EVENT_LOGGER_EVENT_LOGGER_H
#define TENSORFLOW_LITE_MICRO_EVENT_LOGGER_EVENT_LOGGER_H

#include "tensorflow/lite/c/common.h"
#include "event_ids.h"

namespace tflite {
namespace {

typedef void (*LogEvent)(void *data, size_t data_size);


struct EventLogger_Event {
  int32_t op_id; // Operator id (TfLiteRegistration.builtin_code)
  uint32_t layer; // Which layer in the network the event happens on
  EventID event_id; // The event that occurred. Defined in event_ids.h.
  uint8_t* event_data; // Can be used to send any required data
  size_t event_data_size;
};

}
}

#endif // TENSORFLOW_LITE_MICRO_EVENT_LOGGER_EVENT_LOGGER_H
