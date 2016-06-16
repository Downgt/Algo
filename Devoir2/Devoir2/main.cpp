#include "Zombies.h"
#include "CityPlay.h"
#include "XOR.h"
#include "DES.h"
#include "RSA.h"
#include "Vigenere.h"
#include "Caesar.h"


int main()
{

	int x;
	cout << "Choix de l'exercice :\n"
		<< "1 - Zombies\n"
		<< "2 - Villes\n"
		<< "3 - Encryption\n";
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

