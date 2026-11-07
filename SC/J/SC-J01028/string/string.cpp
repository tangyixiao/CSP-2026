#include <bits/stdc++.h>
using namespace std;
struct node{
	int a;
	char c;
} s[200005],t[200005], f[200005];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	string S = "";
	long long sum = 0;
	for (int i = 1;i <= n;i++){
		cin >> s[i].a >> s[i].c;
	}
	int l = 1, r = n, cur = 0;
	while (l < r){
		++cur;
		if (s[l].a < s[r].a){
			t[cur].a = s[l].a;
			t[cur].c = s[l].c;
			f[cur].a = s[l].a;
			f[cur].c = s[r].c;
			s[r].a -= s[l].a;
			l++;
		}
		else{
			t[cur].a = s[r].a;
			t[cur].c = s[l].c;
			f[cur].a = s[r].a;
			f[cur].c = s[r].c;
			s[l].a -= s[r].a;
			r--;
		}
	}
	long long ans = 0;
	for (int i = 1;i <= cur;i++){
		if (t[i].c != f[i].c) ans += t[i].a;
	}
	cout << ans;
	return 0;
}