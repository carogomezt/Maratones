#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string aux;
	int open=0, close=0, max=-1000007, subs = 0;

	cin>>aux;
	for (int i = 0; i < aux.size(); i++)
	{
		if(aux[i] == '(')
			open++;
		if(aux[i] == ')'and (open != 0))
			close++;
		if( (open-close == 0) and ((open > 0) and (close > 0))) {
			if(max < (open+close)){
				max = open+close;
			}
			cout<<max<<endl;
			open = 0;
			close = 0;
			subs++;

		}

		
	}
	if(max == -1000007){
		cout<<0<<" "<<1<<endl;
	}else{
		cout<<max<<" "<<subs<<endl;
	}
	
	
	return 0;
}
