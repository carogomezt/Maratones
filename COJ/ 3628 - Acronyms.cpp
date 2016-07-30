#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string a, b;
	while(getline(cin, a)){
		string c, d;
		getline(cin, b);
		c.push_back(a[0]);
		for (int i = 0; i < a.size(); i++)
		{			
			if(a[i-1] == ' ')
				c.push_back(a[i]);
		}
		d.push_back(b[0]);
		for (int i = 0; i < b.size(); i++)
		{			
			if(b[i-1] == ' ')
				d.push_back(b[i]);
		}
		bool flag;
		flag = false;
		if(c.size() != d.size())
			cout<<"no"<<endl;
		else{

			for (int i = 0; i < c.size() ; i++)
			{
				if(c[i] == d[i])
					flag = true;
				else{
					flag = false;
					break;
				}					
			}
			if(flag == true)
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl;
		}
		
	}
	return 0;
}