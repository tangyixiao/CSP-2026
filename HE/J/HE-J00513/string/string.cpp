#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ans=0,cnt=0;
	string z;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		cin>>z[ans];
		for(int l=ans+1;l<ans+a;l++)
		{
			z[l]=z[ans];
		}
	    ans+=a;
	}
	for(int j=0;j<ans/2;j++)
	{
		if(z[j]!=z[ans-j-1])
		{
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
