#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b,c,d,L;
	
	while(cin >> a >> b >> c >> d >> L) {
		int fx=0,cont=0;
		if(a==0 && b == 0 && c ==0 && d ==0 && L == 00) {
			break;
		}
		else{
			for (int i = 0; i <= L; i++)
			{
				fx = a*i*i+b*i+c;
				if(fx%d == 0)
					cont++;
			}
			cout<<cont<<endl;
		}
		
	}

	return 0;
}