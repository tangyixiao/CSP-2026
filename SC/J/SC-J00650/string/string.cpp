#include<iostream>
#include<cstdio>
using namespace std;
long n;
long a[200005];
char b[200005];
long long sum;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	long i=1,j=n;
	while(i<j)
	{
		if(b[i]!=b[j])
		{
			if(a[i]<a[j])
			{
				sum+=a[i];
				a[j]=a[j]-a[i];
				a[i]=0;
				i++;
			}
			else
			{
				if(a[i]>a[j])
				{
					sum+=a[j];
					a[i]=a[i]-a[j];
					a[j]=0;
					j--;
				}
				else
				{
					sum+=a[i];
					a[i]=0;
					a[j]=0;
					i++;
					j--;
				}
			}
		}
		if(b[i]==b[j])
		{
			if(a[i]<a[j])
			{
				a[j]=a[j]-a[i];
				a[i]=0;
				i++;
			}
			else
			{
				if(a[i]>a[j])
				{
					a[i]=a[i]-a[j];
					a[j]=0;
					j--;
				}
				else
				{
					a[i]=0;
					a[j]=0;
					i++;
					j--;
				}
			}
		}
	}
	cout<<sum;
    return 0;
}
