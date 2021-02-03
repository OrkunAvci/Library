#pragma once
#ifndef __BIT_OPERATIONS_H__
#define __BIT_OPERATIONS_H__

/*
	These are operations on bits, not necessarily a manipulation of bits.
	Never destroys the original.
*/

template <class T>
T shr(T, T);

template <class T>
T shl(T, T);

template <class T>
T rtr(T, T);

template <class T>
T rtl(T, T);

template <class T>
T add(T, T);

template <class T>
T maj(T, T, T);

template <class T>
T cho(T, T, T);

#endif // !__BIT_OPERATIONS_H__
