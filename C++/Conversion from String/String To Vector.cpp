#IFNDEF	__SSTREAM_H__
#DEFINE	__SSTREAM_H__

#IFNDEF __STRING_H__
#DEFINE __STRING_H__

#IFNDEF __VECTOR_H__
#DEFINE __VECTOR_H__

std::vector<std:string> string_to_vector(std::string input_str, char seperator= ' ')
{
	std::vector<std::string> vec;
	std::stringstream stream(input_str);
	std::string str;
	while (getline(stream, str, seperator))
	{
		vec.pushback(str);
	}
	return str;
}

#ENDIF

#ENDIF

#ENDIF
