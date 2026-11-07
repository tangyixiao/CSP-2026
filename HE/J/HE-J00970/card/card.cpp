#include<bits/stdc++.h>
using namespace std;
//pts100
#define int long long
const int N=3e5+10;
int n,m,a[N],ans[N],last[N],jump[N];
bool vis[N];
void gt(int tic){
	memset(vis,false,sizeof vis);
	for(int i=tic;i<=n;i++){
		ans[a[i]]+=!vis[a[i]];
		vis[a[i]]=true;
		while(jump[i]) i=jump[i];
	}
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=n;i>=1;i--) jump[i]=last[a[i]],last[a[i]]=i;
	for(int i=1;i<=n;i++) gt(i);
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}
/*
CSPJ2026score:
100+100+30~50+100=330~350
保守估计记个250吧qwq 
*/
//AC
