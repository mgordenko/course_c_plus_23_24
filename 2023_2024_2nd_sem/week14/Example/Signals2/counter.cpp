#include "counter.h"

void Counter::increase()
{
  value++;
  emit increased(value);
}
