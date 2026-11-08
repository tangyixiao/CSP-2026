#include<bits/stdc++.h>
using namespace std;
int n,m,a[5005],b[5005],c[5005],ne[5005],s[5005],k,tmp[5005],ans[5005],x;
bool flag;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		if(a[i]!=a[i-1])b[++k]=a[i],c[k]=1;
		else c[k]++;
		if(a[i]<a[i-1])flag=true;
	}
	if(!flag){
		for(int i=1;i<=k;i++)ans[b[i]]+=c[i];
		for(int i=1;i<=m;i++)ans[i]+=ans[i-1],cout<<ans[i]<<" ";
	}
	for(int i=k;i>=1;i--)ne[i]=s[a[i]],s[a[i]]=i;
	for(int i=1;i<=k;i++){
		memset(tmp,0,sizeof(tmp));
		for(int j=i;j<=k;j++){
			x=ne[j];
			for(;j<x;j++)tmp[j]=true;
			if(j==x)j--;
		}
		for(int j=i;j<=k;j++)if(!tmp[j])ans[b[j]]+=c[i];
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}

