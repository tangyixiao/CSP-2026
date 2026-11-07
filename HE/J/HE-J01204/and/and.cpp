#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,m,a[1000000];
	cin>>n>>m;	
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
	}
	int ans=-1;
	for(int i=1;i<=n;i++)
    {
    	int p=a[i];
    	for(int j=i;j<=n-i+4;j++)
    	{
    		p&=a[j];
		}
		ans=max(ans,p);
	}
	cout<<ans;
}
