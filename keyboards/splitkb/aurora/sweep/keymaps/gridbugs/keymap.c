#include "keymap_gen.c"

// turn off the status led
void keyboard_pre_init_user(void) {
  // Set our LED pin as output
  setPinOutput(24);
  // Turn the LED off (actitve high)
  writePinHigh(24);
}
