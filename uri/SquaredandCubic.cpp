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
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			cout<<power(i,j);
			if(j<3)
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}