#include <bits/stdc++.h>

using namespace std;

int ans = -2147483647;
const int N = 2e5+5;
int a[N];
int b[4];
int n,m;
bool B = true;

void dfs(int now,int i,int k) {
	if(k == m) {
		ans = max(ans,now);
		return ; 
	}
	if(i == n+1) {
		return ;
	}
	dfs(now&a[i],i+1,k+1);
	dfs(now,i+1,k);
}

bool cmp(int a,int b) {
	return a > b;
}

int main() {
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	vector<int> v(n+1,0);
	for(int i = 1;i <= n;i++) {
		cin >> a[i];
		v[i] = a[i];
		if(a[i] == 0) b[0]++;
		else if(a[i] == 1) b[1]++;
		else if(a[i] == 2) b[2]++;
		else if(a[i] == 3) b[3]++;
	}
	if(m == 1) {
		for(int i = 1;i <= n;i++) {
			ans = max(ans,a[i]);
		}
		cout << ans;
		return 0;
	} else if(m == 2) {
		for(int i = 1;i <= n;i++) {
			for(int j = i+1;j <= n;j++) {
				int x = a[i]&a[j];
				ans = max(ans,x);
			}
		}
		cout << ans;
		return 0;
	} else if(m == n) {
		int x = a[1];
		for(int i = 2;i <= n;i++) {
			x &= a[1];
		}
		cout << x;
		return 0;
	} else if(b[0] + b[1] + b[2] + b[3] == n) {
		if(b[3] >= m) cout << 3;
		else if(b[3] + b[2] >= m) cout << 2;
		else if(b[3] + b[1] >= m) cout << 1;
		else cout << 0;
		return 0;
	}
	if(n > 2000) {
		sort(v.begin(),v.end(),cmp);
		ans = v[0];
		for(int i = 1;i < m;i++) {
			ans &= v[i];
		}
		cout << ans;
		return 0;
	}
	dfs(262143,1,0);
	cout << ans;
	return 0;
}

