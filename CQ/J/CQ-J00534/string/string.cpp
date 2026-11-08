#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[210000];
char b[210000];
long long cnt=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	int l=1,r=n;
	int ls=a[1],rs=a[n];
	char lc=b[1],rc=b[n];
	
	while(l<r)
	{
		if(ls<rs)
		{
			if(lc!=rc) cnt+=ls;
			l++;
			rs-=ls;
			ls=a[l];
			lc=b[l];
		}
		else if(ls>rs)
		{
			if(lc!=rc) cnt+=rs;
			r--;
			ls-=rs;
			rs=a[r];
			rc=b[r];			
		}
		else if(ls==rs)
		{
			if(lc!=rc) cnt+=ls;
			l++;
			r--;
			ls=a[l];
			rs=a[r];
			lc=b[l];
			rc=b[r];		
		}
	}
	
	cout<<cnt;
	return 0;
}
