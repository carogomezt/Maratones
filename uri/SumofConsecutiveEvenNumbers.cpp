#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, x, y, aux;
	cin>>n;
	while(n--){
		int total = 0;
		cin>>x>>y;
		if(x>y){
			aux = y;
			y = x;
			x = aux;
		}
		
		for (int i = x+1; i < y; i++)
		{
			if(i%2 != 0 ){				
				total += i;
			}
		}
		cout<<total<<endl;
		
	}
	return 0;
}