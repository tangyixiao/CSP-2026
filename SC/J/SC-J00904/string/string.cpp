#include <bits/stdc++.h>
using namespace std;
struct node{
	int a;
	char c;
}s[200005];

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> s[i].a >> s[i].c;
	long long left = 1, l = s[1].a, right = n, r = s[n].a, ans = 0;
	while (left <= right){
		if (s[left].c != s[right].c) ans += min(l, r);
		if (l < r) r = r - l, l = 0, left++, l = s[left].a;
		else if (l > r) l = l - r, r = 0, right--, r = s[right].a;
		else l = 0, r = 0, left++, right--, l = s[left].a, r = s[right].a;
	}
	cout << ans;
	return 0;
}