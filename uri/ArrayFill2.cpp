#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, aux = 0;
	cin>>n;
	vector<int> value(1000);
	for (int i = 0; i < 1000; i++)
	{
		if(aux < n){
			cout<<"N["<<i<<"] = "<<aux<<endl;
			aux++;
		}
		if(aux == n)
			aux = 0;

	}
	return 0;
}