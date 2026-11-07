#include <bits/stdc++.h>
using namespace std;
long long lin[2000000005]={};
long long linshi1[2000000005]={};
long long linshi2[2000000005]={};
void two(int num)
{
	long long i=0;
	while(num!=0)
	{
		lin[i]=num%2;
		num/=2;
		i++;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long a[200005]={};
	long long m,n,ans=0;
	cin>>m,n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(m==1)
	{
		
		for(int i=0;i<n;i++)
		{
			ans=max(ans,a[i]);
		}
	}
	if(m==n)
	{
		for(int i=0;i<n-1;i++)
		{
			for(int j=i;j<n-1;j++)
			{
				if(a[i]>a[i+1]) swap(a[i],a[i+1]);
			}
		}
		for(int i=0;i<n-1;i++)
		{
			while(a[i]!=0)
			{
				i=0;
				linshi1[i]=a[i]%2;
				a[i]/2;
				i++;
			}
			while(a[i+1]!=0)
			{
				i=0;
				linshi2[i+1]=a[i+1]%2;
				a[i+1]/2;
				i++;
			 } 
			
			 
		}
	}
	cout<<ans;
	return 0;
}