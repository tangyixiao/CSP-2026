#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n,h=0;
	cin>>n>>m;
	int num[300000];
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	if(m==1)
	{
		for(int i=0;i<n;i++)
		{
			if(num[i]>=h)
			{
				h=num[i];
			}
		}
		cout<<h;
		return 0;
	}
	if(m==n)
	{
		h=num[0];
		for(int i=1;i<n;i++)
		{
			h=h&num[i];
		}
		cout<<h;
		return 0;
	}
	if(m==2)
	{
		h=num[0]&&num[1];
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if((num[i]&num[j])>=h)
				{
					h=num[i]&num[j];
				}
			}
		}
		cout<<h;
		return 0;
	}
	
}
if(m==n-1)
{
	for(int i=0;i<n;i++)
	{
		int p;
		for(int j=0;j<n;i++)
		{
			p=num[j];
			if(j!=i)
			{
				p=p&num[j];
			}
		}
		if(p>h)
		{
			h=p;
		}
	}
	cout<<h;
	return 0;
}