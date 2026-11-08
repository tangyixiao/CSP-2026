#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,ans=0;
	cin>>n;
	long long a[n+10][2],b[n+10],a1=0,b1=0,c1=0;
	char lll;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i][1];
		if(i==1)
		{
			b[i]=1;
		}
		if(i>1)
		{
			a[i][1]+=a[i-1][1];
			b[i]=a[i-1][1]+1;
		}
		cin>>lll;
		a[i][0]=lll-'a';
	}
	long long len=a[n][1],mid=(len+1)/2;
	for(int i=1;i<=n;i++)
	{
		if(a[i][1]>=mid)
		{
			if(len%2==1)
			{
				len--;
				b[i]++;
				for(int j=i;j<=n;j++)
				{
					a[j][1]--;
					b[j]--;
				}
			}
			mid=i;
			if(a[i-1][1]<len/2+1)
			{
				b1=len-a[i][1]+1;
				a1=len/2;
				c1=a[i][0];
				a[i][1]=len/2;
			}
			for(int j=i+1,kk=0;j<=n;j++)
			{
				a[j][1]=len-a[j][1]+1;
				b[j]=len-b[j]+1;
				kk=b[j];
				b[j]=a[j][1];
				a[j][1]=kk;
			}
			break;
		}
	}
	for(int i=1,j=n;;)
	{
		if(i>mid)
		{
			break;
		}
		else if(a1!=0&&j==mid)
		{
			if(a1>a[i][1])
			{
				if(c1!=a[i][0])
				{
					ans+=a[i][1]-b[i]+1;
				}
				b1=a[i][1]+1;
				i++;
			}
			if(a1<a[i][1])
			{
				if(c1!=a[i][0])
				{
					ans+=a1;
				}
				b[i]=a1+1;
				a1=0;
			}
			if(a1==a[i][1])
			{
				if(c1!=a[i][0])
				{
					ans+=a1;
				}
				i++;
				a1=0;
			}
		}
		else if(a[j][1]>a[i][1])
		{
			if(a[j][0]!=a[i][0])
			{
				ans+=a[i][1]-b[i]+1;
			}
			b[j]=a[i][1]+1;
			i++;
		}
		else if(a[j][1]<a[i][1])
		{
			if(a[j][0]!=a[i][0])
			{
				ans+=a[j][1]-b[j]+1;
			}
			b[i]=a[j][1]+1;
			j--;
		}
		else if(a[j][1]==a[i][1])
		{
			if(a[j][0]!=a[i][0])
			{
				ans+=a[j][1]-b[j]+1;
			}
			i++;
			j--;
		}
	}
	cout<<ans;
}
