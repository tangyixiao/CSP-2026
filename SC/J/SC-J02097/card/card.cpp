#include<bits/stdc++.h>
using namespace std;
long long n=0,m=0,b1=0,ans1=0;
long long a[500001]={0},ans[500001]={0};
string b;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			for(int l=1;l<=b1;l++)
			{
				if(a[j]==b[l]-'0')
				{
					for(int k=l+1;k<=b1;k++)
					{
						b[l]=0;
					}
					b1=l;
					break;
				}
				if(l==b1&&a[j]!=b[l]-'0')
				{
					b[++b1]=a[j]+'0';
					break;
				}
			}
		}
		for(int j=0;j<=b1;j++)
		{
			if(b[i]-'0'==i)
				ans[ans1++]=i;
		}
	}
	for(int i=0;i<ans1;i++)
	{
		cout<<ans[i];
		if(i+1!=ans1)
			cout<<" ";
	}
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	return 0;
}