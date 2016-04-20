#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long int n) {
  bool flag = true;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      flag = false;
      break;
    }
  }
  return flag;
}


int main(int argc, char const *argv[])
{
	int n;
	long long int a;
	cin>>n;
	while(n--){
		cin>>a;
		if(isPrime(a))
			cout<<"Prime"<<endl;
		else{
			cout<<"Not Prime"<<endl;
		}

	}
	return 0;
}