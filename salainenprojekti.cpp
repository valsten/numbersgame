/*
Teht‰v‰: Numeropeli
Tekij‰: Valtteri Stenholm
Kuvaus:
Ohjelma arpoo satunnaisesti numeron 1 ja 10 v‰lill‰ ja pyyt‰‰ k‰ytt‰j‰‰ arvaamaan numeron.
Jos vastaat v‰‰rin, kertoo ohjelma oliko arvaus pienempi vai suurempi kuin arvottu numero.
Peli p‰‰ttyy kun arvaat numeron oikein, tai arvaat v‰‰rin 5 kertaa.

Versio: 1.1 ValSte
Pvm: 22.9.2016

*/

#include <iostream>
#include <ctime>
using namespace std;

void Instr();
void Info();
void Menu();

int main()
{
	srand(time(NULL));

	int number = rand() % 10 + 1;
	int guess;
	int kerrat = 5;
	char x;
	int option = 2;

	Menu();

	cout << "****<-- | Random Number Game! | -->***** \n" << endl;
	cout << "I've generated a random number between 1 and 10." << endl;
	cout << "Can you guess the number? I'll give you 5 tries!" << endl;
	cout << "You can return back to the menu by entering 0." << endl;

	while(kerrat > 0)
	{

		cout << "\n Type your guess here: ";
		cin >> guess;

		if (number > guess)
		{
			cout << "Your guess was smaller than the number. \n";
			kerrat--;
		}

		else if (number < guess)
		{
			cout << "Your guess was bigger than the number. \n";
			kerrat--;
		}

		else
		{
			cout << "You guessed it! The number was: " << number << endl;
			Menu();
		}
	}
	return 0;
}

void Instr()
{
	cout << "***********************************************************" << endl;
	cout << "| The program generates a random number between 1 and 10. |" << endl;
	cout << "| You have 5 tries to guess the number correctly!         |" << endl;
	cout << "| After 5 wrong guesses, you lose.                        |" << endl;
	cout << "***********************************************************" << endl;
}

void Info()
{
	cout << "******************************************" << endl;
	cout << "|A simple game made by a student with C++|" << endl;
	cout << "|You can contact me at name@email.com    |" << endl;
	cout << "|Hope you have fun with it               |" << endl;
	cout << "******************************************" << endl;
}

void Menu()
{
	int option = 2;
	while (option != 1)
	{
		cout << "MENU";
		cout << "\n1 Play";
		cout << "\n2 Instructions";
		cout << "\n3 Info";
		cout << "\n0 Exit" << endl;
		cin >> ws >> option;

		switch (option)
		{
		case 1:
			break;
		case 2:
			Instr();
			break;
		case 3:
			Info();
			break;
		case 0:
			cout << "EXIT" << endl;
			exit(0);
		default:
			cout << "ERROR!" << endl;
			break;
		}
	}
//	return option;
}