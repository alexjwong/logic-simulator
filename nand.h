#ifndef NAND_H
#define NAND_H

#include "Gate.h"

class Gate;

class NAND: public Gate{
public:
      NAND(Gate,Gate);
      int get_output();
};

#endif
