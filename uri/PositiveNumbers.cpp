#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n= 6, resp=0;
	double num;
	while(n--){
		cin>>num;
		if(num> 0)
			resp++;
	}
	cout<<resp<<" valores positivos"<<endl;
	return 0;
}