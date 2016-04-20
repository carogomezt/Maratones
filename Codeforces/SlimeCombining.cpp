#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int> value(100001, 0);
	int aux;
	
	for (int i = 0; i < n; i++)
	{
		value[i] = aux;
		if(value[i] == value[i-1]){

			value[i-1] = value[i] + value[i-1]+1;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout<<value[i]<<endl;
	}
	if(value[0] == value[1])
		cout<<
	return 0;
}