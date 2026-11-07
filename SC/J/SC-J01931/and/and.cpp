#include<bits/stdc++.h>
using namespace std;
int a[10000000];
int n,ans=0,m;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	sort(a,a+n);
	for(int i=n;i>=m-1;i--)
	{
		int x=a[i]&a[i-1];
		if(m==3)
		{
			int x=a[i]&a[i-1]&a[i-2];
		}
		ans=max(ans,x);
	}
	cout<<ans;
}