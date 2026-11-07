#include<iostream>
#include<cstring>
using namespace std; 
int main()
{
	int h[1001];
	int n,m;
	cin>>n>>m;
	int a[1001];
    int s[1001];
	for(int i=0;i<n;i++)
	{
		s[i]=0;
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		int t=a[i];
		int u=10;
		while(t>=1)
		{
			
			s[i]+=t%2*u;
			u*=10;
			t/=2;
		}
	}
	for(int i=0;i<n;i++)
	{
		s[i]/=10;
	}
	int all[1001];
	for(int i=0;i<n;i++)
	{
		int dd=2;	
		for(int j=i;j<n;j++)
			if(s[i]%10==1&&s[j]%10==1)
			{
			
				all[i]+=s[i]*dd;
				
			}
			dd*=2;
	}
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(all[i]>max)
			max=all[i];
	}
	cout<<max;
}

