#include <bits/stdc++.h>
using namespace std;

long long int factorial(long long int n){
	if(n == 0)
		return 1;
	if(n == 1)
		return 1;
	else{
		return n * factorial(n-1);
	}
}

int main(int argc, char const *argv[])
{
	long long int a, b, result;
	while(cin>>a>>b){
		result = factorial(a) + factorial(b);
		cout<<result<<endl;
	}
	return 0;
}