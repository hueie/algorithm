//Backjoon, 11054, 가장 긴 바이토닉 부분 수열
#include <iostream>
#include <vector>
#include <stack>
#include <list>
#include <algorithm>

using namespace std;

int V;
vector<int> adj_list;
int MAX = 0;
bool* resultVisited;

void add_edge(int u, int v){
    adj_list.push_back(v);
//    adj_list[v].push_back(u);
}

void DFSUtil(int s, bool* visited){
    bool* _visited = new bool[V];
    int _max = 0;
    for(int i=0; i<V; i++){
        _visited[i] = visited[i];
        if(visited[i]){
            _max++;
        }
    }
    if(_max > MAX){
        MAX = _max;
        resultVisited = _visited;
    }

    if(_visited[s] == false){
        _visited[s] = true;
    }

    for(int i=s; i<V; ++i){
        if(_visited[i] == false && adj_list[i] > adj_list[s])
            DFSUtil(i, _visited);//stack.push(*itr);
    }
}

void itrDFSUtil(int s, bool* visited) {
    stack<int> stack;
    stack.push(s);

    while(!stack.empty()){
        s = stack.top();
        stack.pop();
        if(visited[s] == false){
            visited[s] = true;
        }
        for(int i=s; i<V; i++){
            if(visited[i] == false && adj_list[i] > adj_list[s])
                stack.push(i);
        }
    }
}
int DFS(int v){
    bool* visited = new bool[V];
    for(int i=0; i<V; i++){
        visited[i] = false;
    }
    DFSUtil(v, visited);
    return MAX;
//    itrDFSUtil(v, visited);
}

int _main(){
    cin >> V;
    int node;
//    adj_list = new vector<int>[V];
    for(int i=0; i<V; i++){
        cin >> node;
        add_edge(i, node);
    }
    int lastIdx;
    int result = DFS(0);
    int length = MAX + 1;
    int rslt = 0;
    for(int i=0; i<V; i++){
        if(length >= 0 && resultVisited[i]){
            lastIdx = i;
            rslt++;
            length--;
        }
    }

    reverse(adj_list.begin(), adj_list.end());

    MAX = 0;
    result = DFS(0);
    for(int i=V-lastIdx-1; i>=0; i--){
        if(resultVisited[i]){
            rslt++;
        }
    }
    cout << rslt << endl;

    return 0;
}