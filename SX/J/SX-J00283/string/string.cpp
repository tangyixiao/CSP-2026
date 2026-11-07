#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i = 1; i<= n; i++)
	{
		cin>>a[i]>>c[i];
	}
	long long a1=a[1],a2=a[n];
	char c1=c[1],c2=c[n];
	long long l=1,r=n;
	long long sum=0;
	while(1)
	{
		if(l==r)
		{
			break;
		}
		if(a1>a2)
		{
			if(c1!=c2)
			{
				sum+=a2;
			}
			r--;
			a1-=a2;
			a2=a[r];
			c2=c[r];
		}
		else if(a1<a2)
		{
			if(c1!=c2)
			{
				sum+=a1;
			}
			l++;
			a2-=a1;
			a1=a[l];
			c1=c[l];
		}
		else if(a1==a2)
		{
			if(r-l==1)
			{
				if(c1!=c2)
				{
					sum+=a1;
				}
				break;
			}
			else
			{
				if(c1!=c2)
				{
					sum+=a1;
				}
				l++;
				r--;
				a1=a[l];
				c1=c[l];
				a2=a[r];
				c2=c[r];
			}
		}
	}
	cout<<sum;
	return 0;
}