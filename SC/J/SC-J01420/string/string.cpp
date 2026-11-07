#include<bits/stdc++.h>
using namespace std;
long long check(string x){
	long long l = 0, r = x.size() - 1, sum = 0;
	while(l < r){
		if(x[l] != x[r]){
			sum++;
		}
		l++;
		r--;
	}
	return sum;
}
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	string s = "";
	long long num, sum = 0;
	char ch;
	long long n;
	cin >> n;
	for(long long i = 1; i <= n; i++){
		cin >> num >> ch;
		for(long long j = 0; j < num; j++){
			s += ch;
		}
	}
	cout << check(s);
	return 0;
}