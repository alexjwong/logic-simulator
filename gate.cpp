<<<<<<< HEAD
#include "Gate.h"

using namespace std;

Gate::Gate()
{
    gate_count = 0;
    input = {0,0};
    tier = 0;
=======
#include "gate.h"

Gate::Gate()
{
  tier = 0;
  input1 = 0;
  input2 = 0;
  output = 0;
  gate_count++;
>>>>>>> FETCH_HEAD
}

