#include <iostream>
#include <vector>
using namespace std;

void dfs(int sp, vector<vector<int>>& adj, vector<bool>& visit) {
    visit[sp] = 1;
    cout << sp << " ";  // print the node when visited
    for (int i = 0; i < adj[sp].size(); i++) {
        if (!visit[adj[sp][i]]) {
            dfs(adj[sp][i], adj, visit);
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

    cout << "DFS Traversal: ";
    dfs(0, addList, visit);

    return 0;
}
