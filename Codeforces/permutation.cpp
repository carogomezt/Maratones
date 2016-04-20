#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	vector<int> vec(15);
	vector<int> copy(15);
	for (int i = 0; i < n; ++i)
	{
		
		vec[i]= i+1;
	}
	for (int i = 0; i < n; ++i)
	{
		copy[i]=vec[i];
	}

	int aux=n;
	for (int i = 0; i < m; ++i)
	{
		vec[aux-1]= copy[aux];
		vec[aux] = copy[aux-1];
		aux= aux-1;
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<vec[i];
		cout<<endl;

	}
	

	return 0;
}