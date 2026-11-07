#include<bits/stdc++.h>
#define int long long
using namespace std;
int A[200005];
int n,m;
int final_ans=0;
int tw(int z)
{
	int sum=1;
	for(int i=1;i<=z;i++) sum*=2;
	return sum;
}
int gcd(int a,int b)
{
	int ans=0;
	string s1,s2,s3;
	int k1=0,k2=0,k3=0;
	while(a!=0)
	{
		s1[k1]=a%2;
		a/=2;
		k1++;
	}
	while(b!=0)
	{
		s2[k2]=b%2;
		b/=2;
		k2++;
	}
	while(k1!=k2)
	{
		if(k1<k2)
		{
			s1[k1]='0';
			k1++;
		}
		else
		{
			s2[k2++]='0';
			k2++;
		}
	}
	for(int i=k1-1;i>=0;i--)
	{
		if(s1[i]==s2[i]) s3[i]='1';
		else s3[i]='0';
	}
	for(int i=0;i<k1;i++)
	{
		ans+=((s3[i]-'0')*tw(i));
	}
	return ans;
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>A[i];
	if(m==1)
	{
		for(int i=1;i<=n;i++) final_ans=max(final_ans,A[i]);
	}
	if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				final_ans=max(final_ans,gcd(A[i],A[j]));
			}
		}
	}
	cout<<final_ans;
	return 0;
}