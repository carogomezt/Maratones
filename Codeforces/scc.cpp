#include <bits/stdc++.h>
using namespace std;
#define MAXN 50006
vector<int> g[MAXN];
int d[MAXN], low[MAXN], scc[MAXN];
bool stacked[MAXN];
stack<int> s;
int ticks=0, current_scc=0;
void tarjan(int u){
	d[u] = low[u] = ticks++;
	s.push(u);	
	stacked[u] = true;
	const vector<int> &out = g[u];
	for (int k=0, m=out.size(); k<m; ++k){
		const int &v = out[k];
		if (d[v] == -1){
			tarjan(v);
			low[u] = min(low[u], low[v]);
		}else if (stacked[v]){
			low[u] = min(low[u], low[v]);
		}
	}
	if (d[u] == low[u]){
		int v;
		do{
			v = s.top();
			s.pop();
			stacked[v] = false;
			scc[v] = current_scc;

		}while (u != v);
		current_scc++;
		cout<<v<<"  cur " << current_scc<<endl;
	}
}
int main(int argc, char const *argv[])
{
	int t,n,u,v;
	cin>>t;
	while(t--){
		cin>>n;
		for (int i = 1; i <= n; i++){
			cin>>u>>v;
			g[u].push_back(v);
		}
		memset( d, -1 , sizeof( d ) );
		memset( stacked , 0 , sizeof( stacked ) );
		for (int i = 1; i < n; i++)
		{
			if(!stacked[i])
				tarjan(i);
		}



		
	}
	return 0;
}
