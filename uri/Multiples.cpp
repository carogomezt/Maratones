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
	if(m%n == 0)
		cout<<"Sao Multiplos"<<endl;
	else{
		cout<<"Nao sao Multiplos"<<endl;
	}
	return 0;
}
