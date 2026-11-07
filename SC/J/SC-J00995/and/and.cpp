#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int n, m, cnt;
long long ans, a[N], num[N][32], t[32], vis[N];
int main(){
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++) cin >> a[i];
	for (int i = 1;i <= n;i++){
		int x = a[i];
		int k = 0;
		while(x > 0){
			num[i][++k] = x%2;
			x /= 2;
		}
		cnt = max(k,cnt);
	}
	for (int j = 1;j <= cnt;j++)
		for (int i = 1;i <= n;i++)
			t[j] += num[i][j];
	vector<int>d;
	for (int j = cnt;j >= 1;j--)
		if (t[j] < m) t[j] = 0;
		else d.push_back(j);
	if (d.size() == 0){
		cout << 0;
		return 0;
	}
	for (int i = 1;i <= n;i++)
		if (num[i][d[0]] == 0){
			for (int j = cnt;j >= 1;j--)
				t[j] -= num[i][j];
			vis[i] = 1;
		}
	ans = 1<<(d[0]-1);
	for (int k = 1;k < d.size();k++){
		if (t[d[k]] >= m){
			for (int i = 1;i <= n;i++)
				if (num[i][d[k]] == 0 && !vis[i]){
					for (int j = cnt;j >= 1;j--)
						t[j] -= num[i][j];
					vis[i] = 1;
				}
			ans += (1<<(d[k]-1));
		}
	}
	cout << ans;
	return 0;
}
