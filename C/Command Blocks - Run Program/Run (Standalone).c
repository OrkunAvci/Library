#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	if (argc <2)	{	return -1;		}
	int i;
	char* cmd;
	for (i=1; i< argc; i++)
	{
		system(argv[i]);
	}
	return 0;
}
