#include <fstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

using namespace std;
	
// write a function that will print and count all the possible strings
// made of 4 characters

// prototypes
void afficher(void);
void createString(void);

// variables
const int longueur = 2;
char tab[longueur];
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

	// afficher
	for (int i = 0; i < 53; i ++)
	createString(); 

	_getch();
}

void createString()
{
	// variables
	static int compteur10 = -1; // compte le nombre de possibilités
	static int position = longueur;


	// tab[longueur] = letters[compteur10];
	tab[position - 2] = letters[compteur10];

	// associer les lettres
	for (int i = 0; i < 52; i++)
	{
		tab[position-1] = letters[i]; 
		afficher(); 
	}
	compteur10++;
}

void afficher(void)
{
	// affichage
	for (int i = 0; i < longueur; i++)
		cout << tab[i];
	cout << endl;
}