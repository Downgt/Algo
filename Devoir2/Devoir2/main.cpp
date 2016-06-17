#include "Question.h"
#include "Question5.h"
#include "XOR.h"
#include "Vigenere.h"
#include "Caesar.h"


int main()
{


	int x;
	cout << "Choix de l'exercice :\n"
		<< "1 - Question 1\n"
		<< "2 - Question 2\n"
		<< "3 - Question 3\n"
		<< "4 - Question 4\n"
		<< "5 - Question 5\n"
		<< "6 - Question 6\n";
	cin >> x;

	switch (x)
	{
	case 1:
		Zombies();
		break;
	case 2:

		CityPlay();

		break;
	case 3:{
		int a;
		cout << "\nAlgorithme de l'encryption : \n"
			<< "1 - XOR\n"
			<< "2 - Vigenere\n"
			<< "3 - Caesar\n";
		cin >> a;

		switch (a)
		{
		case 1 :
			XOR();
			break;
		case 2 :
			Vigenere();
			break;
		case 3:
			Caesar();
		default:
			break;
		}
		break;

	}
		

	default:
		break;
	}






	system("pause");
	return 0;
}

