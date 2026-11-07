#include <bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005],vis[200005],maxn;
void dfs(int step,long long cnt)
{
	if(step > m){maxn = max(maxn,cnt);return;}
	for(int i = 1;i <= n;i++){
		if(vis[i] == 0){
			vis[i] = 1;
			dfs(step+1,cnt&a[i]);
			vis[i] = 0;
		} 
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i];
	for(int i = 1;i <= n;i++){
		vis[i] = 1;
		dfs(2,a[i]); 
		vis[i] = 0;
	}
	return cout << maxn,0;
 } 
 
