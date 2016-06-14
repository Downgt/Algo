#include <iostream>
#include <fstream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include "CityPlay.h"
#include "Encrypt.h"
using namespace std;

void displayFile(string fileName);
void Choice(string fileName);
void displayString(double proba, int pos);
int getDist();
void wetherRandom(double position, double tableauProbabilite[], int size);

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
		cout << "Choix du fichier\n"
			<< "1 - T_2_5\n"
			<< "2 - T_2_10\n"
			<< "3 - T_3_20\n"
			<< "4 - T_4_20\n"
			<< "5 - T_5_30\n"
			<< "6 - T_7_30\n";
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			displayFile("T_2_5.txt");
			Choice("T_2_5.txt");
			break;
		case 2:
			displayFile("T_2_10.txt");
			Choice("T_2_10.txt");
			break;
		case 3:
			displayFile("T_3_20.txt");
			Choice("T_3_20.txt");
			break;
		case 4:
			displayFile("T_4_20.txt");
			Choice("T_4_20.txt");
			break;
		case 5:
			displayFile("T_5_30.txt");
			Choice("T_5_30.txt");
			break;
		case 6:
			displayFile("T_7_30.txt");
			Choice("T_7_30.txt");
			break;
		default:
			break;
		}
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

void displayFile(string fileName){

	ifstream file("FichiersTest/" + fileName, ios::in);

	if (!file)
	{
		cerr << "Impossible d'ouvrir le fichier !" << endl;

	}
	string ligne;
	while (getline(file, ligne))
	{
		cout << ligne << endl;
	}

	file.close();
}

void Choice(string fileName){

	ifstream file;
	file.open("FichiersTest/" + fileName, ios::in);
	std::vector<int>tab;
	int number;
	while (file >> number){
		tab.push_back(number);
	}

	int size = tab.size();
	int *array = new int[size];

	for (int i = 0; i < size; i++){
		array[i] = tab[i];
	}

	int nbTireurs = array[0];
	int nbTours = array[1];

	int *tableauPosition = new int[size / 2 - 1];
	double *tableauProbabilite = new double[size / 2 - 1];
	double *tableauProbabiliteInitial = new double[size / 2 - 1];

	int i = 0;
	for (int j = 2; j < size; j = j + 2, i++){
		tableauPosition[i] = array[j];
	}

	int k = 0;
	for (int j = 3; j < size; j = j + 2, k++){
		tableauProbabilite[k] = array[j];
		tableauProbabiliteInitial[k] = array[j];
	}


	double max = 0;
	double max2 = 0;
	double max3 = 0;
	double max4 = 0;
	double max5 = 0;
	double max6 = 0;
	double max7 = 0;

	int position = 0;
	int position2 = 0;
	int position3 = 0;
	int position4 = 0;
	int position5 = 0;
	int position6 = 0;
	int position7 = 0;


	int dist = getDist();
	

	for (int i = 0; i<size / 2 - 1; i++)
	{
		if (tableauProbabilite[i] > max){
			max = tableauProbabilite[i];
			position =+ i;

		}

		


	}
	
	wetherRandom(position, tableauProbabilite, size);
	
	
	for (int i = 0; i < size / 2 - 1; i++)
	{
		if (max2 < tableauProbabilite[i] && max != tableauProbabilite[i] && max2 < max && ((tableauPosition[i + 1] - tableauPosition[i]) > dist)){
			max2 = tableauProbabilite[i];
			position2 = +i;
		}

	}
	wetherRandom(position2, tableauProbabilite, size);
	for (int i = 0; i < size / 2 - 1; i++)
	{
		if (max3 < tableauProbabilite[i] && max2 != tableauProbabilite[i] && max != tableauProbabilite[i] && max3 < max && max3 < max2 && ((tableauPosition[i + 1] - tableauPosition[i]) > dist)){
			max3 = tableauProbabilite[i];
			position3 = +i;
		}
	}
	wetherRandom(position3, tableauProbabilite, size);
	
	for (int i = 0; i < size / 2 - 1; i++)
	{
		if (max4 < tableauProbabilite[i] && max3 != tableauProbabilite[i] && max2 != tableauProbabilite[i] && max != tableauProbabilite[i] && max4 < max && max4 < max2 && max4 < max3 && ((tableauPosition[i + 1] - tableauPosition[i]) > dist)){
			max4 = tableauProbabilite[i];
			position4 = +i;
		}

	}
	wetherRandom(position4, tableauProbabilite, size);
	
	for (int i = 0; i < size / 2 - 1; i++)
	{
		if (max5 < tableauProbabilite[i] && max4 != tableauProbabilite[i] && max3 != tableauProbabilite[i] && max2 != tableauProbabilite[i] && max != tableauProbabilite[i] && max5 < max && max5 < max2 && max5 < max3 && max5 < max4 && ((tableauPosition[i + 1] - tableauPosition[i]) > dist)){
			max5 = tableauProbabilite[i];
			position5 = +i;
		}

	}
	wetherRandom(position5, tableauProbabilite, size);
	
	for (int i = 0; i < size / 2 - 1; i++)
	{
		if (max6 < tableauProbabilite[i] && max5 != tableauProbabilite[i] && max4 != tableauProbabilite[i] && max3 != tableauProbabilite[i] && max2 != tableauProbabilite[i] && max != tableauProbabilite[i] && max6 < max && max6 < max2 && max6 < max3 && max6 < max4 && max6 < max5 && ((tableauPosition[i + 1] - tableauPosition[i]) > dist)){
			max6 = tableauProbabilite[i];
			position6 = +i;
		}

	}
	wetherRandom(position6, tableauProbabilite, size);
	
	for (int i = 0; i < size / 2 - 1; i++)
	{
		if (max7 < tableauProbabilite[i] && max7 != tableauProbabilite[i] && max5 != tableauProbabilite[i] && max4 != tableauProbabilite[i] && max3 != tableauProbabilite[i] && max2 != tableauProbabilite[i] && max != tableauProbabilite[i] && max7 < max && max7 < max2 && max7 < max3 && max7 < max4 && max7 < max5&& max7 < max6 && ((tableauPosition[i + 1] - tableauPosition[i]) > dist)){
			max7 = tableauProbabilite[i];
			position7 = +i;
		}

	}
	wetherRandom(position7, tableauProbabilite, size);
	

	int pos = tableauPosition[position];

	int pos2 = tableauPosition[position2];
	int pos3 = tableauPosition[position3];
	int pos4 = tableauPosition[position4];
	int pos5 = tableauPosition[position5];
	int pos6 = tableauPosition[position6];
	int pos7 = tableauPosition[position7];
	cout << "\nLe jour 1 :\n";
	cout << "10 h \n";
	switch (nbTireurs){
	case 2:
		displayString(max, pos);
		displayString(max2, pos2);
		break;
	case 3:
		displayString(max, pos);
		displayString(max2, pos2);
		displayString(max3, pos3);
		break;
	case 4:
		displayString(max, pos);
		displayString(max2, pos2);
		displayString(max3, pos3);
		displayString(max4, pos4);
		break;
	case 5:
		displayString(max, pos);
		displayString(max2, pos2);
		displayString(max3, pos3);
		displayString(max4, pos4);
		displayString(max5, pos5);
		break;
	case 6:
		displayString(max, pos);
		displayString(max2, pos2);
		displayString(max3, pos3);
		displayString(max4, pos4);
		displayString(max5, pos5);
		displayString(max6, pos6);
		break;
	case 7:
		displayString(max, pos);
		displayString(max2, pos2);
		displayString(max3, pos3);
		displayString(max4, pos4);
		displayString(max5, pos5);
		displayString(max6, pos6);
		displayString(max7, pos7);
		break;
	default:
		break;
	}



	delete[]tableauPosition;
	delete[]tableauProbabilite;
	delete[]array;

	file.close();
}

