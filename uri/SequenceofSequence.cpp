#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, cont=1, num=1;
	while(cin>>n){
		for (int i = 0; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				num++;
			}
		}
		if(n == 0)
			cout<<"Caso "<<cont<<": "<<num<<" numero"<<endl;
		else{
			cout<<"Caso "<<cont<<": "<<num<<" numeros"<<endl;
		}
		for (int i = 0; i <= n; i++)
		{
			if(i == 0)
				cout<<0;
			for (int j = 1; j <= i; j++)
			{
				cout<<i;
				if(j != i)
					cout<<" ";
			}
			if(i != n)
				cout<<" ";
		}
		cout<<endl;
		cout<<endl;
		num=1;
		cont++;
	}
	return 0;
}