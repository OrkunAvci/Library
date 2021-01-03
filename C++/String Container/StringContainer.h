#ifndef __STRINGCONTAINER_H__
#define __STRINGCONTAINER_H__
#include <vector>
#include <string>

class StringContainer
{
private:
	std::vector<std::string> container;
public:
	StringContainer();
	~StringContainer();
	int getSize();
	std::string getElement(int);
};

#endif // __STRINGCONTAINER_H__