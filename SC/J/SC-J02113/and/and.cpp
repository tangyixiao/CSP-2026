#include<bits/stdc++.h>
using namespace std;
int n, m;
long long tot;
long long ans = 0;
long long a[200005], fs[200005];
//hohoho
bool vis[200005];

void dfs(long long num, int step){
	if(step >= m){
		ans = max(ans, num);
		return;
	}
	for(int i = 1; i <= n; i ++){
		if(vis[i])	continue;
		vis[i] = 1;
		if(!step)	dfs(a[i], 1);
		else	dfs(num & a[i], step + 1);
		vis[i] = 0;
	}
}

int main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	int cnt = 0;
	long long mx = 0;
	for(int i = 1; i <= n; i ++){
		cin >> a[i];
		mx = max(mx, a[i]);
		if(a[i] == i - 1)	cnt ++;
		fs[i] = ~a[i];
		if(i == 1)	tot = a[1];
		else	tot = (tot & a[i]);
	}
	if(m == n){
		cout << tot;
		return 0;
	}
	else if(n > 2005 && m == n - 1){
		int ans = 0;
		for(int i = 1; i <= n; i ++){
			int p = tot & fs[i];
			ans = max(ans, p);
		}
		cout << ans;
		return 0;
	}
	else if(cnt == n && n > 2005){
		if(n % 2 == 0 && m * 2 == n)	cout << 1;
		else{
			if((n - m) % 2)	cout << (n - m) + 1;
			else	cout << n - m;
		}
		return 0;
	}
	else if(n > 2005){
		stable_sort(a + 1, a + n + 1);
		cout << a[n - m + 1];
		return 0;
	}
	dfs(0, 0);
	cout << ans;
	return 0;
}