#include<bits/stdc++.h>
using namespace std;

long long n, a, cnt;
char c;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &n);
	for(int i = 1; i <= n; i++) {
		scanf("%lld %c", &a, &c);
		for(int j = 1; j <= a; j++) {
			s += c;
		}
	}
	int l = s.size()-1;
	for(int i = 0; i <= l/2; i++) {
		if(s[i] != s[l-i]) cnt++; 
	}
	printf("%lld", cnt);
	return 0;
}