#include<bits/stdc++.h>
using namespace std;

int n,m,a[200005],ans=-1,maxn;
bool vis[200005],ca=1,cb=1;
bool cmp(int x,int y)
{
	return x > y;
}
bool isca(int x)
{
	if(x == 0) return 0;
	while(x){
		if(x%2 == 0){
			return 0;	
		}
		x /= 2;
	}
	return 1;
}
void dfs(int k,int num){
	if(k == m+1){
		ans = max(ans,num);
		return;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i] = 1;
			dfs(k+1,num==-1?a[i]:a[i]&num);
			vis[i] = 0;
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		maxn = max(maxn,a[i]);
		if(isca(a[i]) == 0) ca = 0;
		if(a[i] != i-1) cb = 0;
	}
	if(m == 1){
		sort(a+1,a+n+1,cmp);
		ans = a[1];
	}
	else if(m == 2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans = max(ans,a[i]&a[j]);
			}
		}
	}
	else if(m == n){
		ans = a[1];
		for(int i=2;i<=n;i++) ans = ans & a[i];
	}
	else if(ca){
		sort(a+1,a+n+1,cmp);
		ans = a[n-m+1];
	}
	else if(cb){
		sort(a+1,a+n+1,cmp);
		ans = a[1];
		for(int i=2;i<=m;i++) ans = ans & a[i];
	}
	else{
		dfs(1,-1);
	}
	cout << ans;
	return 0;
}
