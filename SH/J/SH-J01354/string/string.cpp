#include <bits/stdc++.h>
using namespace std;
long long m[1000000];
char b[1000000];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,l,r,v=0,cnt=0;
	string a;
	cin>>n;
	for (long long i=1;i<=n;i++)
	{
		cin>>m[i]>>b[i];
	}
	l=0;
	r=n;
	for (long long i=1;i<=n;i++)
	{
		if (l>=r)
		{
			break;
		}
		long long k=min (m[l],m[r]);
		if (b[l]!=b[r])
		{
			cnt+=k;
		}
		m[l]-=k;
		m[r]-=k;
		if (m[l]==0)
		{
			l+=1;
		}
		else
		{
			r-=1;
		}
	}
	cout<<cnt;
	
	
	return 0;
 } 
 
