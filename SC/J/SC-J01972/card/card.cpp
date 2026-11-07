#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e5+5,MAXM=3e5+5;
int n,m;
int a[MAXN],lst[MAXM],nxt[MAXN];
int ans[MAXM],tmp[MAXN];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		nxt[lst[a[i]]]=i;
		lst[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			tmp[j]=a[j];
		}
		for(int j=i;j<=n;j++){
			if(tmp[j]==0) continue ;
			for(int k=j;k<nxt[j];k++) tmp[k]=0;
		}
		for(int j=i;j<=n;j++)
			if(tmp[j]>0) ans[tmp[j]]++;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}