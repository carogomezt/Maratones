#include <bits/stdc++.h>
using namespace std;

int mcd (int a, int b)
{
	int c;
	while (a!=b)
	{
		if (a>b)
			a=a-b;
		else
			b=b-a;
	}
	c=a;
	return c;
}

int main(int argc, char const *argv[])
{
	int x, y, z;
	while(cin>>x>>y>>z){
		if(((x*x)+(y*y) == (z*z)) ||  ((x*x)+ (z*z) == (y*y)) || ((y*y)+ (z*z) == (x*x))){
			if(mcd(x,mcd(y,z)) == 1)
				cout<<"tripla pitagorica primitiva"<<endl;
			else{
				cout<<"tripla pitagorica"<<endl;

			}
		}
		else{
			cout<<"tripla"<<endl;
		}

	}
	return 0;
}