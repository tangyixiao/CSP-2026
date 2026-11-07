#include<bits/stdc++.h>
using namespace std;
#define int long long
char s[200005];
int s1[200005];
int s2[200005];
int a;int h=0;
int n;
char f(int x)
{
	int l=1,r=n;
	int mid=(l+r)>>1;
	char ans;
	while(l<=r)
	{
		if(s2[mid]>=x)
		{
			r=mid-1;
			ans=s[mid];
			mid=(l+r)/2;
		}
		else
		{
			l=mid+1;
			mid=(l+r)/2;
		}
	}
	return ans;
}
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	char x;int cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		s1[i]=a;
		h+=a;
		cin>>x;
		s[i]=x;
		s2[i]=s2[i-1]+s1[i];
	}
	if(h%2==1)
	{
		h/=2;
		h+=1;
		for(int i=1;i<h;i++)
		{
			if(f(h-i)!=f(h+i))
			cnt++;
		}
	}
	else
	{
		h/=2;
		if(f(h)!=f(h+1))cnt++;
		for(int i=1;i<=n;i++)
		{
			if(f(h-i)!=f(h+i+1))
			{
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
