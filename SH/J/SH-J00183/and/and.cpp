#include<bits/stdc++.h>
using namespace std;
int n,m;
long long ans = 0;
bool vis[200005];
long long a[200005];
void dfs(long long an,int cnt){
	if(cnt == m){
		ans = max(an,ans);
		return ;
	}
	for(int i = 1;i <= n;i ++)
	{
		if(!vis[i]){
			vis[i] = 1;
			dfs(an & a[i],cnt + 1);
			vis[i] = 0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i ++)
		cin >> a[i];
	for(int i = 1;i <= n;i ++){
		vis[i] = 1;
		dfs(a[i],1);
		vis[i] = 0;
	}
	cout << ans;
	return 0;
} 
