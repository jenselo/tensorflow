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

#ifndef TENSORFLOW_LITE_MICRO_EVENT_LOGGER_EVENT_IDS_H
#define TENSORFLOW_LITE_MICRO_EVENT_LOGGER_EVENT_IDS_H

namespace tflite {

enum EventID {
  EventID_START = 0,
  EventID_STOP = 1,
  EventID_ETHOSU_PLACEHOLDER_1 = 2,
  EventID_ETHOSU_PLACEHOLDER_2 = 3,
  EventID_ETHOSU_PLACEHOLDER_3 = 4,
};

inline const char * const *EnumNamesEventID() {
  static const char * const event_names[5] {
    "START",
    "STOP",
    "ETHOSU_PLACEHOLDER_1",
    "ETHOSU_PLACEHOLDER_2",
    "ETHOSU_PLACEHOLDER_3",
  };

  return event_names;
}

inline const char * GetEventNameFromId(EventID event_id) {
  if (EventID_START > event_id || EventID_ETHOSU_PLACEHOLDER_3 < event_id) {
    return "";
  }
  return EnumNamesEventID()[event_id];
}

}

#endif // TENSORFLOW_LITE_MICRO_EVENT_LOGGER_EVENT_IDS_H
