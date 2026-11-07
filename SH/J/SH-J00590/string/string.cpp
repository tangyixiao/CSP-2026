#include<bits/stdc++.h>
using namespace std;
long long n,x,sum,ans;
char c;
string s,s1;
int main() {
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> x >> c;
		if(x > 1000) {
			cout << x * n;
			break;
		}
		sum += x;
		while(x) {
			s.push_back(c);
			x--;
		}
	} 
	for(int i = 0; i * 2 < sum; i++) {
		if(s[i] != s[sum-1-i]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}

