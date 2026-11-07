#include<bits/stdc++.h>
using namespace std;
int const N=5e5+5,M=3e5+5;
int n,m;
int a[N],f1[N],f2[N],c[N],ans[M];
vector<int> v[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],v[a[i]].push_back(i);
	for(int i=1;i<=n;i++)
	{
		int x=v[a[i]][v[a[i]].size()-1];
		f1[i]=x;
	}
	f2[n+1]=n+1;
	for(int i=n;i>=1;i--) 
	{
		if(f1[f1[i]+1]!=f1[i]+1) f2[i]=f1[i]+1;
		else f2[i]=f2[f1[i]+1];
	}
	for(int i=1;i<=n;i++) 
	{
		int j=i;
		while(j<=n)
		{
			c[f1[j]]++,c[f2[j]]--;
			j=f2[j];
		}
	}
	for(int i=1;i<=n;i++) c[i]+=c[i-1];
	for(int i=1;i<=n;i++) ans[a[i]]+=c[i];
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}