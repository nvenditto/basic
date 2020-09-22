#include "basic_object.h"

namespace basic {
HardwareState basic_object::initialize() {
  if (prv_state == HardwareState::Offline && !prv_flag) {
    prv_state = HardwareState::Initializing;
  } else if (prv_state == HardwareState::Initializing) {
    prv_state = HardwareState::Operational;
  }

  return prv_state;
}

HardwareState basic_object::getState() { return prv_state; }

} // namespace basic
