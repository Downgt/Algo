#include <iostream>
#include <fstream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct PositionMax
{
	int m;
	int p;
};

class Zombies{
public:
	Zombies();
	void mainZombies();
	void displayFile(string fileName);
	void Choice(string fileName);
	void displayString(double proba, int pos);
	static int getDist();
	static void wetherRandom(double position, double tableauProbabilite[], int size);
	PositionMax getMaxPosition(int size, double tableauProbabilite[], int max, int position);
};

