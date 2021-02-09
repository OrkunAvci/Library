bool is_filetype_valid(char* name, char* ext)
{
	int i= 0, j= 0;
	while (name[i] !='\0')				{	i++;	}			// End of file name.
	while (name[j] !='\0')				{	j++;	}			// End of extention name.
	if (i <j)							{	return false;	}	// Size control.
	while (0 <=j && name[i] ==ext[j])	{	i--;	j--;	}	// Control until extention name is consumed.
	return (j ==-1);
}
