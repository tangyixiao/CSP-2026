#include <iostream>
int a[20010] ;
char b[20010];
using namespace std ;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n , sum=0,a1=1,a2;
	cin>>n;
	a2=n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	while (a1<a2)
	{
		if(b[a1]==b[a2])
		{
			if(a[a1]>a[a2])
			{
				a[a1]-=a[a2];
				a2-=1;
			}
			if(a[a1]<a[a2])
			{
				a[a2]-=a[a1];
				a1+=1;
			}
			if(a[a1]==a[a2])
			{
				a1+=1;a2-=1;
			}
		}
		else
		{
			if(a[a1]>a[a2])
			{
				a[a1]-=a[a2];
				sum+=a[a2];
				a2-=1;
			}
			else if(a[a1]<a[a2])
			{
				a[a2]-=a[a1];
				sum+=a[a1];
				a1+=1;
			}
			else if(a[a1]==a[a2])
			{
				sum+=a[a2];
				a1+=1;a2-=1;
			}
		}
	}
	cout<<sum;
}

