#ifndef PROFILING_EVENTRECORDER_H
#define PROFILING_EVENTRECORDER_H

// This is very much a work in progress. A more flexible solution would be
// to have a class ProfilerBackend, which then ProfilerBackendEventRecorder
// implements, in the same way the memory planners are structured.
#ifdef PROFILING_BACKEND_EVENT_RECORDER
#include "EventRecorder.h" // From third party dependency

// Component id. Shall match component tag 'no' in SCVD-file, if used.
#ifndef TFLU_COMP_ID
#define TFLU_COMP_ID  0
#endif

#define PROFILER_INIT()                EventRecorderInitialize (EventRecordAll, 1)                  // initialize and start Event Recorder
#define PROFILER_INVOKE_START(layer)   EventRecord2 (TFLU_COMP_ID+1+EventLevelAPI, 1+layer, 0)      // Event at Start
#define PROFILER_INVOKE_STOP(layer)    EventRecord2 (TFLU_COMP_ID+2+EventLevelAPI, 1+layer, 0)      // Event at Stop

#else
#define PROFILER_INIT()
#define PROFILER_INVOKE_START(layer)
#define PROFILER_INVOKE_STOP(layer)
#endif



#endif // PROFILING_EVENTRECORDER_H
