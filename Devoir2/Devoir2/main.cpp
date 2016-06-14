#include "Zombies.h"
#include "CityPlay.h"
#include "Encrypt.h"


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
	case 3:
		Encrypt();
		break;

	default:
		break;
	}






	system("pause");
	return 0;
}

