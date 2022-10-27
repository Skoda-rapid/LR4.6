#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P1, P2;
	int n, k;
	P1 = 1;
	k = 1;
	while (k <= 20)

	{
		P2 = 1;
		n = 1;
		while (n <= 25 - k)

		{
			P2 *= ((k - n) / (k + n)) + 1;
			n++;
		}
		P1 *= P2;
		k++;

	}

	cout << "1) P= " << P1 << endl;
	

	P1 = 1;
	k = 1;
	do
	{
		P2 = 1;
		n = 1;
		do
		{
			P2 *= ((k - n) / (k + n)) + 1;
			n++;
		}

		while (n <= 25 - k);
		P1 *= P2;
		k++;
	} while (k<=20);
	
	cout << "2) P= " << P1 << endl;
	
	
	P1 = 1;
	for (k = 1; k <= 20; k++)

	{
		P2 = 1;
		for (n = 1; n <= 25-k; n++)

		{
			P2 *= ((k - n) / (k + n)) + 1;

		}
		P1 *= P2;

	}
	cout << "3) P= " << P1 << endl;
	

	P1 = 1;
	for (k = 20; k >= 1; k--
		)

	{
		P2 = 1;
		for (n <= 25 - k; n >= 1; n-- )

		{
			P2 *= ((k - n) / (k + n)) + 1;
		
		}
		P1 *= P2;
	}
	cout << "4) P= " << P1 << endl;
	system("pause");
	return 0;
}
