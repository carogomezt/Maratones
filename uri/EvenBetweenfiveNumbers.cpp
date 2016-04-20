#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int num, total = 0;
	for (int i = 0; i < 5; i++)
	{
		cin>>num;
		if(abs(num)%2 == 0)
			total++;

	}
	cout<<total<<" valores pares"<<endl;
	return 0;
}