void displayString(double proba, int pos){
	cout << "La probabilite de tuer des zombies est de " << proba << " a la position " << pos << "\n";
}

int getDist(){

	int chx;
	cout << "Choix de la distance\n"
		<< "1 - dist = 5\n"
		<< "2 - dist = 10\n"
		<< "3 - dist = 0\n";
	cin >> chx;
	int dist;
	switch (chx)
	{
	case 1:
		dist = 5;
		break;
	case 2:
		dist = 10;
		break;
	case 3:
		dist = 0;
		break;
	default:
		dist = 0;
		break;
	}


	return dist;
}

void wetherRandom(double position, double tableauProbabilite[], int size){

	srand(time(0));
	double meteo = rand() % 30 + (-15);
	double randomPositive = rand() % 15;
	double randomNegative = rand() % 15 - 30;

	if (meteo < 0)
	{
		if (position == 0)
		{
			tableauProbabilite[(int)position + 1] = tableauProbabilite[(int)position + 1] + randomPositive*tableauProbabilite[(int)position + 1] / 100;
		}
		if (position == size / 2 - 1)
		{
			tableauProbabilite[(int)position - 1] = tableauProbabilite[(int)position - 1] + randomPositive*tableauProbabilite[(int)position - 1] / 100;
		}
		else
		{
			tableauProbabilite[(int)position - 1] = tableauProbabilite[(int)-1] + randomPositive*tableauProbabilite[(int)position - 1] / 100;
			tableauProbabilite[(int)position + 1] = tableauProbabilite[(int)position + 1] + randomPositive*tableauProbabilite[(int)position + 1] / 100;
		}

	}
	else if (meteo >= 0)
	{
		if (position == 0)
		{
			tableauProbabilite[1] = tableauProbabilite[1] + randomNegative*tableauProbabilite[1] / 100;
		}
		if (position == size / 2 - 1)
		{
			tableauProbabilite[(int)position - 1] = tableauProbabilite[(int)position - 1] + randomNegative*tableauProbabilite[(int)position - 1] / 100;
		}
		else
		{
			tableauProbabilite[(int)position - 1] = tableauProbabilite[(int)position - 1] + randomNegative*tableauProbabilite[(int)position - 1] / 100;
			tableauProbabilite[(int)position + 1] = tableauProbabilite[(int)position + 1] + randomNegative*tableauProbabilite[(int)position + 1] / 100;
		}
	}
}