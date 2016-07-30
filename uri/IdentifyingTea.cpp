#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b, c, d, e, resp=0;
	cin>>n>>a>>b>>c>>d>>e;
	if(n==a)
		resp++;
	if(n==b)
		resp++;
	if(n==c)
		resp++;
	if(n==d)
		resp++;
	if(n==e)
		resp++;
	cout<<resp<<endl;

	return 0;
}