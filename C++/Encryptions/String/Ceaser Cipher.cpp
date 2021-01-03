#IFNDEF __LOCALE_H__
#DEFINE __LOCALE_H__

std::string ceaser_cipher(std::string str, int inc)
{
	int i;
	std::locale loc;
	std::tolower(str, loc);
	for (i=0; i<str.size(); i++)
	{
		str[i]= ((str[i]- 'a')+ inc)% 26+ 'a';
	}
	return str;
}

#ENDIF
