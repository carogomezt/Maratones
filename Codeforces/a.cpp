#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k, a;
	cin>>n>>k;
	vector<int> days(n);
	for (int i = 0; i < n; i++)
	{
		cin>>a;
		days[i]= a;
	}
	int total=0;
	int cont = 0;
	sort(days.begin(),days.end());
	
	
	for (int i = 0; i < n; i++)
	{
		total = total + days[i]; 
		if(total <= k){
			cont++;
			
		}	

	}
	cout<<cont<<endl;
		
	for (int i = 0; i < n; ++i)
	{
		cout<<days[i]<<" ";
		
	}
	cout << endl;
	return 0;
}