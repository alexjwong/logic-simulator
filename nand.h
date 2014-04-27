#ifndef NAND_H
#define NAND_H

#include "Gate.h"

class NAND{
public:
      NAND(Gate,Gate);
      bool get_output();
};

#endif
