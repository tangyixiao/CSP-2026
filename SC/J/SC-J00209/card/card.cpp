#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500005],nw[500005],t[500005],k;
int src(int x,int l){
	for(int i=k;i<=l;i++){
		if(nw[i]==x)return i;
	}
	return INT_MAX;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(k=1;k<=n;k++){
		nw[k]=a[k];
		for(int i=k+1;i<=n;i++){
			if(src(a[i],i)!=INT_MAX){
				for(int j=src(a[i],i);j<i;j++)nw[j]=0;
			}
			nw[i]=a[i];
		}
		for(int i=k;i<=n;i++)t[nw[i]]++;
//		for(int i=k;i<=n;i++)cout<<nw[i]<<" ";
//		cout<<"\n";
		memset(nw,0,sizeof(nw));
	}
	for(int i=1;i<=m;i++)cout<<t[i]<<" ";
	return 0;
}