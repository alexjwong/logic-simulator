#ifndef NOR_H
#define NOR_H

#include "Gate.h"

class NOR:Gate
{
public:
      NOR(Gate,Gate);
      int get_output();
};

#endif
