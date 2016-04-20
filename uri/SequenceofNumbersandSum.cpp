#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int m, n;
	while(cin>>m>>n){
		if(m<=0 || n<=0)
			break;
		else{
			if(n>m){
				int aux;
				aux = m;
				m=n;
				n=aux;
			}
			int sum= 0;
			for (int i = n; i <= m; i++)
			{
				cout<<i<<" ";
				sum += i;
			}
			cout<<"Sum="<<sum<<endl;
		}

	}
	return 0;
}