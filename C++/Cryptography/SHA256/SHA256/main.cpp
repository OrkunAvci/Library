#include <iostream>
#include <string>

#include "bit_operations.h"
#include "math_functions.h"
#include "constants.h"
#include "messageBlock.h"

using namespace std;


int main()
{
	unsigned int* constants = new unsigned int[64];
	get_constants(constants);

	for (unsigned int i = 0; i < 64; i++)
	{
		cout << constants[i] << endl;
	}

	delete constants;
	system("pause");
	return 0;
}
