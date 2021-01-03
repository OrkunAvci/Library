#IFNDEF __STRING_H__
#DEFINE __STRING_H__

#IFNDEF __VECTOR_H__
#DEFINE __VECTOR_H__

std::string vector_to_string(std::vector<std:string> vec, char seperator= ' ')
{
	std::string str= "";
	for (int i=0; i<vec.size(); i++)
	{
		str+= vec[i]+ seperator;
	}
	return str;
}

#ENDIF

#ENDIF
