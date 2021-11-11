#include <bits/stdc++.h>

using namespace std;

vector<int> parent, ranks;
vector<pair<int,int>> mst;


struct node{
    int u, v, wt;
    node(int a,int b,int c){
        u = a, v = b, wt = c;
    }
};

void makeSet(int n)
{
    for (int i = 0; i < n; i++){
        parent.push_back(i);
        ranks.push_back(0);
    }
}


int findParent(int node){
    if(node==parent[node])
        return node;
    return parent[node] = findParent(parent[node]);
}

void unionSet(int u,int v){
    u = findParent(u);
    v = findParent(v);
    if (ranks[u] == ranks[v])
    {
        parent[v] = u;
        ranks[u]++;
    }
    else if(ranks[v]>ranks[u]){
        parent[u] = v;
    }else
        parent[v] = u;
}

bool comp(node a,node b){
    return a.wt<b.wt;
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<node> edges;
    makeSet(n);
    while(e--){
        int a, b,c;
        cin >> a >> b>>c;
        edges.push_back(node(a, b,c));
    }

    sort(edges.begin(), edges.end(), comp);

    int cost = 0;
    for (auto i:edges){
        if(findParent(i.u)!=findParent(i.v)){
            cost += i.wt;
            mst.push_back({i.u, i.v});
            unionSet(i.u, i.v);
        }
    }

    cout << "Minimum Cost:" << cost;
    cout << "\nEdges:";
    for (auto i : mst){
        cout << i.first << " - " << i.second << endl;
    }
    return 0;
}
