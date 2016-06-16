#include "Caesar.h"

Caesar::Caesar(){
	mainCaesar();
}

void Caesar::mainCaesar(){

	string messageEncrypt;
	cout << "Message a encrypte \n";
	cin.ignore();
	getline(cin, messageEncrypt);
	string output = "";
	for (int x = 0; x < messageEncrypt.length(); x++)
	{
		output += encryption(messageEncrypt[x]);
	}
	cout << "\n" << output <<"\n";
	string de = "";
	for (int x = 0; x < output.length(); x++)
	{
		de += decryption(output[x]);
	}
	cout << "\n" << de << "\n";
}

char Caesar::encryption(char c){

		c = c - 10;
	return c;
}

char Caesar::decryption(char c){

		c = c + 10;
	return c;
}