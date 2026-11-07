#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 2*1e5+10;
LL a[N];LL max_ = -1;
int m,n;

void dfs(int id,LL sum,int num) {
	if (num == m) {
		if (sum > max_) max_ = sum;
	}
	if (id > n) return ;
	id++;
	if (sum != -1) dfs(id,sum & a[id],num+1);
	else dfs(id,a[id],num+1);
	dfs(id,sum,num);
}
void solve() {
	cin>>n>>m;
	for (int i = 1;i <= n;i++) cin>>a[i];
	dfs(1,a[1],1);
	dfs(1,-1,0);
	cout<<max_;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T = 1;
	while (T--) {
		solve();
	}
	fclose(stdin);fclose(stdout);
	return 0;
}