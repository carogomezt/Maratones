#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n, p;
	while(cin>>t>>n){
		if(t == 0 and n == 0)
			break;
		else{
			string team;
			int aux=0;
			vector<pair < string, int> > value(t);
			for (int i = 0; i < t; i++)
			{
				cin>>team>>p;
				value[i].first = team;
				value[i].second = p; 

			}
			for (int i = 0; i < t; i++)
			{
				if(value[i].second % 3 != 0)
					aux += value[i].second % 3; 

			}
			cout<<aux/2<<endl;
		}
	}
	return 0;
}