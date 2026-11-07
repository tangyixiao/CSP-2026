#include<bits/stdc++.h>
using namespace std;
int n,m,ans[300005],maxn;
long long a[500005],t[500005];
int l,r;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	memset(ans,0,sizeof ans);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){//Ã¿¾ÖÓÎÏ· 
		memset(t,0,sizeof t);
		l=n,r=i;
		for(int j=i;j<=n;j++){
			if(t[a[j]]!=0) l=min(l,j);
			else r=max(r,j);
			t[a[j]]=j;
		}
		for(int t=i;t<=l;t++) ans[a[t]]++;
		for(int t=r;t<=n;t++)ans[a[t]]++;
	}
	for(int j=1;j<=m;j++){
		cout<<ans[j]<<" ";
	}
}/*
10 3
3 1 2 1 3 2 3 1 2 1*/
