#include <bits/stdc++.h>
using namespace std;

int main()
{
	int p, j1, j2, r, a;
	cin>>p>>j1>>j2>>r>>a;
	int result = j1+j2;
	if((r==1 && a==0) || (r==0 && a==1))
		cout<<"Jogador 1 ganha!"<<endl;
	else{
		if(r==1 && a==1) 
			cout<<"Jogador 2 ganha!"<<endl;
		else{		
			if(((p == 1) && (result%2 == 0)) || (p == 0) && (result%2 != 0))
				cout<<"Jogador 1 ganha!"<<endl;
			else{
				cout<<"Jogador 2 ganha!"<<endl;
			}
		}
	}
	
	
	
	return 0;
}