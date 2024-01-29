#include "testharness.h"

void code() {
start:
  asm goto ("nop" : : : : start, exit);
exit:
  SUCCESS;
}

