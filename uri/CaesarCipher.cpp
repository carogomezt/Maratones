#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--){
		string a;
		cin>>a;
		int num;
		cin>>num;
		for (int i = 0; i < a.size(); i++)
		{
			cout<<(char)((((a[i]-'A') - num + 26) % 26) + 'A');
		}
		cout<<endl;
	}
	return 0;
}