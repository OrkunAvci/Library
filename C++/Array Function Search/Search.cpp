<template T>
int binary_search(T* ar, int size, T searched)		// Array must be sorted.
{
	int low= 0, mid= (size+ 1)/ 2, high= size- 1;
	bool control= true;
	while (control)
	{
		if (ar[mid] ==searched)
		{
			control= false;		// Found exit.
		}
		else if (ar[mid] <searched)
		{
			low= mid+ 1;
		}
		else	/* ar[mid] >searched */
		{
			high= mid- 1;
		}
		mid= (high+ low)/ 2;	// At found cycle, High and Low are unchanged therefore Mid is preserved.
		control= (high !=low);	// Not found exit.
	}
	if (high ==low)		{	return -1;	}	// Not found return value.
	return mid;								// Index of element.
}

<template T>
std::vector<T> linear_search(T* ar, int size, T searched)
{
	std::vector<T> vec;
	int v= 0;					// Index for result vector.
	for (int i=0; i<size; i++)
	{
		if (ar[i] ==searched)
		{
			vec[v]= i;	// Stores indexes of all encounters.
		}
	}
	return vec;
}

<template T>
std::vector<T> pattern_matching(std::vector<T> data, std::vector<T> searched)	// A copy of original one, usually used at string searching however this one is generalized.
{
	std::vector<T> vec;
	int i= searched.size()- 1, j, v= 0;			// I for data, J for searched, V for results vector.
	while ((i+ searched.size()) <data.size())
	{
		j= searched.size()- 1;
		while (j >=0 && data[i+ j] ==searched[j])	{	j--;	}
		if (j ==-1)	{	vec[v]= i;		i++;		}
		else		{	i+= searched.size()- j;		}
	}
	return vec;
}






