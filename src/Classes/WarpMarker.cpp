#include "../../include/WarpMarker.h"

WarpMarker::WarpMarker(double beat, double timestamp) :
    _beat(beat),
    _timestamp(timestamp)
{}

WarpMarker::WarpMarker(WarpMarker&& wm) :
    _beat(wm.beat()),
    _timestamp(wm.time())
{}

inline
double  WarpMarker::beat() const { return _beat; }

inline
double  WarpMarker::time() const { return _timestamp; }
