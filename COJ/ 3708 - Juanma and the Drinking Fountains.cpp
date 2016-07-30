#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	long long int n, result;
	cin>>t;
	while(t--){
		cin>>n;
		result = (pow(n,4)-6*pow(n,3)+23*pow(n,2)-18*n+24)/24;
		printf("%lld \n", result);
		//cout<<<<endl;
	}
	return 0;
}

