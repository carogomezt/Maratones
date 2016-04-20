#include <bits/stdc++.h>
using namespace std;



int main(int argc, char const *argv[])
{
	double radio, ancho, largo;
	int cont=1;
	while(cin>>radio){
		if(radio == 0)
			break;
		else{
			cin>>ancho>>largo;
			double teorema = sqrt((ancho*ancho)+(largo*largo));
			if( teorema <= radio*2)
				cout<<"Pizza "<<cont<<" fits on the table."<<endl;
			else{
				cout<<"Pizza "<<cont<<" does not fit on the table."<<endl;
			}
		}
		cont++;
	}
	return 0;
}