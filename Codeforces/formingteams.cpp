#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
vector<int> ady[MAX];
vector<bool> visitados(MAX);
vector<int> equipos(MAX);

bool dfs(int num,int eq){
    //cout<<"Entre!!"<<num <<" " <<eq<<endl;
    visitados[num] = true;
    equipos[num] = eq;
    for (int i = 0; i < ady[num].size(); i++)
    {
        if(visitados[ady[num][i]]){
            if(equipos[ady[num][i]] == eq)
                return false;
        }
        else{
            if(dfs(ady[num][i],eq?0:1))
                continue;
            else{
                return false;
            }
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int n,m,u,v;
   
    while(cin>>n>>m){
        for (int i = 0; i < MAX; i++)
        {
            ady[i].clear();
        }
        visitados.assign(MAX,false);
        equipos.assign(MAX,0);
        while(m--){
            cin>>u>>v;
            u = u-1;
            v = v-1;
            ady[u].push_back(v);
            ady[v].push_back(u);
        }
        int aux=0;
        for (int i = 0; i < n ; i++)
        {
            if(visitados[i])
                continue;
            else{
                if(!dfs(i,1))
                    aux++;

            }
        }
        if((n-aux)%2 != 0)
            aux++;

        cout<<aux<<endl;

    }
    return 0;
}