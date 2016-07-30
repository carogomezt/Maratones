#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	string act;
	cin>>n>>m;
	int cont=n;
	while(m--){
		cin>>act;		
		if(act =="fechou")
			cont++;
		if(act=="clicou")
			cont--;
	}
	cout<<cont<<endl;
	return 0;
}