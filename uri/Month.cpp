#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<string> monts;
	monts.push_back("January");
	monts.push_back("February");
	monts.push_back("March");
	monts.push_back("April");
	monts.push_back("May");
	monts.push_back("June");
	monts.push_back("July");
	monts.push_back("August");
	monts.push_back("September");
	monts.push_back("October");
	monts.push_back("November");
	monts.push_back("December");
	cout<<monts[n-1]<<endl;
	


	return 0;
}