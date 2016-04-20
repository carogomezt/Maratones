#include <bits/stdc++.h>

using namespace std;
int remain[12][12];

int main(int argc, char const *argv[])
{
	int n,cont;
	cin>>n;
	memset(remain,0,sizeof(remain));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(j == 0 || i == 0){
				//cout<<"entre"<<endl;
				remain[j][i] = 1;
			}
			else{
				cont= remain[j][i-1]+remain[j-1][i];
				remain[j][i]= cont;
			}
		}
	}
	cout<<remain[n-1][n-1]<<endl;
	return 0;
}