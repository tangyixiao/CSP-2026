#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a[1000],s=0;
	string c[1000];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	} 
	for(int i=1;i<=n;i++)
	{
		if(a[i]==a[n-i+1])
		{
			if(c[i]!=c[n-i+1])
			{
				c[i]=c[n-i+1];
				s+=a[i];
			}
			else
			{
				s+=0;
			}
			
		}
		else if(a[i]!=a[n-i+1])
		{
			if(a[i]>a[n-i+1]&&c[i]!=c[n-i+1])
			{
				c[n-i+1]=c[i];
			    s+=a[n-i+1];
			}
			else if(a[i]<a[n-i+1]&&c[i]!=c[n-i+1])
			{
				c[i]=c[n-i+1];
				s+=a[i];
			}
			else
			{
				s+=0;
			}
		}
	}
	cout<<s;
	return 0;
}