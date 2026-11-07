#include<bits/stdc++.h>
using namespace std;
long long n,m,vis[200005],maxn = -2e18;
long long a[200005];
stack<long long> tmp;
void dfs (int step){
	if (step > m){
		long long ans = vis[1];
		for (int i = 2;i<=m;i++){
			ans &= vis[i];
		} 
		maxn = max(maxn,ans);
		return;
	}
	for (int i = 1;i<=n;i++){
		if (a[i] == -1) continue;
		else{
			vis[step] = a[i];
			tmp.push(a[i]);
			a[i] = -1;
			dfs(step+1); 
			a[i] = tmp.top();
			tmp.pop();
		}
	}
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i = 1;i<=n;i++) cin>>a[i];
	dfs(1);
	cout<<maxn;
	return 0;
}



