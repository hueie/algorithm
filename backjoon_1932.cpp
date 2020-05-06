// BACKJOON,  1932, The Triangle
#include <iostream>
#include <cassert>

using namespace std;

int max(int** arr, int depth){
    int _max=-1;
    for(int i=0; i<=depth; i++){
        if(_max <= arr[depth][i]){
            _max = arr[depth][i];
        }
    }
    return _max;
}

int dp(int** arr, int depth){
    //initialize
    if(depth == 0){
        return max(arr, depth);
    }
    return dp(arr, depth-1) + max(arr, depth);
}
int optimized_max(int* memo, int n){
    int _max = 0;
    for(int i=0; i<n; i++){
        if(_max < memo[i]){
            _max = memo[i];
        }
    }
    return _max;
}

int optimized_dp(int** arr, int i, int j, int n, int* memo){
    if(i == n){ //end of the process
        return optimized_max(memo, n);
    }
    int* _memo = new int[n];
    for(int tmp_j=0; tmp_j<=j; tmp_j++){
        if(tmp_j == 0){
            _memo[tmp_j] = memo[tmp_j] + arr[i][tmp_j];
            continue;
        }
        if(memo[tmp_j-1] >= memo[tmp_j]){
            _memo[tmp_j] = memo[tmp_j-1] + arr[i][tmp_j];
        } else{
            _memo[tmp_j] = memo[tmp_j] +arr[i][tmp_j];
        }
    }
    return optimized_dp(arr, i+1, j+1, n, _memo);
}

int main(){
    int n; //the length of the triangle
    cin >> n;
    // assertion for input
    assert(1 <= n && n <= 500);

    int** arr = new int*[n];
    for(int i=0; i<n; i++){
        arr[i] = new int[i+1];//공간복잡도 향상
//        arr[i] = new int[n];
    }

    int* memo = new int[n];
    for(int i=0; i<n; i++){
        memo[i] = 0;
    }

    // create triangle arrays
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cin >> arr[i][j];
        }
    }

//    for(int i=0; i<n; i++){
//        for(int j=0; j<=i; j++){
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }

    int result = optimized_dp(arr, 0, 0, n, memo);
//    int result = dp(arr, n-1);
    cout << result << endl;

    return 0;
}