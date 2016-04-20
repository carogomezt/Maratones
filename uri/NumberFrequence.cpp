#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,aux;
	cin>>n;
	vector<int> v(n);

		
	for (int i = 0; i < v.size(); i++)
	{
		cin>>aux;
		v[i] = aux;
	}
		
	
	int cont=1;
		sort(v.begin(), v.end());
		for (int i = 0; i < v.size(); i++)
		{
			if(v[i] == v [i+1])
				cont++;
			else{
				cout<<v[i]<<" aparece "<<cont<<" vez(es)"<<endl;
				cont = 1;
			}
			
		}
	return 0;
}