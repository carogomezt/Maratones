#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, m, aux;
	cin>>n>>m;
	if(n>m){
		aux =m;
		m = n;
		n = aux;
	}
	for (int i = n+1; i < m; i++)
	{
		if(i%5 == 2 || i%5 == 3)
			cout<<i<<endl;
	}

	return 0;
}