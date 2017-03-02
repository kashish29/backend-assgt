#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void mul(long long int F[][2], long long int N[][2]) {
	long long int x, y, z, w;
	x = (F[0][0] * N[0][0] + F[1][0] * N[0][1]) % 1000000007;
	y = (F[0][1] * N[0][0] + F[1][1] * N[0][1]) % 1000000007;
	z = (F[1][0] * N[0][0] + F[1][1] * N[1][0]) % 1000000007;
	w = (F[1][0] * N[0][1] + F[1][1] * N[1][1]) % 1000000007;
	N[0][0] = x;
	N[0][1] = y;
	N[1][0] = z;
	N[1][1] = w;
}


long long int fib(long long int n) {
	long long int F[2][2], N[2][2];
	F[0][0] = 1;
	F[0][1] = 1;
	F[1][0] = 1;
	F[1][1] = 0;
	N[0][0] = 1;
	N[0][1] = 0;
	N[1][0] = 0;
	N[1][1] = 1;
	while (n != 0) {
		if (n % 2 == 0) {
			mul(F, F);
		}
		if (n % 2 == 1) {
			mul(F, N);
			mul(F, F);
		}
		n = n / 2;
	}
	return N[0][1];
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		long long int n;
		cin >> n;
		cout << fib(n + 2) << endl;
		//cout << 1134903170 % 1000000007 << endl;
	}
	return 0;
}

