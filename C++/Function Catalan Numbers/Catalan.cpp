int catalan_number(int n)
{
	double catalan= 1.0;
	for (double k=2.0; k<n+ 1; k++)
	{
		catalan= catalan* (n+ k)/ k;
	}
	return (int)catalan;
}

int catalan_number_recursive(int n, int k= 2)
{
	if (k ==n)	{	return 2;	}
	else		{	return catalan_number_recursive(n, k+ 1)* (n+ k)/ k;	}
}
