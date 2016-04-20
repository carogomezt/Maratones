#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n = 10, num, i = 0;
	while(n--){
		cin>>num;
		if(num<= 0)
			num = 1;
		cout<<"X["<<i<<"] = "<<num<<endl;
		i++;
	}
	return 0;
}