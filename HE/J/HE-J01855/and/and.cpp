#include<bits/stdc++.h>
using namespace std;
int pos;
long long a[100010];
long long b[100010];
long long L=0;
bool check1=0;
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	string sa;
	bool check1=0;
	for(int i=pow(2,30);i>=1;i/=2)
	{
		if(a[1]>=i)
		{	
			pos=i;
			a[1]-=i;
			check1=1;
			sa+='1';

		}
		else
		{
			if(check1)
			{
				sa+='0';
			}
		}
		if(check1)
		{
			L++;
		}
	} //maxc 
	
	for(int j=2;j<=n;j++)
	{
		string sb,sc;
		check1=0;
		for(int i=pow(2,30);i>=1;i/=2)
		{
			if(pos==i)
			check1=1;
			if(a[j]>=i)
			{	
				a[j]-=i;
				check1=1;
				sb+='1';
			}
			else
			{
				if(check1)
				{
					sb+='0';
				}
			}	
		}
		for(int i=0;i<L;i++)
		{
			
			if((int)sa[i]-48&&(int)sb[i]-48)
			{
				sc+='1';
			}
			else
			{
				sc+='0';
			}
		}
		for(int i=0;i<=L;i++)
		{
			sa[i]=sc[i];
		}
	}
	long long twoj=pow(2,L-1);
	long long ans=0;
		for(int i=0;i<L;i++)
		{
			ans+=((int)sa[i]-48)*twoj;
			twoj/=2;
		}
		cout<<ans;
	return 0;
}
