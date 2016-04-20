#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
	int n,aux,count=0;
	cin>>n;
	vector<int> a(n);
	vector<int> result(n);
	
	for (int i = 0; i < n; i++)
	{
		cin>>aux;
		a[i] = aux;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(a[i] < a[j])
				count++;
		}
		result[i] = count + 1;
		count = 0;
	}
	for (int i = 0; i < n; i++)
	{
		cout<<result[i]<<endl;
	}
	return 0;
}