//Backjoon, 11054, 가장 긴 바이토닉 부분 수열
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int V;
vector<vector<int>> adj_list;

int add_edge(int u, int v){
    adj_list[u].push_back(v);
//    adj_list[v].push_back(u);
}

int DFSUtil(int s, bool* visited){
    if(visited[s] == false){
        //count << s << " ";
        visited[s] = true;
    }
    for(auto itr = adj_list[s].begin(); itr != adj_list[s].end(); ++itr){
        if(!visited[*itr])
            DFSUtil(*itr, visited);//stack.push(*itr);
    }
}

int itrDFSUtil(int s, bool* visited) {
    stack<int> stack;
    stack.push(s);

    while(!stack.empty()){
        s = stack.top();
        stack.pop();
        if(visited[s] == false){
            visited[s] = true;
        }
        for(auto itr = adj_list[s].begin(); itr != adj_list[s].end(); ++itr){
            if(!visited[*itr])
                stack.push(*itr);
        }
    }
}
int DFS(int v){
    bool* visited = new bool[V];
    for(int i=0; i<V; i++){
        visited[i] = false;
    }
    DFSUtil(v, visited);
//    itrDFSUtil(v, visited);
}

int main(){
    
    DFS(0);
    return 0;
}