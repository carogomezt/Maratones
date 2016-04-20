#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<double> value;
	value.push_back(4.0);
	value.push_back(4.5);
	value.push_back(5.0);
	value.push_back(2.0);
	value.push_back(1.5);
	int x,y;
	cin>>x>>y;
	cout<<"Total: R$ "<<fixed<<setprecision(2)<<value[x-1]*y<<endl;


	return 0;
}