## Algoritm

 알고리즘 개념을 정리하고 구현한 파일을 모아놓는 폴더

- Graph
    - Depth first search (깊이우선탐색)

        ```c
        void DFS(int v) {
            
            visited[v] = true; 
            cout << "vertex: " << v << '\n';
            
            for(auto next : adj[v]) {
                if (!visited[next])
                    DFS(next);
            }
        }
        ```

- Recursion
    - Memoization
    
- Sort
    - BubbleSort
    - SelectionSort
    - MergeSort
    - ShellSort
    - CountingSort
    - QuickSort
- Search
    - BinarySearch
- 소수
    - 에라토스테네스의 체 
- 최단경로
    - 플로이드 와샬 알고리즘
    
    ```c
    // 경유지 -> 시작점 -> 도착점 순
    for(int k=0; k<n; ++k) {
        for(int i=0; i<n; ++i) {
            for(int j=0; j<n; ++j) {
                dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
            }
        }
    }
    ```
    
## BOJ

  알고리즘 문제 프로그래밍 사이트인 백준 온라인 져지의 문제들을 풀어서 모아놓는 폴더
  
  - Language: c++, python3
  - 문제 종류   
    - 구현
    - 수학
    - 다이나믹 프로그래밍
    - 문자열 처리
    - 그리디 알고리즘
    - 정렬
    - 탐색
    - 그래프 : DFS, BFS

## STL
c++에서 제공하는 자료구조와 알고리즘 표준 라이브러리 

- Container
    - Stack
    - Queue, Deque, Priority_queue
    - Vector
    - List
    - Map, Multi map
    - Set, Multi set


