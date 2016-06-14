#include <iostream>
#include <fstream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Zombies{
public:
	Zombies();
	void mainZombies();
	void displayFile(string fileName);
	void Choice(string fileName);
	void displayString(double proba, int pos);
	int getDist();
	void wetherRandom(double position, double tableauProbabilite[], int size);
};

