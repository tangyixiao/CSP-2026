#include<bits/stdc++.h>
using namespace std;
struct hp
{
	long long num;
	char x;
}a[400005];
long long n,sum,ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].num>>a[i].x;
		sum+=a[i].num;
	}
	if(sum%2==0)
	{
		long long z=0;
		for(int i=1;i<=n;i++)
		{
			z+=a[i].num;
			if(z>sum/2&&z-a[i].num<sum/2)
			{
				a[i].num=a[i].num-(z-sum/2);
				long long jhn=z-sum/2;
				char jhc=a[i].x;
				for(int j=i+1;j<=n+1;j++)
				{
					long long cn=a[j].num;
					char cc=a[j].x;
					a[j].num=jhn;
					a[j].x=jhc;
					jhn=cn;
					jhc=cc;
				}
				n=n+1; 
				break;
			}
		}
		long long syl=0,syr=0,l=1,r=n,cl,cr;
		for(;;)
		{
			if(syl==0&&syr==0)
			{
				if(a[l].num>a[r].num)
				{
					syl+=a[l].num-a[r].num;
					cl=a[l].x;
					if(a[l].x!=a[r].x)
					{
						ans+=a[r].num;
					}
					r--;
				}
				if(a[l].num<a[r].num)
				{
					syr+=a[r].num-a[l].num;
					cr=a[r].x;
					if(a[r].x!=a[l].x)
					{
						ans+=a[l].num;
					}
					l++;
				}
				if(a[l].num==a[r].num)
				{
					if(a[r].x!=a[l].x)
					{
						ans+=a[l].num;
					}
					l++;
					r--;
				}
			}
			if(syr==0&&syl!=0)
			{
				if(a[r].num>syl)
				{
					syr=a[r].num-syl;
					cr=a[r].x;
					if(a[r].x!=cl)
					{
						ans+=syl;
					}
					syl=0;
					l++;
				}
				if(a[r].num==syl)
				{
					if(a[r].x!=cl)
					{
						ans+=syl;
					}
					syl=0;
					l++;
					r--;
				}
				if(a[r].num<syl)
				{
					if(a[r].x!=cl)
					{
						ans+=syl-a[r].num;
					}
					syl-=a[r].num;
					r--;
				}
			}
			if(l>=r)
			{
				break;
			}
		}
		cout<<ans;
		return 0;
	}
	if(sum%2==1)
	{
		long long z=0;
		for(int i=1;i<=n;i++)
		{
			z+=a[i].num;
			if(z>sum/2)
			{
				a[i].num=a[i].num-(z-sum/2);
				long long jhn=z-sum/2-1;
				if(a[i].num==0)
				{
					if(jhn==0)
					{
						for(int j=i+1;j<=n;j++)
						{
							a[j-1].num=a[j].num;
							a[j-1].x=a[j].x;
						}
						n=n-1;
						break;
					}
					else
					{
						a[i].num=jhn;
						break;
					}
				}
				else
				{
					if(jhn!=0)
					{
						char jhc=a[i].x;
						for(int j=i+1;j<=n+1;j++)
						{
							long long cn=a[j].num;
							char cc=a[j].x;
							a[j].num=jhn;
							a[j].x=jhc;
							jhn=cn;
							jhc=cc;
						}
						n=n+1; 
						break;
					}
				}
				break;
			}
		}
		long long syl=0,syr=0,l=1,r=n,cl,cr;
		for(;;)
		{
			if(syl==0&&syr==0)
			{
				if(a[l].num>a[r].num)
				{
					syl+=a[l].num-a[r].num;
					cl=a[l].x;
					if(a[l].x!=a[r].x)
					{
						ans+=a[r].num;
					}
					r--;
				}
				if(a[l].num<a[r].num)
				{
					syr+=a[r].num-a[l].num;
					cr=a[r].x;
					if(a[r].x!=a[l].x)
					{
						ans+=a[l].num;
					}
					l++;
				}
				if(a[l].num==a[r].num)
				{
					if(a[r].x!=a[l].x)
					{
						ans+=a[l].num;
					}
					l++;
					r--;
				}
			}
			if(syr==0&&syl!=0)
			{
				if(a[r].num>syl)
				{
					syr=a[r].num-syl;
					cr=a[r].x;
					if(a[r].x!=cl)
					{
						ans+=syl;
					}
					syl=0;
					l++;
				}
				if(a[r].num==syl)
				{
					if(a[r].x!=cl)
					{
						ans+=syl;
					}
					syl=0;
					l++;
					r--;
				}
				if(a[r].num<syl)
				{
					if(a[r].x!=cl)
					{
						ans+=syl-a[r].num;
					}
					syl-=a[r].num;
					r--;
				}
			}
			if(l>=r)
			{
				break;
			}
		}
		cout<<ans;
		return 0;
	}
	return 0;
} 