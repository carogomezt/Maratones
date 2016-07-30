#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,l;
	cin>>n;
	int two=0, three=0, four=0, five=0;
	while(n--){
		cin>>l;
		if(l%2 == 0)
			two++;
		if(l%3 == 0)
			three++;
		if(l%4 == 0)
			four++;
		if(l%5 == 0)
			five++;
	}
	cout<<two<<" Multiplo(s) de 2"<<endl;
	cout<<three<<" Multiplo(s) de 3"<<endl;
	cout<<four<<" Multiplo(s) de 4"<<endl;
	cout<<five<<" Multiplo(s) de 5"<<endl;
	return 0;
}