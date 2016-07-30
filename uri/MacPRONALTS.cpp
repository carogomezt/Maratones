#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; 
	double cont=0.0;
	cin>>n;
	while(n--){
		int p, q;
		cin>>p>>q;
		if(p== 1001)
			cont += q*1.50;
		if(p== 1002)
			cont += q*2.50;
		if(p== 1003)
			cont += q*3.50;
		if(p== 1004)
			cont += q*4.50;
		if(p== 1005)
			cont += q*5.50;
	}
	cout<<fixed<<setprecision(2)<<cont<<endl;
	return 0;
}