#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int num, n=100, aux= -100000, pos= 1, posac= 1;
	while(n--){
		cin>>num;
		if(num >= aux){
			aux = num;
			posac = pos;
		}
		pos++;

	}
	cout<<aux<<endl;
	cout<<posac<<endl;
	return 0;
}