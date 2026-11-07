#include<bits/stdc++.h>
using namespace std;
int a[200005],p[200005],to[200005],ap[200005];
vector<int> v;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=n;i>=1;i--)
	{
		if(p[a[i]]==0)to[i]=i;
		else to[i]=p[a[i]];
		p[a[i]]=i;
	}
	for(int i=1;i<=n;i++)
	{
		int cur=i;
		while(cur<=n)
		{
			if(to[cur]==cur)
			{
				v.push_back(cur);
				cur++;
				continue;
			}
			cur=to[cur];
		}
		for(int i=0;i<=v.size()-1;i++)
		{
			ap[a[v[i]]]++;
		}
		v.clear();
	}
	for(int i=1;i<=m;i++)cout<<ap[i]<<' ';
	return 0;
}
