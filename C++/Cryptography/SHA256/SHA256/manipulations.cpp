#include "manipulations.h"

template <class T>
T shr(T var, T count)
{
	return (var >> count);
}

template <class T>
T shl(T var, T count)
{
	return (var << count);
}

template <class T>
T rtr(T var, T count)
{
	T control = 1;
	for (T i = 0; i < count; i++, control = 1)
	{
		control = control & var;
		var = var << 1;
		var += (control) ? 1 : 0;
	}
}

template <class T>
T rtl(T var, T count)
{
	T control = 1 << (sizeof(control) * 8 - 1);
	for (T i = 0; i < count; i++, control = 1 << (sizeof(T) * 8 - 1))
	{
		control = control & var;
		var = var << 1;
		var += (control) ? 1 : 0;
	}
}

template <class T>
T maj(T var1, T var2, T var3)
{
	//	Majority bit value among three, for each bit.
	return (var1 & var2) | (var1 & var3) | (var2 & var3);
}

template <class T>
T cho(T var1, T var2, T var3)
{
	T output = 0;
	for (T filter = 1; filter != 0; shl(filter, 1))
	{
		//	To determine which variable's bit will be chosen to copy over, use var1's bit.
		if (filter && var1)
		{
			output = output ^ (filter & var3);
		}
		else
		{
			output = output ^ (filter & var2);
		}
	}
	return output;
}
