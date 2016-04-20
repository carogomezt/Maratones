#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,x;
	cin>>n;
	vector<pair <int, int > > value(n);
	for (int i = 0; i < n; i++)
	{
		cin>>x;
		value[i].first = x;
		value[i].second = i;
	}
	sort(value.begin(), value.end());
	cout<<"Menor valor: "<<value[0].first<<endl;
	cout<<"Posicao: "<<value[0].second<<endl;
	return 0;
}