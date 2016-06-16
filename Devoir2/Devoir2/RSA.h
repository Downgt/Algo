#include<iostream>
#include<math.h>
#include<string.h>
#include<stdlib.h>


using namespace std;
class RSA {
public:
	RSA();
	void mainRSA();
	int prime(long int);
	void ce();
	long int cd(long int);
	void encrypt();
	void decrypt();
};

