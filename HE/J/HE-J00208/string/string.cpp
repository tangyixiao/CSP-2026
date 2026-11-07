#include <bits/stdc++.h>
using namespace std;
long long n,a[200010],x=0;
char c[200010];
bool flag=false;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	if(n==1)
	{
		cout<<"0";
	}
	else if(n==2)
	{
		if(c[1]==c[2])
		{
			cout<<"0";
		}
		else if(a[1]>=a[2])
		{
			cout<<a[2];
		}
		else cout<<a[1];
	}
	else
	{
		int i=1,j=n;
		for(int i=1;i<=j;i++)
		{
			for(int j=n;j>=i;j--)
			{
				if(c[i]==c[j])
				{
					if(a[i]>a[j])
					{
						a[i]-=a[j];
						a[i+1]+=a[i];
					}
					else
					{
						a[j]-=a[i];
						a[j+1]+=a[j];
						
					} 
				}
				else
				{
					if(a[i]>a[j])
					{
						x+=a[j];
						a[i]-=a[j];
						a[i+1]+=a[i];
					}
					else
					{
						x+=a[i];
						a[j]-=a[i];
						a[j+1]+=a[j];
					} 
				}
			}
		}
		cout<<x*a[i];
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

