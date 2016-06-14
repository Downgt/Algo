#include "Problem.h"
#include "TSP.h"
#include "CityPlay.h"
#include <iostream>
using namespace std;

CityPlay::CityPlay()
{
	mainCityPlay();
}

void CityPlay::mainCityPlay()
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
