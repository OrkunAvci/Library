#include "filecontrol.h"

int fileGetInt(FILE *f)
{
	char tmp;
	int num= 0;
	fread((void*)&tmp, 1, 1, f);
	while (tmp!= ' ' && tmp!= '\n' && tmp!= '\0')
	{
		num*=10;
		num+= (tmp- '0');
		fread((void*)&tmp, 1, 1, f);
	}
	return num;
}
