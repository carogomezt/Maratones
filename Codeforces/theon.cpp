#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, num, t;
	cin>>n;
	vector< pair < int, int> > value(n);
	for (int i = 0; i < n; i++)
	{
		cin>>num;
		value[i].first = num;
		value[i].second = i+1;
		
	}
	sort(value.begin(), value.end());

	cout<<value[0].second<<endl;
	return 0;
}