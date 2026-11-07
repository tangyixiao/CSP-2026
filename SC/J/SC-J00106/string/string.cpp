#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
struct abc{
	long c;
	string a;
}a[200005];
int main() 
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,i,cnt=0;
	cin>>n;
	for(i=1;i<=n;i++) 
	{
		cin>>a[i].c>>a[i].a;
	}
	
	for(int l=1,r=n;l<r;)
	{
		if(a[l].a==a[r].a) 
		{
			if(a[l].c>a[r].c)
			{
				a[l].c-=a[r].c;
				a[r].c=0;
				r--;
			}
			else
			{
				if(a[l].c==a[r].c)
				{
					a[r].c=0;
					a[l].c=0;
					r--;
					l++;
				}
				else
				{
					a[r].c-=a[l].c;
				 	a[l].c=0;
					l++;
				}
			}
		}
		else
		{
			if(a[l].c>a[r].c)
			{
				a[l].c-=a[r].c;
				cnt+=a[r].c;
				a[r].c=0;
				r--;
			}
			else
			{
				if(a[l].c==a[r].c)
				{
					cnt+=a[r].c;
					a[r].c=0;
					a[l].c=0;
					r--;
					l++;
				}
				else
				{
					cnt+=a[l].c;
					a[r].c-=a[l].c;
				 	a[l].c=0;
					l++;
				}
			}
		}
	}
	cout<<cnt;
	return 0;
}