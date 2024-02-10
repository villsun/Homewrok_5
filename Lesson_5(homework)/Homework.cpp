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

int Search_Brackets_Square(char* str)
{
	const int SIZE = strlen(str);
	char* p = new char[SIZE];
	int top = -1;
	for (int i = 0; i < SIZE; i++)
	{
		if (str[i] == '(' || str[i] == '[')
		{
			p[++top] = str[i];
		}
		else if (str[i] == ')' || str[i] == ']')
		{
			if (top == -1)
			{
				return 0;
			}
			char top_char = p[top--];
			if ((str[i] == ')' && top_char != '(') || (str[i] == ']' && top_char != '['))
			{
				return 0;
			}
		}
	}
	delete[] p;

	return top;
}

int Search_Brackets_Square_Сurly(char* str)
{
	const int SIZE = strlen(str);
	char* p = new char[SIZE];
	int top = -1;
	for (int i = 0; i < SIZE; i++)
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
		{
			p[++top] = str[i];
		}
		else if (str[i] == ')' || str[i] == ']' || str[i] == '}')
		{
			if (top == -1)
			{
				return 0;
			}
			char top_char = p[top--];
			if ((str[i] == ')' && top_char != '(') || (str[i] == ']' && top_char != '[') || (str[i] == '}' && top_char != '{'))
			{
				return 0;
			}
		}
	}
	delete[] p;

	return top;
}

int main()
{
	// Завдання 1

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

	// Завдання 2

	/*char str[] = "He([llo)]";

	Search_Brackets_Square(str) == -1 ? cout << "All is well\n" : cout << "Not all is well\n";*/

	// Завдання 3

	char str[] = "He{[(llo}])";

	Search_Brackets_Square_Сurly(str) == -1 ? cout << "All is well\n" : cout << "Not all is well\n";


	return 0;
}