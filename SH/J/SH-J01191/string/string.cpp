#include <bits/stdc++.h>
using namespace std;
int n, a[200005];
char c[200005];
int cnt[200005];
long long ans; 
/*
若回文串对应位置的字符不相等，仅需一步就可以更改至相等
对应的，易证得我们最多只需要 n i = 1∑ai / 2步就可以完全更改
根据上述，我们只需要在上半的字符判断即可 
*/
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i] >> c[i];
	for (int i = 1; i <= n; i++) cnt[i] = a[i];
	int p = n;
	for (int i = 1; i <= p; i++){
		for (; p >= i; p--){
			int temp = min(cnt[i], cnt[p]);
			if (c[i] != c[p]){
				ans += temp;
			}
			cnt[i] -= temp;
			cnt[p] -= temp;
			if (cnt[i] == 0) break;
		}
	}
	cout << ans;
	return 0;
}
