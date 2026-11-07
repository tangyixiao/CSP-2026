#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[300005];
vector<int> v;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		v.clear();
		for(int j=i;j<=n;j++)
		{
			int xb=-1;
			for(int k=0;k<v.size();k++)
			{
				if(v[k]==a[j])
				{
					xb = k;
					break;
				}
			}
			if(xb!=-1) v.erase(xb+1+v.begin(),v.end());
			else v.push_back(a[j]);
		}
        for(int k=0;k<v.size();k++) b[v[k]]++;
	}
	for(int i=1;i<=m;i++) cout<<b[i]<<' ';
	return 0;
}