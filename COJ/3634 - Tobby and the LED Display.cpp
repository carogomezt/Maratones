#include <bits/stdc++.h>
using namespace std;

int toInt(string x){
	stringstream s;
	s<<x;
	int r;
	s>>r;
	return r;
}

vector<string> tokens(string s) {
  stringstream ss(s);
  string token;  
  // ss Le pasa cada token a token uno por uno 
  int i= 0;
  vector<string> v(4);
  while (ss >> token) {
  	v[i] = token;
  	i++;
  }
  return v;
}

int main(int argc, char const *argv[])
{
	string data;
	while(getline(cin, data)){
		string a, b, c;
		getline(cin, a);
		getline(cin, b);
		getline(cin, c);
		vector<string> val(4);
		val = tokens(data);
		int n, m; 
		string d;
		n = toInt(val[0]);
		m = toInt(val[1]);
		d = val[2];
		string aux;
		aux = b;
		for (int i = 1; i < b.size(); i+=2)
		{
			if(d == "R"){
				if((i+m+3)>= (2*n)+1){
					aux[(i+m+3)%n] = b[i];					
				}
				else{
					aux[i+m+3] = b[i];
				}
			}
			else{
				if((i-m-3)<= 0){
					aux[(i-m-3)+(2*n)] = b[i];					
				}
				else{
					aux[i-m-3] = b[i];
				}
			}
		}
		cout<<a<<endl;
		cout<<aux<<endl;
		cout<<c<<endl;
	}
	
	return 0;
}