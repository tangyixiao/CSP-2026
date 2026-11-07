#include<bits/stdc++.h>
using namespace std;
int a[1000000],n,aa,len,ab[10000000],s;
char c[1000000];
int main()
{
	frein(string.in,stdin);
	freout(string.out,stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];

		len+=a[i];
	}
	
	for(int i=1;i<=n;i++)
	{	
		if(i>=2)
		{
			if(c[i]==c[i-1])
			{
				aa++;
				if(aa==n-1)
				{
					cout<<"0"<<endl;
					return 0;
				}
			}
			else
			{
				break;
			}
		}
	}
	
	if(len/2==0)
	{
		for(int i=1;i<=n/2;i++)
		{
			if(c[i]!=c[n--])
			{
				s+=a[n--];
			}
		}
		
	}
	else
	{
		for(int i=1;i<=n/2;i++)
		{
			if(c[i]!=c[n--])
			{
				
				s+=a[n--];
			}
		}
	}
	cout<<s<<endl;
	return 0;
}