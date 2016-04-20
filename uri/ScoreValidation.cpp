#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	double num;
	vector<double> value;
	while(cin>>num){
		if(num>=0.0 and num<= 10.0){
			if(value.size() < 3){
				value.push_back(num);
				if(value.size()== 2){
					double avg;
					avg = (value[0] + value[1])/2.0;
					cout<<"media = "<<fixed<<setprecision(2)<<avg<<endl;
					break;
				}
			}
		}
		else{
			cout<<"nota invalida"<<endl;
		}
	}
	return 0;
}
