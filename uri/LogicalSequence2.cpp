#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, m;
	cin>>n>>m;
	for (int i = 1; i <= m; i++)
	{
		
		cout<<i;
		if(i%n != 0)
			cout<<" ";
		if(i%n == 0)
			cout<<endl;
	}
	return 0;
}