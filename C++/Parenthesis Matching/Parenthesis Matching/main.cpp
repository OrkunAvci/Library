#include <iostream>
#include <string>
#include <map>

#include "Stack.h"

using namespace std;

int main()
{
	Stack<char> st('\0');
	map<char, char> p_map = { { '{', '}' },
							{ '[', ']' },
							{ '(', ')' } };

	string input;
	cout << "Enter the phrase: ";
	cin >> input;

	bool control = true;
	char buffer;
	for (unsigned int i = 0; i < input.size() && control; i++)
	{
		if (input[i] == '[' || input[i] == '(' || input[i] == '{')
		{
			st.push( p_map[ input[i] ] );
		}
		else if (input[i] == ']' || input[i] == ')' || input[i] == '}')
		{
			buffer = st.pop();
			if (buffer == '\0' || input[i] != buffer)
			{
				control = false;
			}
		}
	}

	if (st.pop() != '\0')
	{
		control = false;
	}

	cout << endl << endl;
	cout << "Parentheses are";
	cout << ( (control) ? " " : " not" );
	cout << " matching." << endl << endl;

	system("pause");
	return 0;
}
