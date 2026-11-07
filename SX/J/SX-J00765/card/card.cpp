#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=500005;
int a[maxn],n,m,lst[maxn],pos[maxn],ipos[maxn],ans[maxn],num[maxn];
bool ck[maxn];
inline void dfs(int x,int pre,int tov){
	cerr<<x<<'\n';
	if(x==tov)return;
	ans[a[x]]+=x-pre;
	if(ck[x]){
		dfs(x+1,x,pos[x]);
		dfs(pos[x],pre,tov);
		ans[a[x]]--;
	}
	else {dfs(x+1,pre,tov);}
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i;i--){
		int x=a[i];
		if(lst[x]){
			ck[i]=1;
			pos[i]=lst[x];
			ipos[pos[i]]=i;
			lst[x]=i;
		}
		else{
			ck[i]=0;
			lst[x]=i;
		}
	}
	ck[0]=1;
	pos[0]=n+1;
	dfs(0,0,n+1);
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
