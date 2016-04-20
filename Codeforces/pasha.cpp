#include <bits/stdc++.h>

using namespace std;

#define max 1000

bool grid [max][max];
int m, n, k;
bool square(int x, int y){
	//Superior izq
	grid[y][x]=true;
	
	int posx, posy;
	//Sup izq cuad
	int check=0;
	for(int i=0; i<3; i++){
		int mx[3]={-1,0,-1};
		int my[3]={-1,-1,0};
		posx=x+mx[i];
		posy=y+my[i];
		//cout<<"Posx: "<<posx<<endl;
		//cout<<"Posy: "<<posy<<endl;
		if(posx<0||posx>=n||posy<0||posy>=m){
			break;
		}
		if(!grid[posy][posx]){
			break;
		}
		else{
			//cout<<"Posx: "<<endl;
			//cout<<"Posy: "<<endl;
			//cout<<"Value: "<<grid[posy][posx]<<endl;
			//cout<<"Check: "<<check<<endl;
			check++;
		}
	}
	if(check==3){return true;}


	check=0;
	for(int i=0; i<3; i++){
		int mx[3]={-1,-1,0};
		int my[3]={0,1,1};
		int posx=x+mx[i];
		int posy=y+my[i];
		if(posx<0||posx>=n||posy<0||posy>=m){
			break;
		}
		if(!grid[posy][posx]){
			break;
		}
		else{
			check++;
		}
	}
	if(check==3){return true;}

	
	check=0;
	for(int i=0; i<3; i++){
		int mx[3]={0,1,1};
		int my[3]={-1,-1,0};
		posx=x+mx[i];
		posy=y+my[i];
		if(posx<0||posx>=n||posy<0||posy>=m){
			break;
		}
		if(!grid[posy][posx]){
			break;
		}
		else{
			check++;
		}
	}
	if(check==3){return true;}

	check=0;
	for(int i=0; i<3; i++){
		int mx[3]={1,0,1};
		int my[3]={0,1,1};
		posx=x+mx[i];
		posy=y+my[i];
		if(posx<0||posx>=n||posy<0||posy>=m){
			break;
		}
		if(!grid[posy][posx]){
			break;
		}
		else{

			check++;
		}
	}
	if(check==3) {return true;}
	return false;
}

int main(){
	memset(grid,false,sizeof(grid));
	cin>>m>>n>>k;
	int jx, jy;
	for(int i=0; i<k; i++){
		cin>>jy>>jx;
		if(square(jx-1,jy-1)){
			cout<<i+1<<endl;
			return 0;
		}
	}
	cout<<"0"<<endl;
}