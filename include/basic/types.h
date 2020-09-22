#ifndef BASIC_TYPES_H
#define BASIC_TYPES_H

namespace basic {

enum class HardwareState {
  Offline = 0,
  Initializing,
  Failed,
  SelfTesting,
  Operational
};

}

#endif // BASIC_TYPES_H
