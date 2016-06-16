#include "Vigenere.h"
#include "Zombies.h"



Vigenere::Vigenere(){

	mainVigenere();
}

void Vigenere::mainVigenere(){

	string cle = "noel";

	string messageEncrypt;
	cout << "Message a encrypte \n";
	cin.ignore();
	getline(cin, messageEncrypt);

	cout << "\n" << messageEncrypt << "\n";
	cout << "\n  A: " << 'A' << "\n";

	string message = encryption(messageEncrypt, cle);
	cout << "le message encrypte devient : " << message << "\n";
	string messageDecrypt = decryption(message, cle);
	cout << "le message clair est " << messageDecrypt;


}


string Vigenere::encryption(string text, string cle){

	string res = "";
	string key = gestionCle(cle);

	for (int i = 0, j = 0; i < text.length(); i++){
		char c = text[i];
		if (c >= 'A' && c <= 'Z') 
		{
			res += ((c + key[j] - 2 * 'A') % 26 + 'A');
			j = ++j % key.length();
			
		}
		else if (c >= 'a' && c <= 'z')
		{
			res += ((c + key[j] - 2 * 'a') % 26 + 'a');
			j = (j+1) % key.length();
		}
		else 
		{
			res += c;
		}
		
	}

	return res;
}

string Vigenere::gestionCle(string cle)
{
	string key;

	for (int i = 0; i < cle.length(); i++) {
		char c = cle[i];
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
			key = key + c;
		}
	}
	return key;

}

string Vigenere::decryption(string text, string cle) {
	string res;

	string key = gestionCle(cle);

	for (int i = 0, j = 0; i < text.length(); i++) {
		char c = text[i];

		if (c >= 'A' && c <= 'Z')
		{
			res += ((c - key[j] + 26 - 2 * 'A') % 26 + 'A');
			j = ++j % key.length();

		}
		else if (c >= 'a' && c <= 'z')
		{
			res += ((c - key[j] + 26) % 26 + 'a');
			j = (j + 1) % key.length();
		}
	}
	return res;
}
