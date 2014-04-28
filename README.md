logic-simulator
===============

EC327 Spring 2014 Final Project

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

LOOPS:
-Each gate has an  “int tier” member (public/private?), initializes to zero *or initialize to 1 and the add it to the tier of the highest tier input gate
-tier changes depending on input?
	-if gate inputs are ONLY “raw” input variables then the gate stays at tier 0
-if gate inputs are other gates, then the tier becomes one more than the highest tier gate that is it’s input 
	-block having inputs from gates of higher tiers
-last tier is automatically the gate with “free” output
