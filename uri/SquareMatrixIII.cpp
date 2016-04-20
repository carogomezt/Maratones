#include <bits/stdc++.h>
using namespace std;

long long power(long long base, long long ex) {
  long long ans = 1;
  for (long long i = 0; i < ex; i++)
    ans *= base;
  return ans;
}

int justified(int n) {
  stringstream ss;
  ss << n;
  return (ss.str()).size();
}

int main(int argc, char const *argv[])
{
	int n;
	while(cin>>n){
		if(n == 0)
			break;
		else{
			int mayor = power(2,(n-1)*2);
			int cont=1;
			int value = justified(mayor);
			for (int i = 1; i <= n; i++){
				for (int j = 1; j <= n; j++){
					cout<<setw(value);
					cout<<cont;
					if(j <= (n-1))
						cout<<" ";
					else{
						cout<<endl;
					}
					cont= cont*2;

				}
				cont = power(2,i);
				
			}
			cout<<endl;
			
		}
	}
	return 0;
}