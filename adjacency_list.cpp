// Problem: build's bidirectional graph through

#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

vector<int>* adj_list;

int add_edge(int v, int u){
    adj_list[v].push_back(u);
    adj_list[u].push_back(v);
};

int main(){
    int V = 5;
    adj_list = new vector<int>[5];
    add_edge(0, 1);

    return 0;
}





//
//typedef struct edge{
//    int nextV;
//    edge * ptrNextV;
//};
//
//int main(){
//    int T; //test case
//    cin >> T;
//    assert( 1 <= T && T <= 200);
//
//    for(int i=0; i < T; i++){
//        unsigned int V; // the # of vertice;
//        unsigned int E; //the # of edges
//        cin >> V >> E;
//        assert( 1 <= V && V <= 1e3);
//        assert( 1 <= E && E <= V*(V-1));
//
//        edge* v_list = new edge[V];
//        for(int numOfEdges = 0; numOfEdges < E; numOfEdges++){
//            int tmpV, tmpNextV;
//            cin >> tmpV >> tmpNextV;
//            edge tmpEdge = v_list[tmpV];
//            while(true){
//                if(tmpEdge.ptrNextV == null){
//                    tmpEdge.nextV = tmpNextV;
//                    tmpEdge.ptrNextV = new edge;
//                    break;
//                } else {
//                    tmpEdge = *tmpEdge.ptrNextV;
//                }
//            };
//        }
//
//
//    }
//
//
//    return 0;
//}