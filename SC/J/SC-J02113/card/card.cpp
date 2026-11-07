#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[500005];
int ans[300005];
int num[300005], tot;
int t[300005];

int main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	int cnt = 0;
	for(int i = 1; i <= n; i ++){
		cin >> a[i];
		if(a[i] >= a[i - 1])	cnt ++;
	}
	if(cnt == n){
		for(int i = 1; i <= n; i ++){
			t[a[i]] ++;
		}
		int sum = 0;
		for(int i = 1; i <= m; i ++){
			/*cout << n - sum << ' ';
			sum += t[i]; */
			cout << t[i] + sum << ' ';
			sum += t[i];
		}
		return 0;
	}
	for(int i = 1; i <= n; i ++){
		tot = 0;
		for(int j = i; j <= n; j ++){
			num[++tot] = a[j];
			for(int p = 1; p < tot; p ++){
				if(num[p] == a[j]){
					tot = p;
				}
			}
		}
		for(int j = 1; j <= tot; j ++){
			ans[num[j]] ++;
		}
	}
	for(int i = 1; i <= m; i ++){
		cout << ans[i] << ' ';
	}
	return 0;
}