<template T>
void swap(T* a, T* b)	// Built-in function for readibility.
{
	T temp= *a;
	*a= *b;
	*b= temp;
}

<template T>
void linear_sort(T* ar, int size)
{
	// ---------------------------------- //
	int i_min;
	for (int i=0; i<size; i++)
	{
		for (int j=i+ 1; j<size- 1; j++)
		{
			if (ar[j] <ar[i])	{	i_min= j;	}
		}
		swap( &(ar[i]), &(ar[i_min]) );
	}
}

<template T>
void quick_sort(T* ar, int size)	// Recursive.
{
	int mid= (size+ 1)/ 2;
	int top= size- 1, bot= 0;
	if (size<= 3)	{	return;		}
	while (bot <mid && mid <top)
	{
		while (ar[bot] <ar[mid])	{	bot++;	}
		while (ar[mid] <ar[top])	{	top--;	}
		swap( &(ar[top]), )
	}
	quick_sort(ar, mid- 1);					// Lower part.
	quick_sort(&(ar[mid+ 1]), size- mid);	// Higher part.
}

<template T>
std::vector<T> merge_sort(T* ar1, T* ar2, int n, int m)		// ar1 and ar2 must be sorted.
{
	int i, j, k;	// Iterator of:  i-> ar1	j-> ar2	   k-> result.
	std::vector<t> result;
	i= j= k= 0;
	while (i< n && j< m)
	{
		while(ar1[i] <ar2[j] && i< n)	{	result[k++]= ar1[i++];		}
		while(ar2[j] <ar1[i] && j< m)	{	result[k++]= ar2[j++];		}
	}
	if (i ==n)
	{
		while (j <m)	{	result[k++]= ar2[j++];		}
	}
	else /*j ==m*/
	{
		while (i <m)	{	result[k++]= ar1[i++];		}
	}
}
