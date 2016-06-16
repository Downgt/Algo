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


class Vigenere{
public :
	Vigenere();
	void mainVigenere();
	string encryption(string text, string cle);
	string decryption(string text, string cle);
	string gestionCle(string cle);
};