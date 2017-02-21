// 미해결 문제 

#include <cstdio>
#include <string>
#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	string s1, s2;
	vector<string> s1_vector;
	vector<string> s2_vector;
	vector<int> s1_data;
	vector<int> s2_data;

	cin >> s1 >> s2;
	
	s1_vector.push_back(s1);
	s2_vector.push_back(s2);

	// 이부분 수정하기 
	/*for (int i = 1; i <= s1.size(); ++i) {
		if (s1[i - 1] == '5')  s1[i - 1] = '6';		
		else if (s1[i - 1] == '6')  s1[i - 1] = '5';
		s1_vector.push_back(s1);
	}

	for (int i = 1; i <= s2.size(); ++i) {
		if (s2[i - 1] == '5')  s2[i - 1] = '6';
		else if (s2[i - 1] == '6')  s2[i - 1] = '5';
		s2_vector.push_back(s2);
	}*/

	vector<string>::iterator it1 = unique(s1_vector.begin(), s1_vector.end());
	vector<string>::iterator it2 = unique(s2_vector.begin(), s2_vector.end());

	s1_vector.resize(distance(s1_vector.begin(), it1));
	s2_vector.resize(distance(s2_vector.begin(), it2));


	transform(s1_vector.begin(), s1_vector.end(), back_inserter(s1_data), [](const string& str) { return stoi(str); });
	transform(s2_vector.begin(), s2_vector.end(), back_inserter(s2_data), [](const string& str) { return stoi(str); });

	vector<int>::iterator min_s1 = min_element(s1_data.begin(), s1_data.end());
	vector<int>::iterator min_s2 = min_element(s2_data.begin(), s2_data.end());

	vector<int>::iterator max_s1 = max_element(s1_data.begin(), s1_data.end());
	vector<int>::iterator max_s2 = max_element(s2_data.begin(), s2_data.end());

	printf("%d %d", (*min_s1) + (*min_s2), (*max_s1) + (*max_s2));

	return 0;
}