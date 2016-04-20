#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	double num;
	for (int i = 0; i < 100; i++)
	{
		cin>>num;
		if(num <= 10.0)
			cout<<"A["<<i<<"] = "<<fixed<<setprecision(1)<<num<<endl;
	}
	return 0;
}