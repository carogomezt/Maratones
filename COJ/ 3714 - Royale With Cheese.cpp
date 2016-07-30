#include <bits/stdc++.h>
using namespace std;



string solve(string &a) {
  replace(a.begin(), a.end(), '2', '-');
  replace(a.begin(), a.end(), '5', '2');
  replace(a.begin(), a.end(), '6', '+');
  replace(a.begin(), a.end(), '9', '6');
  replace(a.begin(), a.end(), '-', '5');
  replace(a.begin(), a.end(), '+', '9');
  return a;
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a;
	while(cin>>a){
		map<char, int> id;
    	set<char> seen;
		string carac;
		int val=1;
		for (int i = 0; i < a.size(); i++) {
	    	if (!seen.count(a[i])) {
		        seen.insert(a[i]);
		        id[a[i]] = val;
		        val++;
		    }
	      	carac += to_string(id[a[i]]);
	    }
		cout<<solve(carac)<<endl;
	}
	return 0;
}