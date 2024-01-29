#include "testharness.h"

int main() {
  __asm__ goto ("nop");
  SUCCESS;
}
