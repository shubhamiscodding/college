#include <iostream>
#include <vector>
#include<queue>
using namespace std;

void bfs(int sp, vector<vector<int>>& adj, vector<bool>& visit) {
    queue<int> q;
    visit[sp] = 1;
    q.push(sp);
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        cout << temp << " ";
        for(int i=0;i<adj[temp].size();i++){
            if(!visit[adj[temp][i]]){
                q.push(adj[temp][i]);
                visit[adj[temp][i]] =1;
            }
        }
    }
}

int main() {
    int edge, vertices;
    cout << "Enter number of edges and vertices: ";
    cin >> edge >> vertices;

    vector<vector<int>> addList(vertices);

    int u, v;
    cout << "Enter edges (u v):" << endl;
    for (int i = 0; i < edge; i++) {
        cin >> u >> v;
        addList[u].push_back(v);
        addList[v].push_back(u); // undirected graph
    }

    vector<bool> visit(vertices, false);

    cout << "bfs Traversal: ";
    bfs(0, addList, visit);

    return 0;
}
