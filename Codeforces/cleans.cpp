#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, aux = 0;
	map<string,int>::iterator it;
	map<string, int> goods;
	
	cin>>n;
	string word[n];
	for(int i=0; i<n; i++){
		cin>>word[i];
	}
	for(int i=0; i<n; i++){
		goods[word[i]] += 1;
	}
	for(it = goods.begin(); it != goods.end(); it++){
		if(it -> second > aux){
			aux = it -> second;
		}
	}

	cout<<aux<<endl;

	return 0;
}