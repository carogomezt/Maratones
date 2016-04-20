#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli count(lli n){
	if(n <= 9) 
		return n;
	if(n > 9 && n <= 99) 
		return (n + (n-9));
	if(n > 99 && n <= 999) 
		return (n + (n-9) + (n-99));
	if(n > 999 && n <= 9999) 
		return (n + (91) + (901) + (n-999));
	if(n > 9999 && n <= 99999) 
		return (n + (91) + (901) + (9001) + (n-9999));
	if(n > 99999 && n <= 999999) 
		return (n + (91) + (901) + (9001) + (90001) + (n-99999));
	if(n > 999999 && n <= 9999999) 
		return (n + (91) + (901) + (9001) + (90001) + (900001) + (n-999999));
	if(n > 9999999 && n <= 99999999) 
		return (n + (91) + (901) + (9001) + (90001) + (900001) + (9000001) + (n-9999999));
	if(n > 99999999 && n <= 999999999) 
		return (n + (91) + (901) + (9001) + (90001) + (900001) + (9000001) + (90000001) + (n-99999999));
	if(n > 999999999) 
		return (n + (91) + (901) + (9001) + (90001) + (900001) + (9000001) + (90000001) + (900000001) + 1);
}

int main(int argc, char const *argv[])
{
	lli num;
	cin>>num;
	cout<<count(num)<<endl;
	
	return 0;
}