#include "bankaccount.h"
#include <fstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

using namespace std;
	
// write a function that will print and count all the possible strings
// made of 4 characters

// variables
char tab[4];
char x;
char letters[52];

int main(void)
{
	// possibilities = (25*2)^4 = 50^4
	int A = 65;
	int a = 97;
	for (int i = 0; i < 26; i++)
	{
		letters[i] = a; 
		a++; 
		letters[i + 26] = A; 
		A++;
	}

	

	_getch();
}

void createString()
{
//	for (int j = 0; j < 4; j++)
//	{
//		// ++97 - 122 pour les minuscules
//		for (int i = 65; i < 91; i++)
//		{
//			x = i;
//		}
//		tab[j] = x;
//	}




	for (int i = 0; i < 4; i++)
		cout << tab[i];
	cout << endl;
}