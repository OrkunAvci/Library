#include <iostream>

#include "math_functions.h"
#include "constants.h"
#include "messageBlock.h"

using namespace std;


int main()
{
	unsigned int* constants = new unsigned int[64];
	get_constants(constants);
	

	delete constants;
	system("pause");
	return 0;
}
