#IFNDEF __STRING_H__
#DEFINE __STRING_H__

std::string trim_white_space(std::string str)
{
	std::string wSpaces(" \n\t\f\r");
	str.erase(str.find_last_not_of(wSpaces)+ 1);
	str.erase(0, str.find_first_not_of(wSpaces));
	return str;
}

std::string replace_substring(std:: str, std::string subStr, std::string replacer)
{
	int i= str.find(subStr, 0);
	while (i !=std::string::nopos)
	{
		str.replace(i, subStr.size(), replacer);
		i= str.find(subStr, i+ 1);
	}
	return str;
}

#IFNDEF __VECTOR_H__
#DEFINE __VECTOR_H__

std::vector<int> find_substring_indexes(std::string str, std::string subStr)
{
	std::vector<int> vec;
	int i= str.find(subStr, 0);
	while (i !=std::string::nopos)
	{
		vec.pushback(i);
		i= str.find(subStr, i+ 1)
	}
	return vec;
}

#ENDIF

#ENDIF
