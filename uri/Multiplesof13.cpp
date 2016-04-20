#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, m, sum=0, aux;
	cin>>n>>m;
	if(n>m){
		aux =m;
		m = n;
		n = aux;
	}
	for (int i = n; i <= m;i++)
	{
		if(i%13 != 0)
			sum += i;
	}
	cout<<sum<<endl;
	return 0;
}