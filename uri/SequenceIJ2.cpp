#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int aux = 7;
	for (int i = 1; i < 10; i = i+2)
	{
		for (int j = 0; j < 3; j++)
		{
			if(aux==4)
				aux = 7;
			cout<<"I="<<i<<" J="<<aux<<endl;
			aux--;
		}
		
	}
	return 0;
}