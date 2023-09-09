#pragma once
#include <iostream>
#include <algorithm>
using namespace std;



class PseudoRandom
{

private:

	int seed;
	int multiplier;
	int modulus;
	int increment;

public:

	PseudoRandom();

	PseudoRandom(int seed1, int multiplier1, int modulus1, int increment1);

	int getSeed() const;
	int getMultiplier() const;
	int getModulus() const;
	int getIncrement() const;

	void setSeed(int seed2);
	void setMultiplier(int multiplier2);
	void setModulus(int modulus2);
	void setIncrement(int increment2);

	int nextSeed();

};

