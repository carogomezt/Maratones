#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin>>T;
	while(T--){
		string s;
		cin>>s;
		string aux = s;
		int j=0;
		for (int i = s.size()-1; i >= 0; i--)
			{
				//cout<<s[i]<<endl;
				aux[j]= s[i];
				j++;
			}	
		cout<<aux<<endl;
	}
	return 0;
}