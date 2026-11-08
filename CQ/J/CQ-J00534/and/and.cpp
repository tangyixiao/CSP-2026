#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[210000];
long long x2=1;
long long x;
long long cnt;
long long ans;
bool b[210000];
long long nb;
bool k;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		x=max(x,a[i]);
	} 
	
	do
	{
		x2*=2;
	}while(x/=2);
	x2/=2;
	
	while(x2!=0)
	{
		for(int i=1;i<=n;i++)
		{			
			if(a[i]>=x2)
			{
				a[i]-=x2;
				if(k==0) 
				{
					b[i]=1;
					nb++;
				}
			}
			else 
			{
				if(b[i]==1)
				{
					b[i]=0;
					nb--;
				}
			}
		}
		if(nb>=m)
		{
			k=1;
			ans+=x2; 
		}
		else 
		{
			nb=0;
			if(k==1) break;
		}
		x2/=2;
	}
	cout<<ans;
	return 0;
}
