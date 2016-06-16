# include <stdio.h>
# include <fstream>
# include <string.h>
# include <iostream>
# include <stdlib.h>
using namespace std;

int key[64] =
{
	0, 0, 0, 1, 0, 0, 1, 1,
	0, 0, 1, 1, 0, 1, 0, 0,
	0, 1, 0, 1, 0, 1, 1, 1,
	0, 1, 1, 1, 1, 0, 0, 1,
	1, 0, 0, 1, 1, 0, 1, 1,
	1, 0, 1, 1, 1, 1, 0, 0,
	1, 1, 0, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 0, 0, 0, 1
};

class DES
{
public:
	int keyi[16][48],
		total[64],
		left[32],
		right[32],
		ck[28],
		dk[28],
		expansion[48],
		z[48],
		xor1[48],
		sub[32],
		p[32],
		xor2[32],
		temp[64],
		pc1[56],
		ip[64],
		inv[8][8];
	char final[1000];
	DES();
	void mainDES();
	void IP();
	void PermChoice1();
	void PermChoice2();
	void Expansion();
	void inverse();
	void xor_two();
	void xor_oneE(int);
	void xor_oneD(int);
	void substitution();
	void permutation();
	void keygen();
	char * Encrypt(char *);
	char * Decrypt(char *);
};