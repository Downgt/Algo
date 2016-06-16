#include "Zombies.h"
#include "CityPlay.h"
#include "Encrypt.h"

int main()
{
	int x;
	cout << "Choix de l'exercice :\n"
		<< "1 - Question 1\n"
		<< "2 - Question 2\n"
		<< "3 - Question 3\n";
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

