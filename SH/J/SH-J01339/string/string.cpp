#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int n;
long long a, b, cnt;

string c;

string s;

int main() {
	freopen("string.in", "r", stdin);	
	freopen("string.out", "w", stdout);
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
    	scanf("%lld ", &a);
    	cin >> c;
		b += a;
		while(a--) {
			s += c;
		}
	}
	for(int i = 1; i < b; i++) {
		if(s[b - i] != s[i]) {
			cnt++;
		}
	}
	printf("%lld", cnt);
	return 0;
}
