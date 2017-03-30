#include <iostream>
#include <algorithm>
#define INF 123456789   
using namespace std;

int main() {
    
    int n, m, distance[100][100];
    cin >> n >> m;
    
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            distance[i][j] = i == j ? 0 : INF;
        }
    }
    
    for(int i=0; i<m; ++i) {
        int x, y, z;
        cin >> x, y, z;
        distance[x-1][y-1] = min(distance[x-1][y-1], z);
    }
    
    // 경유지 -> 시작점 -> 도착점
    // 시간복잡도는 O(N^3)
    for(int k=0; k<n; ++k) {
        for(int i=0; i<n; ++i) {
            for(int j=0; j<n; ++j) {
                distance[i][j] = min(distance[i][j], distance[i][k] + distance[k][j])
            }
        }
    }
    
    // distance[i][j]는 i에서 j로 가는 최단거리 
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            cout << distance[i][j] << " ";
        }
        cout << '\n';
    }
}