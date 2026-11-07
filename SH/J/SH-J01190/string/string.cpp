#include<bits/stdc++.h>
using namespace std;
std::ifstream fin("string.in");
std::ofstream fout("string.out");
int main(){
	int n;
	fin >> n;
	string s;
	while(n--){
		long long t;
		char c;
		fin >> t >> c;
		for (long long i = 0; i < t; i++){
			s += c;
		}
	}
	long long begin = 0, end = s.size() - 1;
	long long cnt = 0;
	while (begin < end){
		if (s[begin] != s[end]){
			cnt++;
		}
		begin++;
		end--;
	}
	fout << cnt << "\n";
	
	return 0;
}
/*
3
2 a
2 b
1 c

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
