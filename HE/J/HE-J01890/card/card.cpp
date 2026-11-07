#include<bits/stdc++.h>
using namespace std;
long long n=1e10,m;
long long vis[300001];
long long a[200001];
long long f[300001]={},le=1e10,r=-1;
long long vi[300001];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++)
	{
		fill(f+1,f+300001,0);
		fill(vi+1,vi+300001,0);
		le=1e10,r=-1;
		for(int l=i;l<=n;l++)
		{
			if(f[a[l]]!=0&&(f[a[l]]<le||f[a[l]]>r))
			{
				le=min<long long>(le,f[a[l]]+1);
				r=max<long long>(r,l);
			}
			f[a[l]]=l;
		}
		for(int l=i;l<=n;l++)
		{
			if(l<le||l>r) vis[a[l]]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<vis[i]<<' ';
	fclose(stdin);
	fclose(stdout);
	return 0;
 } 
 /*
10 3
3 1 2 1 3 2 3 1 2 1
 
 */
