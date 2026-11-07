#include<bits/stdc++.h>
using namespace std;
const int N=5e5+7,M=3e5+7;
int n,m,o[N],ans[M],p[M];
bool f[M];
vector<int> a(N);
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>o[i];
	}
	for(int i=1;i<=n;i++)
	{
		a.clear();
		memset(f,0,sizeof(f));
		for(int j=i;j<=n;j++)
		{
			if(!f[o[j]])
			{
				a.push_back(o[j]);
				f[o[j]]=1;
			}
			else
			{
				while(1)
				{
					if(a.back()==o[j]||a.empty())
					{
						break;
					}
					f[a.back()]=0;
					a.pop_back();
				}
			}
		}
		for(int j=0;j<a.size();j++)
		{
			ans[a[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}