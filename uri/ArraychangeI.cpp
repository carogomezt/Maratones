#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int val;
	std::vector<int> value(20);
	for (int i = 19; i >= 0; i--)
	{
		cin>>val;
		value[i] = val;
	}
	for (int i = 0; i < 20; i++)
	{
		cout<<"N["<<i<<"] = "<<value[i]<<endl;
	}
	
	return 0;
}