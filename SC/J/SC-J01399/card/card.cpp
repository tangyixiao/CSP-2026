#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[1000001],pre[1000001],xx[1000001],sum[1000001],ans[1000001],t[1000001];
struct node{
	int pos,x,v;
}w[1000001];
bool cmp(node nn,node nnn){
	return nn.pos<nnn.pos;
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=n;i>=1;i--){
		sum[a[i]]++;
		if(!pre[a[i]]){
			pre[a[i]]=i;
			xx[a[i]]=a[i+1];
			w[a[i]].pos=i;
		}
	}
	for(int i=1;i<=m;i++)w[i].x=sum[i],w[i].v=i;
	sort(w+1,w+m+1,cmp);
	for(int i=1;i<=m;i++)t[w[i].v]=i;
	for(int i=1;i<=m;i++){
		w[t[xx[w[i].v]]].x+=w[i].x;
		ans[w[i].v]=w[i].x;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}