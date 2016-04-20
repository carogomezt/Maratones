#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	vector<long long> fibo(42, 0);
	fibo[0] = fibo[1] = 1;
	for (int i = 2; i < 42; i++) fibo[i] = fibo[i - 1] + fibo[i - 2];

	while (cin >> n and n) {
	cout << fibo[n] << endl;
	}
	return 0;
}
	