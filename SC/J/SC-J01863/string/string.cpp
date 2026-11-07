#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 10, INF = 0x3f3f3f3f;

struct String{
	int len, L, R;
	char ch;
} str[maxn];

int n, ans(0), Len(0);
char s[maxn];

signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin >> n;
	for (int i = 1; i <= n; i ++){
		cin >> str[i].len >> str[i].ch;
		for (int j = Len + 1; j <= Len + str[i].len; j ++) s[j] = str[i].ch;
		Len += str[i].len;
	}
	
	int l = 1, r = Len;
	while (l <= r){
		if (s[l] != s[r]) ans += 1;
		l += 1, r -= 1;
	}
	
	cout << ans;
	return 0;
}