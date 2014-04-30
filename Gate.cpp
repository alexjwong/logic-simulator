#include "Gate.h"

Gate::Gate()
{
  tier = 0;
  input1 = 0;
  input2 = 0;
  output = 0;
  gate_count++;
  id_num = gate_count;
  all_the_gates.pushback(id_num);
  
}

