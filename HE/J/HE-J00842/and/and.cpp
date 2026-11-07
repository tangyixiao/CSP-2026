#include<bits/stdc++.h>
using namespace std;
int n,m,maxn;
int ans[100000];
int a[100000];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i--)
    {
    	cin>>a[i];
    	ans[i]=a[i+n]%2;
    	for(int j=1;j<=m;j++)
    	{
    		if(ans[i]==ans[i+1])
    		{
    			ans[i]=0;
			}
			else
			{
				ans[i]=1;
			}
		}
	}
	for(int i=1;i<=n;i++)
    {
    	ans[i]=2*a[i]*a[i]+1;
		maxn=max(ans[i],ans[i+1]);
	}
	cout<<maxn;
}
