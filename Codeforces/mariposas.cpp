#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int n, x, y;
	cin>>n;
	int aux[n][n];
	set<int> resp;
	for (int i = 0; i < n; i++){
    	for (int j = 0; j < n; j++)
      		cin >> aux[i][j];
	}
	for (int i = 0; i < n*2; i++) {
	    cin >> x >> y;
	    resp.insert(aux[x - 1][y - 1]);
  	}

  	cout<<resp.size()<<endl;

	return 0;
}