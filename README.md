logic-simulator
===============

EC327 Spring 2014 Final Project

What did Caruthers say?
He said go for it. I don’t think he cares if it’s the same thing that’s already been done. 

7 gates
	Buffer? -probs not
	Not -made
And -made
	Or -made
	Xor -made
	Nor -made
	Nand -made
	Xnor -made
	Multi-input gates?-not yet

Each gate has an ID number- tiers
ex) tier 1 gate can connect to tier 2 gate but not vice versa

Core information
	Critical path
		Time complexity
	Space complexity
	Warnings for Hazards?- probs not
Circuit simulator
	Select input values
	Simulate would then run through circuit
Good features to add
	User blocking
		Add common elements (FA, flip flop, etc)
	Library Switcher
	Optimizer

class NOT:gate
{

          
public:
	bool get_output(){
		return !input;
	}
}


class AND:gate
{
public:
	bool get_output(){
		bool temp=true;
		for(int i =0;i<2;i++){
			temp=temp&&input[i];
}
return temp
	}
}

class gate{
	bool input[2];
	gate();
public:
	static int gate_count;
	bool tier_change(int new_input_tier, bool repeat=false);
	bool get_output();
};




class OR:gate
{
public:
	bool get_output()
	{
		int temp = 0;
		for (int i=0;i<10;i++)
		{
		temp = temp+input[i];
		}
	if (temp > 0)
		return true;
	else
		return false;
	}
}

class XOR:gate
{
public:
bool get_output()
{	
	int temp = 0;
for (int i=0;i<2;i++) 
{
temp = temp+input[i];
}
if (temp != 1)
	return false;
else
	return true;	
}
}

class NOR:gate
{
public:
	bool get_output()
	{
		int temp = 0;
		for (int i=0;i<2;i++)
		{
		temp = temp+input[i];
		}
	if (temp > 0)
		return false;
	else
		return true;
	}
}

class NAND:gate
{
public:
	bool get_output(){
		bool temp=true;
		for(int i =0;i<2;i++){
			temp=temp&&input[i];
}
return !temp
	}
}

class XNOR:gate
{
public:
bool get_output()
{	
	int temp = 0;
for (int i=0;i<2;i++) 
{
temp = temp+input[i];
}
if (temp != 1)
	return true;
else
	return false;
}
}


INPUT CLASS!!!!!





class OUTPUT
{
	bool input;
public:
	bool get_output()
	{
		return input;
	}
}


LOOPS:
-Each gate has an  “int tier” member (public/private?), initializes to zero *or initialize to 1 and the add it to the tier of the highest tier input gate
-tier changes depending on input?
	-if gate inputs are ONLY “raw” input variables then the gate stays at tier 0
-if gate inputs are other gates, then the tier becomes one more than the highest tier gate that is it’s input 
	-block having inputs from gates of higher tiers
-last tier is automatically the gate with “free” output
