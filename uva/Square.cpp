#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n; 
	cin>>n;
	while(n--){
		double m, x;
		cin>>m;
		int result=0.0;
		for (int i = 0; i < m; i++)
		{
			cin>>x;
			result+=x;
		}
		if(result%4 == 0)
			cout<<"yes"<<endl;
		else{
			cout<<"no"<<endl;
		}
	}
	return 0;
}