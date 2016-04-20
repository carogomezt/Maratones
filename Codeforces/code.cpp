#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int> current;
	vector<int> aux;	
	for (int i = 0; i < n; i++)
	{
		current.push_back(i+1);
	}
	for (int i = 0; i < current.size(); i++)
	{
		if(current.size()%2 != 0){
			aux.push_back(current[i]);
			aux.push_back(current[current.size()/2 + i+1])
		}
		else{		
			
		}
	}
	return 0;
}