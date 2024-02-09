#include <iostream>
#include <string.h>

using namespace std;

bool Search_Brackets(char* str)
{
	int counter = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == '(')
		{
			counter++;
		}
		else if (str[i] == ')')
		{
			if (counter == 0)
			{
				return false;
			}
			counter--;
		}
	}
	return counter == 0;
}
int main()
{
	// ???????? 1;

	/*char str[] = "He(llo)";*/
	/*if (Search_Brackets(str))
	{
		cout << "All is well\n";
	}
	else
	{
		cout << "Not all is well\n";
	}*/

	/*Search_Brackets(str) ? cout << "All is well\n" : cout << "Not all is well\n";*/

	return 0;
}