#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],mx;
long long ans;
bool com(int x,int y){
	return x>y;
}
void dfs(int num,int tot,long long q){
	if(ans==a[1])return;
	if(tot==m+1){
		ans=max(q,ans);
		return;
	}
	for(int i=num;i<=n;i++){
		if(tot==1){
			q=a[i];
			dfs(i+1,tot+1,q);
		}
		else{
			dfs(i+1,tot+1,q&a[i]);
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	if(m==1){
		cout<<mx;
		return 0;
	}
	sort(a+1,a+1+n,com);
	dfs(1,1,a[1]);
	cout<<ans;
	return 0;
}
