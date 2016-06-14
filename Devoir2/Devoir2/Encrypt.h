#include <iostream>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <istream>

using namespace std;



class Encrypt{
public:
	
	Encrypt();
	
	string encrypt(string msg, string key);
	string decrypt(string msg, string key);
	void mainEncrypt();
};