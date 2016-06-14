#include "Encrypt.h"

Encrypt::Encrypt(){

	mainEncrypt();

}

string Encrypt::encrypt(string msg, string key)
{
	
	string output = msg;

	for (int i = 0; i < msg.size(); i++)
		output[i] = msg[i] ^ key[i % (sizeof(key) / sizeof(char))];

	return output;
}
string Encrypt::decrypt(string msg, string key)
{
	return encrypt(msg, key); 
}

void Encrypt::mainEncrypt()
{
	cout << "\nVotre message a encrypter\n";
	string messageEncrypt;
	cin.ignore();
	getline(cin, messageEncrypt);
	cout << "\n";
	string message = encrypt(messageEncrypt, "noel");
	cout << "Message encrypte : " << message << "\n";
	cout << "Message decrypte: " << decrypt(message, "noel");

}
