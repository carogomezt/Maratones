#include <bits/stdc++.h>
using namespace std;

void tokens(string s) {
  stringstream ss(s);
  string token;
  cout << "Tokens:" << endl;
  
  // ss Le pasa cada token a token uno por uno 
  while (ss >> token) {
  	cout << token << endl;
  }
}

int main() {
	tokens("Esto es una prueba de tokens");
	return 0;
}