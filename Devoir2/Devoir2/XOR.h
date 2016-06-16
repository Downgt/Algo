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
#include <conio.h>
#include <Windows.h>
using namespace std;



class XOR{
public:
	XOR();
	void SetClipboard(const char *);
	string encrypt(string msg, string key);
	string decrypt(string msg, string key);
	void mainXOR();
};