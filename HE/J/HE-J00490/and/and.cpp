#include<bits/stdc++.h>
using namespace std;
long long b,ans=0,a[200005]={ },a1=0,c;
int n,m;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m=1)
	{
		for(int i=0;i<n;i++)
		{
			cin>>b;
			ans=max(ans,b);
		}
		cout<<ans;
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		cin>>b;
		for(int q=0;q<m;q++)
		{
			a1=b and a[0];
    		for(int a2=1;a2<m;a2++)
			{
				if(a2!=q)
				{
					a1=a1 and a[i];
				}
			}
			if(a1>b)
			{
				swap(a1,b);
			}
		}
	}
	cout<<b;
	return 0;
}
