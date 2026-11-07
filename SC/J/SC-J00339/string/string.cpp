#include<bits/stdc++.h>
using namespace std;
string s, s2;
long long a, num, n, x, to1, to2, m;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	cin >> a >> s;
	s2 = s;
	x += a;
	for (int i = 1; i < a; i++) {
		s2 += s;
	}
	for (int i = 1; i < n; i++) {
		cin >> a >> s;
		x += a;
		for (int j = 0; j < a; j++) {
			s2 += s;
		}
	}
	if(x%2==0){
		to1=x/2;
		to2=x/2+1;
	}else{
		to1=x/2-1;
		to2=x/2+1;
	}
	m = x / 2;
	for (int i = 0; i < m; i++) {
		if (s2[to1 - i] != s2[to2 + i]) {
			num++;
		}
	}
	cout<<num;
	return 0;
}