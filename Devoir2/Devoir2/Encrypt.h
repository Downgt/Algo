#include <iostream>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Encrypt{
public:
	Encrypt();
	string encryption(string toEncrypt);
	void mainEncrypt();
};