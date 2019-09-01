#include "Factor.h"

void Factor::setCof(int c)
{
	cof = c;
}

void Factor::setPower(int p)
{
	power = p;
}

int Factor::getCof()
{
	return cof;
}

int Factor::getPower()
{
	return power;
}

Factor::Factor()
{
	cof = 0;
	power = 0;
}
