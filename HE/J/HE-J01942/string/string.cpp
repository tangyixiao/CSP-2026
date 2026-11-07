#include<iostream>
#include<string>
using namespace std;
int main()
{
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
	int n;
	long long mid=0;
	cin>>n;
	int a[n];
	string c;
	long long apple=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>c[i];
	}
	for(int i=0;i<n;i++)
	{
		mid+=a[i];
	}
	if(mid%2==0)mid/=2;
	else mid=(mid+1)/2;
	char midc;
	long long l=0;
	for(int i=0;i<n;i++)
	{
		l+=a[i];
		if(mid<=l)
		{
			midc=i;
		}
	}
	cout<<midc<<"  "<<mid<<"   ";
	while(a) 
	{
		for(int i=0;i<n;i++)
		{
			if(i<=midc)
			{
				if(c[i]!=c[n-1-i])
				{
					if(a[i]=a[n-i-1])
					{
						apple+=a[i];
						a[i]=0;
						a[n-i-1]=0;
					}
					else if(a[i]<c[n-1-i])
					{
						apple+=a[i];
						a[i]=0;
						a[n-1-i]-a[i];
					}
					else
					{
						apple+=a[n-1-i];
						a[i]-a[n-1-i];
					}
				}
			}
			if(i>=mid)
			{
				break;
			}
		}	
	}
	if(mid%2==0)cout<<apple;
	else cout<<apple-1;
	return 0;
}	
