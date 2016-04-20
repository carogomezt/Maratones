#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	if(t == 61)
		cout<<"Brasilia"<<endl;
	else{
		if(t == 71)
		cout<<"Salvador"<<endl;
		else{
			if(t == 11)
				cout<<"Sao Paulo"<<endl;
			else{
				if(t == 21)
					cout<<"Rio de Janeiro"<<endl;
				else{
					if(t == 32)
						cout<<"Juiz de Fora"<<endl;
					else{
						if(t == 19)
							cout<<"Campinas"<<endl;
						else{
							if(t == 27)
								cout<<"Vitoria"<<endl;
							else{
								if(t == 31)
									cout<<"Belo Horizonte"<<endl;
								else{
									cout<<"DDD nao cadastrado"<<endl;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}