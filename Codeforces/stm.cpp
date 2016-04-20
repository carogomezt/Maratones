#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	while(cin>> t){
		int n;
		cin >>n;
		vector< vector<int> > pos;
		int num;
		for (int j = 0; j < n*2; j++)
		{
			for (int i = 0; i < n+1; i++)
			{
				cin>>num;
				pos[j][i] = num;

			}
		}
		for (int j = 0; j < n*2; j++)
	
		{
			for (int i = 0; i < n+1; i++)
			{
				cout<<pos[i][j];
			}
			cout<<endl;
		}
	}
	


	return 0;
}
