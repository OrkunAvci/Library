#include "math_functions.h"

template <class T>
T sigma_1(T var)
{
	const T rtr_c = 13;
	const T rtl_c = 19;
	const T shr_c = 7;
	return rtr(var, rtr_c) ^ rtl(var, rtl_c) ^ shr(var, shr_c);
}

template <class T>
T sigma_2(T var)
{
	const T rtr_c = 17;
	const T rtl_c = 3;
	const T shl_c = 11;
	return rtr(var, rtr_c) ^ rtl(var, rtl_c) ^ shl(var, shl_c);
}

template <class T>
T sigma_3(T var)
{
	const T rtr1_c = 11;
	const T rtl_c = 29;
	const T rtr2_c = 13;
	return rtr(var, rtr1_c) ^ rtl(var, rtl_c) ^ rtr(var, rtr2_c);
}

template <class T>
T sigma_4(T var)
{
	const T rtr1_c = 5;
	const T rtl_c = 17;
	const T rtl2_c = 23;
	return rtr(var, rtr1_c) ^ rtl(var, rtl_c) ^ rtr(var, rtl2_c);
}
