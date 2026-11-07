#include<bits/stdc++.h>
using namespace std;
long long n,a,x[100100],ans=0;
char c,b[100100];
bool f=1;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>c;
		x[i]=a;
		b[i]=c;
	}
	int p=0,q=n-1;
    while(f)
	{
		if(b[p]==b[q])
		{
			if(x[p]>x[q])
			{
				x[p]-=x[q];
				q--;
			}
			else
			{
				x[q]-=x[p];
				p++;
			}
		}
		else
		{
			if(x[p]>x[q])
			{
				x[p]-=x[q];
				ans+=x[q];
				q--;
			}
			else
			{
			    x[q]-=x[p];
				ans+=x[p];
				p++;
			}
		}
		if(p==q)
		{
		    f=0;
		}
	}
	cout<<ans;
	return 0;
} 
