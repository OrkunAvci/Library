int** primeDividers(int num)
{
	int **result;
	int divider, mark= 0;
	result= new int*[2];
	result[0]= new int[1];
	result[1]= new int[1];
	result[0][0]= 2;
	//	End of prep.
	while(num% 2 ==0)	{	num/= 2;	result[1][mark]++;	}	// Divisible by 2 control.
	mark+= (result[1][mark] !=0);
	for (divider= 3; divider <=(num/ 3); divider+= 2)
	{
		if (num% divider ==0)
		{
			result[0][mark]= divider;		// Saving dividers at row 0.
			while (num% divider ==0)
			{
				num/= divider;
				result[1][mark]++;			// Saving powers at row 1.
			}
			mark++;
		}
	}
}
