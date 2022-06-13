//NULLTerminatedLines
#include<iostream>
#include<Windows.h>
using namespace std;

int StringLenght(const char str[]);
void to_upper(char str []);
void to_lower(char str[]);
void shrink(char str[]);

void main()
{
	setlocale(LC_ALL, "");
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);

	//char str[] = { 'H', 'e', 'l', 'l', 'o', 0 };
	//char str[] = "Hello";
	//cout << str << endl;
	const int SIZE = 256;
	char str[SIZE] = {};
	cout << "Введите строку: ";
	SetConsoleCP(1251);
	//cin >> str;
	cin.getline(str, SIZE);
	SetConsoleCP(866);
	cout << str << endl;
	/*cout << "Введенная строка имеет длину: " << StringLenght(str) << endl;
	to_upper(str);
	cout << "Строка в верхнем регистре: " << str << endl;
	to_lower(str);
	cout << "Строка в нижнем регистре: " << str << endl;*/
	/*shrink(str);
	cout << str << endl;
	main();*/
	for (int i = 0; str[i]; i++)
	{
		if (str[i] /*== 32 */== str[i + 1] == 32)
		{
			do
			{
				str[i] = str[i + 1];
				i++;
			} while (str[i] == 32 && str[i + 1] != 32);
			
		}cout << str[i];
	}cout << endl;
}

int StringLenght(const char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}
void to_upper(char str[])
{
	for (int i = 0; i < str[i]; i++)
	{
		str[i] >= 97 && str[i] <= 122 ? str[i] -= 32 : str[i];	
		//str[i] >= 'а' && str[i] <= 'я' ? str[i] -= 32 : str[i];
		//str[i] >= 97 && str[i] <= 122/* && str[i] >= 160 && str[i] <= 175 && str[i] >= 224 && str[i] <= 239*/ ? str[i] -= 32 : str[i];
		//str[i] >= 160 && str[i] <= 175 && str[i] >= 224 && str[i] <= 239 ? str[i] -= 32 : str[i];
	}
}
void to_lower(char str[])
{
	for (int i = 0; i < str[i]; i++)
	{
		str[i] >= 65 && str[i] <= 90 ? str[i] += 32 : str[i];
	}
}
void shrink(char str[])
{
	
}