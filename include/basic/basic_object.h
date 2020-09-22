#ifndef BASIC_BASIC_OBJECT_H
#define BASIC_BASIC_OBJECT_H

#include "basic/types.h"

namespace basic {
class basic_object {
  bool prv_flag{false};
  HardwareState prv_state{HardwareState::Offline};

public:
  HardwareState initialize();
  HardwareState getState();
};
} // namespace basic

#endif // BASIC_BASIC_OBJECT_H
