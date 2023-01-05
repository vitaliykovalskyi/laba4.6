#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double P, S;
	int n, k;
	
	S = 1; // 1-й спосіб
	n = 1;
	while (n <= 25)
	{
		P = 0;
		k = 1;
		while (k <= n)
		{
			P *= sqrt(pow(cos(k+n), 2));
			k++;
		}
		S += cos(n) + P;
		n++;
	}
	cout << S << endl;
	
	S = 1; // 2-й спосіб
	n = 1;
	do {
		P = 0;
		k = 1;
		do {
			P *= sqrt(pow(cos(k + n), 2));
			k++;
		} while (k <= n);
		S += cos(n) + P;
		n++;
	} while (n <= 25);
	cout << S << endl;

	S = 1;  // 3-й спосіб
	for (n = 1; n <= 25; n++)
	{
		P = 0;
		for (k = 1; k <= n; k++)
		{
			P *= sqrt(pow(cos(k + n), 2));
		}
		S += cos(n) + P;
	}
	cout << S << endl;
	
	S = 1; //4-й спосіб
	for (n = 25; n >= 1; n--)
	{
		P = 0;
		for (k = n; k >= 1; k--)
		{
			P *= sqrt(pow(cos(k + n), 2));
		}
		S += cos(n) + P;
	}
	cout << S << endl;
	return 0; 
}