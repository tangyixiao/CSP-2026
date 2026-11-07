#include <bits/stdc++.h>
using namespace std;
struct str
{
	long long n;
	char c;
}a[200050];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	string s;
	cin >>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].n>>a[i].c;
	}
	int l=1,r=n;
	long long t=0,ans=0;
	while(l<r)
	{
		while(a[l].n>0)
		{
			if(a[r].n<a[l].n)
			{
				if(a[r].c==a[l].c)
				{
					a[l].n-=a[r].n;
					a[r].n=0;
					r--;
				}
				else
				{
					a[l].n-=a[r].n;
					ans+=a[r].n;
					a[r].n=0;
					
					r--;
				}
				
			}
			else
			{
				if(a[r].c==a[l].c)
				{
					
					a[r].n-=a[l].n;
					a[l].n=0;
					break;
				}
				else
				{
					a[r].n-=a[l].n;
					ans+=a[l].n;
					a[l].n=0;
					break;
				}
			}

		}
		l++;
	}	
	cout<<ans;
	return 0;
}

