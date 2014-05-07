#ifndef MODEL_H
#define MODEL_H

#include <iostream>
#include <vector>
#include "Gate.h"

class Model
{
public:
    Model();
    
    vector<int> gate_array;
    vector<int> input_array;
    vector<int> output_array;
    
    void add_gate(Gate*);
    void remove_gate(Gate*);
    void add_input(Gate*);
    void remove_input(Gate*);
    void add_output(Gate*);
    void remove_output(Gate*);
    
};

#endif
