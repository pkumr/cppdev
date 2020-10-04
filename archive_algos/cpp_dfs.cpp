/**
  cpp_dfs.cpp
  compcode
  Created by Parveen Kumar on 7/16/20.
*/

#include <stdio.h>
#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

#define VISITED 1
#define UNVISITED -1

vector<int> dfs_num;

void dfs(int u,vector<vector<int>> &adj ){
    cout << u << " ";
    dfs_num[u] = VISITED;
    for(int i = 0; i < (int)adj[u].size(); i++){
        int v = adj[u][i];
        if(dfs_num[v] == UNVISITED){
            dfs(v, adj);
        }
    }
}

void printAdjList(vector<vector<int>> &adj, int V){
    for(int i = 0; i < V; i++){
        cout <<"Vertex " << i << "-->";
        for(int neighbor : adj[i]){
            cout << neighbor << ",";
        }
        cout<<"\n";
    }
    cout<<"\n";
}
void addEdge(vector<vector<int>> &adj, int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main(){
    int V = 9;
    vector<vector<int>> adj(V);
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    addEdge(adj, 7, 6);
    addEdge(adj, 6, 8);
    //addEdge(adj, 5, 5);
    printAdjList(adj, V);
    dfs_num.assign(V, UNVISITED);
    //dfs(0, adj);
    
    int num_components = 0;
    for(int i = 0; i < V; i++){
        if(dfs_num[i] == UNVISITED){
            cout<< "Component " << ++num_components << ": ";
            dfs(i, adj);
            cout<< "\n";
        }
    }
}
