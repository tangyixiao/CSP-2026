#include<bits/stdc++.h>
#define LL long long
using namespace std;
const LL N = 2e5 + 10;
const LL INF = ((1ll << 31) - 1ll);

LL n, m, a[N], ans = 0;
LL c[35], cc[5];
bool vis[N];

void dfs(LL pos, LL cnt, LL val){
	if(cnt == m){
		ans = max(ans, val);
		return;
	}
	if(pos >= n)	return;
	for(LL i = pos + 1; i <= n; i++){
		if(vis[i])	continue;
		vis[i] = true;
		dfs(i, cnt + 1, val & a[i]);
		vis[i] = false;
	}
}

bool cmp(LL a, LL b){
	return a > b;
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for(LL i = 1; i <= n; i++)	cin >> a[i];
	if(n <= 20){
		memset(vis, false, sizeof vis);
		dfs(0, 0, INF);
		cout << ans << '\n';
		return 0;
	}
	else if(n <= 2000){
		if(m == 1){
			ans = 0;
			for(LL i = 1; i <= n; i++)
				ans = max(ans, a[i]);
			cout << ans << '\n';
			return 0;
		}
		else if(m == n){
			ans = INF;
			for(LL i = 1; i <= n; i++)
				ans = ans & a[i];
			cout << ans << '\n';
			return 0;
		}
		else if(m == 2){
			ans = 0;
			for(LL i = 1; i <= n; i++){
				for(LL j = 1; j <= n; j++){
					if(i == j)	continue;
					ans = max(ans, a[i] & a[j]);
				}
			}
			cout << ans << '\n';
			return 0;
		}
	}
	else{
		memset(c, 0, sizeof c);
		for(LL i = 30; i >= 0; i--){
			for(LL j = 1; j <= n; j++)
				c[i] += (((a[j] >> i) & 1) ^ 1);
		}
		if(m == n - 1){
			ans = 0;
			for(LL i = 1; i <= n; i++){
				LL res = 0;
				for(LL j = 0; j <= 30; j++){
					if(c[j] - (((a[i] >> j) & 1) ^ 1))	continue;
					res += (1 << j);
				}
				ans = max(ans, res);
			}
			cout << ans << '\n';
			return 0;
		}
		else{
			bool check1 = true;
			bool check2 = true;
			for(LL i = 0; i <= 30; i++){
				if(c[i]){
					check1 = false;
					break;
				}
			}
			for(LL i = 1; i <= n; i++){
				if(a[i] != i - 1){
					check2 = false;
					break;
				}
			}
			if(check1){
				ans = INF;
				sort(a + 1, a + n + 1, cmp);
				for(LL i = 1; i <= m; i++)
					ans = ans & a[i];
				cout << ans << '\n';
				return 0;
			}
			else if(check2){
				ans = 0;
				while(n){
					n >>= 1;
					if(m <= n)
						ans += n;
				}
				cout << ans << '\n';
				return 0;
			}
			else{
				for(LL i = 1; i <= n; i++)
					cc[a[i]]++;
				LL sum = 0;
				sum += cc[3];
				if(sum >= m)	ans = 3;
				else{
					sum += cc[2];
					if(sum >= m)	ans = 2;
					else{
						sum -= cc[2];
						sum += cc[1];
						if(sum >= m)	ans = 1;
						else
							ans = 0;
					}
				}
				cout << ans << '\n';
				return 0;
			}
		}
	}
	return 0;
}
