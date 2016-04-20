#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n; 
	double note;
	string m;
	cin>>n;
	vector< pair < double, string> > value(n);
	for (int i = 0; i < n; i++)
	{
		cin>>m>>note;
		value[i].first = note;
		value[i].second = m;
		
	}
	sort(value.begin(), value.end());

	if(value[value.size()-1].first >= 8.0)
		cout<<value[value.size()-1].second<<endl;
	else{
		cout<<"Minimum note not reached"<<endl;
	}
	return 0;
}

