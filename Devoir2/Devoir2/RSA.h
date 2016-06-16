#include<iostream>
#include<math.h>
#include<string.h>
#include<stdlib.h>

long int p, q, n, t, flag, e[100], d[100], temp[100], j, m[100], en[100], i;
char msg[100];

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

