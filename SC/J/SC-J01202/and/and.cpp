#include<bits/stdc++.h>
using namespace std;
const int N=200010;
int a[N],n,m;
bool r[N];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(m==1)
	{
		cout<<a[n];
		return 0;
	}
		int ans=0;
		for(int i=1;i<m;i++)
		{
			for(int i=1;i<=n;i++)
			{
				int ma=a[i]&a[1];
				for(int j=2;j<=n;j++)
				{
					if(j!=i)
					{
						ma=max(ma,a[i]&a[j]);
					}
				}
				ans=max(ans,ma);
			}
			cout<<ans;
		}

	return 0;
}