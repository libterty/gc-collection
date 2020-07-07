#include <nan.h>
#include <math.h>

using namespace v8;

struct HeapInfo
{
  /* data */
  size_t totalHeapSize;
  size_t totalHeapExecutableSize;
  size_t totalPhysicalSize;
  size_t usedHeapSize;
  size_t heapSizeLimit;
  size_t totalAvailableSize;
  size_t mallocedMemory;
  size_t peakMallocedMemory;
  size_t numberOfNativeContexts;
  size_t numberOfDetachedContexts;
};

struct HeapData
{
  /* data */
  HeapInfo *before;
  HeapInfo *after;
  uint64_t gcStartTime;
  uint64_t gcEndTime;
  int gcType;
};

class GCResponseResource : public Nan::AsyncResource
{
public:
  GCResponseResource(/* args */);
  ~GCResponseResource();
};

GCResponseResource::GCResponseResource(/* args */)
{
}

GCResponseResource::~GCResponseResource()
{
}
