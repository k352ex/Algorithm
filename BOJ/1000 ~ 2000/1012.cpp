#include <iostream>
#include <cstring>
using namespace std;

int width, height;
int map[51][51];
bool visited[51][51];

int dfs(int y,int x) {
    int dy[4] = {  0, 0, -1, 1 };
    int dx[4] = { -1, 1,  0, 0 };
    int nx, ny;
    
    visited[y][x] = true;
    
    for(int i=0; i<4; ++i) {
        ny = y + dy[i];
        nx = x + dx[i];
        
        if(ny >= 0 && ny < height && nx >= 0 && nx < width ) {
            if(map[ny][nx] == 1 && !visited[ny][nx]) {
                visited[ny][nx] = true;
                dfs(ny, nx);
            }
        } 
    }
    
    return 1;
}

int dfsAll() {
    int components = 0;
    
    for(int i=0; i< height; ++i) {
        for(int j = 0; j < width; ++j) {
            if(map[i][j] == 1 && !visited[i][j]) {
                components += dfs(i,j);        
            }
        }
    }
    return components;
}

int main() {
    int testcase;
    int k;
    
    cin >> testcase;
  
    
    
    while(testcase--) {
        cin >> width >> height >> k;
        
        memset(map, 0, sizeof(map));
        memset(visited, false, sizeof(visited));
        
        for(int i=0; i< k; ++i) {
            int x, y;
            cin >> x >> y;
            map[y][x] = 1; 
        }
        cout << dfsAll() << '\n';
    }
    
    
	return 0;
}