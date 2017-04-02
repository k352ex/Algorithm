## Algoritm

 알고리즘 개념을 정리하고 구현한 파일을 모아놓는 폴더

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
       
'''

    #include <iostream>
    #include <stack>
    using namespace std;
    int main() {
    
        stack<int> s1; // int형 스택 생성
        stack<char> s2; // char형 스택 생성
        
        // 스택의 데이터 유무 체크 
        if(s1.empty()) 
            cout << "s1 is empty" << '\n';
            
        if(s2.empty())
            cout << "s2 is empty" << '\n';
            
        
        // 스택의 삽입
        s1.push(10); 
        s2.push('A');
    
        if(s1.empty()) 
            cout << "s1 is empty" << '\n';
        else
            cout << "s1에는 데이터가 존재" << '\n';
            
        if(s2.empty())
            cout << "s2 is empty" << '\n';
        else
            cout << "s2에는 데이터가 존재" << '\n';
            
        // 스택의 size 확인
        cout << "s1.size: " << s1.size() << '\n';
        cout << "s2.size: " << s2.size() << '\n';
        
        // 스택의 top 확인
        cout << "s1.top: " << s1.top() << '\n';
        cout << "s2.top: " << s2.top() << '\n';
        
        // 스택의 pop 연산
        s1.pop();
        s2.pop();
        
            if(s1.empty()) 
            cout << "s1 is empty" << '\n';
        else
            cout << "s1에는 데이터가 존재" << '\n';
            
        if(s2.empty())
            cout << "s2 is empty" << '\n';
        else
            cout << "s2에는 데이터가 존재" << '\n';
    
        return 0;
    } 

'''

- Queue, Deque, Priority_queue
- Vector
- List
- Map, Multi map
- Set, Multi set


