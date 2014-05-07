//
//  Model.h
//  FINAL PROJECT!!!
//
//  Created by Codie Smith on 5/2/14.
//  Copyright (c) 2014 Codie's Midterm. All rights reserved.
//

#ifndef FINAL_PROJECT____Model_h
#define FINAL_PROJECT____Model_h

#include <iostream>
#include <vector>
#include "Gate.h"
using namespace std;

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
