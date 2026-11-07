#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
signed main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,last=1e9;cin>>n>>m;
	vector<int>A(n),cnt(n,-1),num(n),ans(m+1),k(n,1);
	vector<vector<int> >vis(m+1);
	for(int i=0;i<n;i++)cin>>A[i],vis[A[i]].push_back(i);
	for(int i=0;i<n;i++)
		if(i!=vis[A[i]][vis[A[i]].size()-1])cnt[i]=i;
	for(int i=n-1;i>=0;i--)
		if(cnt[i]!=-1)last=cnt[i];
		else cnt[i]=last;
	for(int i=0;i<n;i++)
		if(cnt[i]==i)k[vis[A[i]][vis[A[i]].size()-1]]+=k[i];
		else{
			if(cnt[i]!=1e9)num[cnt[i]]-=k[i],k[cnt[i]]+=k[i];
			num[i]+=k[i];
		}
	ans[A[0]]+=num[0];
	for(int i=1;i<n;i++)num[i]+=num[i-1],ans[A[i]]+=num[i];
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
} 