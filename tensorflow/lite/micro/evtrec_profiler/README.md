# evtrec profiler
The EvtRecProfiler is implemented as a sub-class to the MicroProfiler, and implements BeginEvent(), EndEvent(), GetTotalTicks() and Log().

Instead of using MicroPrintf to log information, it uses the Arm Event Recorder, which is an API that can be used to log events to a buffer located in the memory on the target system. A host can then read the events from the target memory using a debug unit and display it using the Arm Keil MDK.

The main difference from the MicroProfiler is that the EvtRecProfiler records an event in BeginEvent() and EndEvent(), instead of in Log(). The reason for this is that the Arm EventRecorder API adds a timestamp to each of the events, so logging them in real time leads the events being displayed in the correct timeline.

More information on Arm Event Recorder can be found here
https://www.keil.com/pack/doc/compiler/EventRecorder/html/er_overview.html

Note that this code is not intended as a final product, but as a basis for discussion regarding the overall design.

# examples/hello_evtrec
A quick "Hello World" type example based on the hello_world-example to show how to use the EvtRecProfiler instead of the MicroProfiler in an application. The changes needed are:
```
tensorflow/lite/micro/evtrec_profiler/evtrec_profiler.h
```
needs to be included instead of micro_profiler.h, and the profiler needs to be declared as
```
tflite::EvtRecProfiler* profiler
```