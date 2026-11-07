#include<bits/stdc++.h>

using namespace std;
const int N=3e5+5;
long long n,m,k,ans;
int a[N];
int vis[N];
vector<int> vt[N];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		for(int j=0;j<=30;j++)
		{
			if((1<<j)&a[i]) vt[j].push_back(i);
		}
	}
	for(int i=30;i>=0;i--) 
		if(vt[i].size()>=m) {
			k=i-1;
			ans+=(1<<i);
			for(int j=0;j<vt[i].size();j++) vis[vt[i][j]]=1;
			break;
		}
	for(int i=k;i>=0;i--)
	{
		int cnt=0;
		for(int j=0;j<vt[i].size();j++)
			if(vis[vt[i][j]]>0)
				cnt+=vis[vt[i][j]],vis[vt[i][j]]+=1;
		if(cnt>=m) ans+=(1<<i);
		for(int i=1;i<=n;i++)
			if(vis[i]>0) vis[i]-=1;
	}
	cout<<ans;
	return 0;
}
