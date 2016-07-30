#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, m, w;
	cin>>n;
	while(n--){
		cin>>m>>w;
		int aux, cont=0, acum=0;
		std::vector<int> elep;
		for (int i = 0; i < m; i++)
		{
			cin>>aux;
			elep.push_back(aux);
		}
		sort(elep.begin(), elep.end());
		for (int i = 0; i < m; i++)
		{
			acum += elep[i];
			if(acum <= w)
				cont++;
		}
		cout<<cont<<endl;
	}
	return 0;
}