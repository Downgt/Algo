#include "Question.h"
#include "Question5.h"
#include "Question6.h"


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
		
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		Question5();
		break;
	case 6:
		Question6();
		break;
	default:
		break;
	}






	system("pause");
	return 0;
}

