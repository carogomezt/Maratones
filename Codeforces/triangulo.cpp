#include <bits/stdc++.h>
using namespace std;

long long power(long long base, long long ex) {
  long long ans = 1;
  for (long long i = 0; i < ex; i++)
    ans *= base;
  return ans;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<power(3, n)<<endl;
	return 0;
}