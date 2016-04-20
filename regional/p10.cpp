#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int p;
	cin>>p;
	while(p--){
		int d, n;
		cin>>d>>n;
		vector<int> value;
		if(n == 1) cout<<d<<" "<<n<<endl;
		else{
			value.push_back(n);
			while(n!= 1){
				if(n%2 ==0){
					n /=2;
					value.push_back(n);}
				else{
					if(n%2 != 0){
						n = (n*3)+1;
						value.push_back(n);
					}
				}

			}
			sort(value.rbegin(), value.rend());
			
			cout<<d<<" "<<value[0]<<endl;
		}

	}
	return 0;
}