#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[200010];
char c[200010];
long long sum=0;//总数
long long l[200010],r[200010];
char c1[200010],c2[200010];
long long ans=0;
long long b[200010];
int main()
{
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	//将字符串分为长度相同的两段
	long long flag1=0;
	long long cnt=0;
	sum=(sum+1)/2ll;
	for(long long i=1;i<=n;i++)
	{
		cnt+=a[i];
		if(cnt>sum)
		{
			l[++flag1]=a[i]-(cnt-sum);
			c1[flag1]=c[i];
			break;
		}
		l[++flag1]=a[i];
		c1[flag1]=c[i];
	}
	long long flag2=0;
	cnt=0;
	for(long long i=n;i>=1;i--)
	{
		cnt+=a[i];
//		cout<<cnt<<"-----\n";
		if(cnt>sum)
		{
//			cout<<"11===\n";
			r[++flag2]=a[i]-(cnt-sum);
			c2[flag2]=c[i];
			break;
		}
//		cout<<a[i]<<" "<<c[i]<<"*****\n";
		r[++flag2]=a[i];
		c2[flag2]=c[i];
	}
	long long flag=0;
	cnt=0;
	for(long long i=1;i<=flag1;i++)
	{
		flag+=l[i];
		b[++cnt]=flag;
	}
	flag=0;
	for(long long i=1;i<=flag2;i++)
	{
		flag+=r[i];
		b[++cnt]=flag;
	}
	sort(b+1,b+cnt+1);
	long long num1=0,num2=0;
	long long i=0,j=0;
	cnt=unique(b+1,b+cnt+1)-b-1;
	for(long long k=1;k<=cnt;k++)
	{
//		cout<<b[k]<<"---\n";
		while(num1<b[k])
		{
			num1+=l[++i];
		}
		while(num2<b[k])
		{
			num2+=r[++j];
		}
//		cout<<num1<<" "<<i<<' '<<num2<<' '<<j<<"---\n";
		if(c1[i]!=c2[j])
		{
			ans+=b[k]-b[k-1];
		}
	}
//	long long flag=0;
//	for(long long i=1;i<=flag1;i++)
//	{
//		num1+=l[i];
//		if(num1<=num2)
//		{
//			if(c1[i]==c2[flag])
//			{
//				ans+=min(r[flag]-(num2-num1),l[i]);
//			}
//		}
//		while(num2<=num1)
//		{
//			num2+=r[++flag];
//			if(num2<=num1)
//			{
//				if(c1[i]==c2[flag])
//				{
//					ans+=r[flag];
//				}
//			}
//			else
//			{
//				if(c1[i]==c2[flag])
//				{
//					ans+=min(r[flag]-(num2-num1),l[i]);
//				}
//			}
//		}
//	}
	cout<<ans;
	return 0;
}
//就是对于回文中心两边的字符看有多少个i与n-i+1不相等