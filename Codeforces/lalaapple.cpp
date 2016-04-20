#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	int n,x,a,cont=0,aux;
	cin>>n;
	vector < pair <int,int> > pos(n);
	vector < pair <int,int> > aux_pos;
	for (int i = 0; i < n; i++)
	{
		
		cin>>x>>a;
		pos[i].first = x;
		pos[i].second = a;
	}
	sort(pos.begin(),pos.end());
	for (int i = 0; i < n; i++)
	{
		if(pos[i].first >= 0){
			aux_pos.push_back(pos[i].first).first;
			aux_pos.push_back(pos[i].second).second;
		
		}
	}
	for (int i = 0; i < n; i++)
	{
			if(pos[aux_pos.size()-i].first == aux_pos[i].first || i == aux_pos.size() && pos[aux_pos.size()-i].first > 0 ){
				cont += pos[aux_pos.size()-i].first + aux_pos[i].first;  
			}			
		
	}
	for (int i = 0; i < n; i++)
	{
		cout<< pos[i].first<<"  " <<pos[i].second <<endl;
	}
	return 0;
}