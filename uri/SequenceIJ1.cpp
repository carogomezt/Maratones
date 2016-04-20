#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int aux= 1;
	for (int i = 60; i >= 0; i = i- 5)
	{
		cout<<"I="<<aux<<" "<<"J="<<i<<endl;
		aux += 3;
	}
	return 0;
}