#include "Problem.h"
#include "TSP.h"
#include "Question5.h"
#include <iostream>
using namespace std;

Question5::Question5()
{
	mainQuestion5();
}

void Question5::mainQuestion5()
{
	Problem problem;
	problem.read();
	problem.calcDistances();

	TSP tsp;
	tsp.setProblem(problem);
	tsp.setMatrix();
	tsp.sortMatrix();
	for (int i = 1; i < 38; i++){
		tsp.findNeighbour(i);
	}
}
