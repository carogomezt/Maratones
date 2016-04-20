#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--){
		string a;
		cin>>a;
		int val=0;
		stack<char> aux;  
		for (int i = 0; i < a.size(); ++i)
		{
			if(a[i] == '<')
				aux.push('<');
			if(aux.empty()) 
				continue;
			else{
				if(a[i] == '>' && aux.top() == '<'){
					aux.pop();
					val++;
				}
			}


		}
		cout<<val<<endl;
	}
	return 0;
}