#include "PseudoRandom.h"


PseudoRandom::PseudoRandom()
{
	
	seed = 1;
	multiplier = 40;
	modulus = 729;
	increment = 725;

}

PseudoRandom::PseudoRandom(int seed1, int multiplier1, int modulus1, int increment1)
{

	seed = seed1;
	multiplier = multiplier1;
	modulus = modulus1;
	increment = increment1;

}


int PseudoRandom::getSeed() const
{
	
	return seed;

}

int PseudoRandom::getMultiplier() const
{

	return multiplier;


}

int PseudoRandom::getModulus() const
{

	return modulus;


}

int PseudoRandom::getIncrement() const
{

	return increment;


}

void PseudoRandom::setSeed(int seed1)
{

	seed = seed1;

}

void PseudoRandom::setMultiplier(int multiplier1)
{

	multiplier = multiplier1;

}

void PseudoRandom::setModulus(int modulus1)
{

	modulus = modulus1;

}

void PseudoRandom::setIncrement(int increment1)
{

	increment = increment1;

}

int PseudoRandom::nextSeed()
{
	
	int next;

	next = ((multiplier * seed) + increment) % modulus;

	seed = next;

	return next;

}