#include <bits/stdc++.h>
using namespace std;
struct node {
	int a;
	char c;
}s[200010];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++) {
		cin >> s[i].a >> s[i].c;
	}
	int l = 1,r = n;
	long long ans = 0;
	while(l < r) {
		if(s[l].a > s[r].a) {
			if(s[l].c != s[r].c) {
				ans += s[r].a;
			} 
			s[l].a -= s[r].a;
			r--;
		}
		else if(s[l].a < s[r].a) {
			if(s[l].c != s[r].c) {
				ans += s[l].a;
			} 
			s[r].a -= s[l].a;
			l++;
		}
		else {
			if(s[l].c != s[r].c) {
				ans += s[l].a;
			} 
			l++;
			r--;
		}
	}
	cout << ans;
	return 0;
}
