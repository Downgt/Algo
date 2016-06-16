#include "RSA.h"

RSA::RSA(){
	mainRSA();
}

int RSA::prime(long int pr)
{
	int i;
	j = sqrt(pr);
	for (i = 2; i <= j; i++)
	{
		if (pr % i == 0)
			return 0;
	}
	return 1;
}
void RSA::mainRSA()
{
	cout << "\nENTER FIRST PRIME NUMBER\n";
	cin >> p;
	flag = prime(p);
	if (flag == 0)
	{
		cout << "\nWRONG INPUT\n";
		exit(1);
	}
	cout << "\nENTER ANOTHER PRIME NUMBER\n";
	cin >> q;
	flag = prime(q);
	if (flag == 0 || p == q)
	{
		cout << "\nWRONG INPUT\n";
		exit(1);
	}
	cout << "\nENTER MESSAGE\n";
	fflush(stdin);
	cin >> msg;
	for (i = 0; msg[i] != NULL; i++)
		m[i] = msg[i];
	n = p * q;
	t = (p - 1) * (q - 1);
	ce();
	cout << "\nPOSSIBLE VALUES OF e AND d ARE\n";
	for (i = 0; i < j - 1; i++)
		cout << e[i] << "\t" << d[i] << "\n";
	encrypt();
	decrypt();
}
void RSA::ce()
{
	int k;
	k = 0;
	for (i = 2; i < t; i++)
	{
		if (t % i == 0)
			continue;
		flag = prime(i);
		if (flag == 1 && i != p && i != q)
		{
			e[k] = i;
			flag = cd(e[k]);
			if (flag > 0)
			{
				d[k] = flag;
				k++;
			}
			if (k == 99)
				break;
		}
	}
}
long int RSA::cd(long int x)
{
	long int k = 1;
	while (1)
	{
		k = k + t;
		if (k % x == 0)
			return (k / x);
	}
}
void RSA::encrypt()
{
	long int pt, ct, key = e[0], k, len;
	i = 0;
	len = strlen(msg);
	while (i != len)
	{
		pt = m[i];
		pt = pt - 96;
		k = 1;
		for (j = 0; j < key; j++)
		{
			k = k * pt;
			k = k % n;
		}
		temp[i] = k;
		ct = k + 96;
		en[i] = ct;
		i++;
	}
	en[i] = -1;
	cout << "\nTHE ENCRYPTED MESSAGE IS\n";
	for (i = 0; en[i] != -1; i++)
		printf("%c", en[i]);
}
void RSA::decrypt()
{
	long int pt, ct, key = d[0], k;
	i = 0;
	while (en[i] != -1)
	{
		ct = temp[i];
		k = 1;
		for (j = 0; j < key; j++)
		{
			k = k * ct;
			k = k % n;
		}
		pt = k + 96;
		m[i] = pt;
		i++;
	}
	m[i] = -1;
	cout << "\nTHE DECRYPTED MESSAGE IS\n";
	for (i = 0; m[i] != -1; i++)
		printf("%c", m[i]);
}