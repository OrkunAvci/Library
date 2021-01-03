#include "StringContainer.h"
#include <vector>
#include <string>

StringContainer::StringContainer()
{

}

StringContainer::~StringContainer()
{

}

int StringContainer::getSize()
{
	return container.capacity();
}

std::string StringContainer::getElement(int index)
{
	return container.at(index);
}
