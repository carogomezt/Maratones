#include <bits/stdc++.h>
using namespace std;
int converTo (string a){
	stringstream stream; 
	stream << a; 
	int result;
	stream>>result;
	return result;
}
int main(int argc, char const *argv[])
{
	int a,b=1;
	//cin >> a;
	while(cin>>a){
		while(a--){
	vector< pair < int, int > > entradas(a+1);
	vector< pair < int, int > > salidas(a+1);
	vector< pair < int, pair < int, int > > > total(a+1);
	int cont = 0;
	
		int hh,mm;
		string ent;
		cin>>ent;
		string sal;
		cin>>sal;
		string shit;
		getline(cin,shit);
		string e_aux,e_aux1,s_aux,s_aux1;
		for (int i = 0; i < ent.size(); ++i){
			if(ent[i] == ':' ){
				e_aux =  ent.substr(ent.size()-i);
				e_aux1 = ent.substr(0,2);
				s_aux =  sal.substr(ent.size()-i);
				s_aux1 = sal.substr(0,2);
				//cout<<e_aux<<"->" << e_aux1<<endl;
			}
		}
		
			entradas[cont].first = converTo(e_aux1);
			entradas[cont].second = converTo(e_aux);

			salidas[cont+1].first = converTo(s_aux1);
			salidas[cont+1].second = converTo(s_aux);

			salidas[0].first = 10;
			salidas[0].second = 0;
			entradas[entradas.size()-1].first = 18;
			entradas[entradas.size()-1].second = 0;
			cont++;
		
			for (int i = 0; i < total.size(); i++){
					total[i].first = (entradas[i].first*60 + entradas[i].second) - (salidas[i].first*60 + salidas[i].second);
					total[i].second.first = salidas[i].first;
					total[i].second.second = salidas[i].second;		
			} 

			

			
			
			
			//cout << " un dato "<< entradas.size()+1<<endl;
			//cout << "entrada "<< entradas[cont].first << " -> " << entradas[cont].second<< " Salida  "<<  salidas[cont].first << " -> " << salidas[cont].second<<endl;
			
	
	
		
		/*for (int i = 0; i < total.size(); i++){
			cout << "total "<< total[i].first << " ->> " << total[i].second.first << "  " << total[i].second.second<< endl;
		}*/

		pair< int, pair < int,int > > aux;
		for (int i = 0; i < total.size(); i++)
		{
			if(total[i].first == total[i+1].first){
				if(total[i].second.first > total[i+1].second.first){
					aux.first = total[i].first;
					aux.second.first = total[i].second.first; 
					aux.second.second = total[i].second.second;
				}
			}
			else{
				if(total[i].first > total[i+1].first){
					cout<<"Day #"<<b<<": the longest nap starts at "<<total[i].second.first<<":"<<total[i].second.second<<" and will last for "<<total[i].first<<endl;
					break;
				}
				else{
					cout<<"Day #"<<b<<": the longest nap starts at "<<aux.second.first<<":"<<aux.second.second<<" and will last for "<<aux.first<<endl;
					break;
				}
			}
		}
	}
}
		b++;
		/*
		for (int i = 0; i < entradas.size(); i++)
		{
			
			cout << "entrada "<< entradas[i].first << " -> " << entradas[i].second<< " Salida  "<<  salidas[i].first << " -> " << salidas[i].second<<endl;
		}
		cout<< endl;
			*/
		//cout<< ent<< "  "<< sal <<" " << shit<<endl;
	
	return 0;
}