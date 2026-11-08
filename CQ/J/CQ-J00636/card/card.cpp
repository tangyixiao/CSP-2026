#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[500005],bj,f[500005],vis[500005];
vector<int>v;
namespace did{
	int main()
	{
		freopen("card.in","r",stdin);
		freopen("card.out","w",stdout); 
		scanf("%d%d",&n,&m);
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]<a[i-1])bj=1;
		} 
		if(!bj)
		{
			int cnt=0;
			for(int i=1;i<=n;i++)
				if(a[i+1]!=a[i])f[++cnt]=i;
			for(int i=1;i<=m;i++)cout<<f[i]<<" ";
			return 0;
		}
		for(int i=1;i<=n;i++)
		{
			v.clear();
			for(int j=i;j<=n;j++)
			{
				vis[a[j]]++;
				if(vis[a[j]]>1)
					for(int k=0;k<v.size();k++)
						if(v[k]==a[j])
						{
							for(int t=k;t<v.size();t++)
							{
								v[t]=-1;
								vis[a[t]]=0;
							}
							break;
						}
				v.push_back(a[j]);
			}
			for(int j=0;j<v.size();j++)
			if(v[j]!=-1)ans[v[j]]++;
		}
		ans[a[n]]=n;
		for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
		return 0;
	}	
}
int main()
{
	did::main();
	return 0;
}
//¹À·Ö:40
//¸´ÔÓ¶È:O(n^3) 
