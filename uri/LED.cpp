#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int total;
	while(n--){
		string aux;
		cin>>aux;
		total=0;
		for (int i = 0; i < aux.size(); i++)
		{
			if(aux[i] == '1'){
				total += 2;
				continue;
			}
			if(aux[i] == '2'){
				total += 5;
				continue;
			}
			if(aux[i] == '3'){
				total += 5;
				continue;
			}
			if(aux[i] == '4'){
				total += 4;
				continue;
			}
			if(aux[i] == '5'){
				total += 5;
				continue;
			}
			if(aux[i] == '6'){
				total += 6;
				continue;
			}
			if(aux[i] == '7'){
				total += 3;
				continue;
			}
			if(aux[i] == '8'){
				total += 7;
				continue;
			}
			if(aux[i] == '9'){
				total += 6;
				continue;
			}
			if(aux[i] == '0'){
				total += 6;
				continue;
			}

		}
		cout<<total<<" leds"<<endl;

	}
	
	return 0;
}