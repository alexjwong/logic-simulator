//
//  Model.cpp
//  FINAL PROJECT!!!
//
//  Created by Codie Smith on 5/2/14.
//  Copyright (c) 2014 Codie's Midterm. All rights reserved.
//

#include "Model.h"

Model::Model()
{
    gate_array = {0};
    input_array = {0};
    output_array = {0};
}

void Model::add_gate(Gate* inputgate)
{
    gate_array.push_back(inputgate->gate_count);
}

void Model::remove_gate(Gate* inputgate)
{
    gate_array.erase(gate_array.begin()+(inputgate->gate_count));
}

void Model::add_input(Gate* inputin)
{
    input_array.push_back(inputin->gate_count);
}

void Model::remove_input(Gate* inputin)
{
    input_array.erase(input_array.begin()+(inputin->gate_count));
}

void Model::add_output(Gate* inputout)
{
    output_array.push_back(inputout->gate_count);
}

void Model::remove_output(Gate* inputout)
{
    output_array.erase(output_array.begin()+(inputout->gate_count));
}
