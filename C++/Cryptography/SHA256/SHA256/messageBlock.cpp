#include "messageBlock.h"

MessageBlock::MessageBlock(std::string str)
{
	marker = 0;
	for (unsigned int i = 0; i < str.size(); i++)
	{
		data[i / 4] += str[i];
		data[i / 4] = data[i / 4] << (sizeof(char) * 8);
	}
	next = nullptr;
}

MessageBlock::MessageBlock(std::string str, unsigned int d14, unsigned int d15)
{
	MessageBlock::MessageBlock(str);
	//	These are the size(s) of the entire message.
	data[14] = d14;
	data[15] = d15;
}

MessageBlock::~MessageBlock()
{
	return;
}

void MessageBlock::addNext(MessageBlock* next)
{
	if (next == nullptr)	{	this->next = next;	}
	else					{	next->addNext(next);	}
}

MessageBlock * MessageBlock::getNext()
{
	return nullptr;
}

unsigned int MessageBlock::getData()
{
	return data[marker++];
}
