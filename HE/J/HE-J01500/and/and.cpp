#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=2e5;
ll n,m;
ll a[MAXN];
ll minn=INT_MIN;
void dfs(ll cnt,ll pos,ll bur){
	if(cnt==m){
		if(pos>minn){
			minn=pos;
		}
		return;
	}
	if(bur==n+1){
		return;
	}
	if(cnt+1<=m){
	if(cnt!=0) dfs(cnt+1,a[bur]&pos,bur+1);
	else dfs(cnt+1,a[bur]&a[bur],bur+1);
	dfs(cnt,pos,bur+1);
}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(0,a[1],1);
	cout<<minn;
	return 0;
}
/*
4 2
3 15 15 12
*/
