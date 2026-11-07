#include<bits/stdc++.h>
using namespace std;
long long n,m,a[5000020],k[5000020],s[5000020];
int f(int x)
{
	memset(k,0,sizeof(k));
	memset(s,0,sizeof(s));
	int l=0;
	for(int i=1;i<=n;i++)
	{
	    if(k[a[i]]==0)
	    {
	    	l++;
	    	k[a[i]]=l;
	    	s[l]=a[i];
		}
		else
		{
			for(int j=k[a[j]];j<=l;j++)
			{
				if(a[a[j]]!=0)
				k[a[j]]=0;
			}
			l=k[a[i]];
		}
		for(int i=1;i<=l;i++)
		{
			cout<<endl;
		}
    }
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	f(1);
	return 0;
}
