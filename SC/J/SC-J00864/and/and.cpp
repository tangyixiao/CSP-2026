#include<bits/stdc++.h>
using namespace std;
long long sw1(long long a)
{
	long long p=0;
	while(a!=0)
	{
		p++;
		a/=2;
	}
	return p;
}
string ze(long long a)
{
	string k;
	while(a!=0)
	{
		if(a%2==0)
		{
			k+='0';
		}
		else
		{
			k+='1';
		}
		a/=2;
	}
	return k;
}

long long jc2(long long a)
{
	long long p=1;
	for(long long i=1;i<a;i++)
	{
		p*=2;
	}
	return p;
}


int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n;
	int m;
	cin>>n>>m;
	string a[n+2];
	long long lent=0;
	long long k[n+2];
	for(int i=1;i<=n;i++)
	{
		cin>>k[i];
		lent=max(lent,sw1(k[i]));
		
	}
	for(int i=1;i<=n;i++)
	{
		a[i]=ze(k[i]);
		if(sw1(k[i])<lent)
		{
			
			for(int o=1;o<=lent-sw1(k[i]);o++)
			{
				a[i]+='0';
			}
		}
		
	}
	long long sw[lent+2]={0};
	int sum=1;
	for(int i=lent;i>=1;i--)
	{
		long long cnt=0;
		for(long long j=1;j<=n;j++)
		{
			if(a[j]=="0")
			{
				continue;
			}
			if(a[j][i-1]=='1')
			{
				cnt++;
			}
			
		}
		if(cnt>=m)
		{
			for(long long j=1;j<=n;j++)
			{
				if(a[j][i-1]=='0')
				{
					a[j]="0";
				}
			}
			sw[sum]=i;
			sum++;
		}
	}
	int ans=0;
	for(long long i=1;i<sum;i++)
	{
		ans+=jc2(sw[i]);
	}
	cout<<ans;

	return 0;
}
