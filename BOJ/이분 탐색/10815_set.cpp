// set자료구조를 이용한 풀이방법
#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	
	set<int> s;
	for(int i=0; i<n; ++i){
		int x;
		scanf("%d", &x);
		s.insert(x);
	}
	
	int m;
	scanf("%d", &m);
	
	for(int i=0; i<m; i++) {
		int x;
		scanf("%d", &x);
		printf("%d ", s.count(x));
	}
	printf("\n");
	
	return 0;
}