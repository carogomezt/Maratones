#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,num;
	cin>>a;
	while(a--){
		cin>> num;
		int total;
		total = (((((num*567)/9)+7492)*235)/47)-498;
		
		stringstream stream; 
		string result; 
		stream << total; 
		result = stream.str();

		cout <<result[result.size()-2]<<endl;

	}
	return 0;
}