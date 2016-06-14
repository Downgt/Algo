#include "Encrypt.h"


Encrypt::Encrypt(){

	mainEncrypt();

}

string Encrypt::encrypt(string msg, string key)
{
	
	string tmp(key);
	while (key.size() < msg.size())
		key += tmp;

	// And now for the encryption part
	for (string::size_type i = 0; i < msg.size(); ++i)
		msg[i] ^= key[i];
	return msg;
}
string Encrypt::decrypt(string msg, string key)
{
	return encrypt(msg, key);
}

void Encrypt::mainEncrypt()
{

	cout << "Choix de l'encryption\n";
	cout << "1 - Encrypton\n";
	cout << "2 - Decrypton\n";
	
	string messageUncrypt;
	int x;
	cin >> x;
	switch (x)
	{
	case 1:{
		string messageEncrypt;
		cout << "\nVotre message a encrypter\n";
		cin.ignore();
		getline(cin, messageEncrypt);
		cout << "\n";
		string message = encrypt(messageEncrypt, "noel");
		cout << "Message encrypte : " << message << "\n";
		const char *cstr = message.c_str();
		cout << cstr;
		SetClipboard(cstr);
		break;

	}
	case 2:{

		cout << "\nVotre message a decrypter\n";
		cin.ignore();
		getline(cin, messageUncrypt);
		cout << "\n";
		string message = encrypt(messageUncrypt, "noel");
		cout << "Message decrypte : " << decrypt(message, "noel");
		break;

	}
	default:
		break;
	}

	
	
	
	

}

void Encrypt::SetClipboard(const char *output)
{
	const size_t len = strlen(output) + 1;
	HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
	memcpy(GlobalLock(hMem), output, len);
	GlobalUnlock(hMem);
	OpenClipboard(0);
	EmptyClipboard();
	SetClipboardData(CF_TEXT, hMem);
	CloseClipboard();
}
