#include<bits/stdc++.h>
using namespace std;
long long qz[200100];
int a[200100];
char c[200100];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	bool zj=false;
	int n,dj;
	long long mid,ans=0,suml,sumr;
	cin>>n; 
	qz[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		qz[i]=qz[i-1]+a[i];
	} 
	if(qz[n]%2==0)
	{
		mid=qz[n]/2;
	}
	else
	mid=qz[n]/2+1;
	for(int i=1;i<=n;i++)
	{
		if((qz[i]>mid&&qz[i-1]<mid)||qz[i]==mid)
		{
			dj=i;
			mid=mid-qz[i-1];
		}
	}
	if(qz[n]%2==0)
	{
		 sumr=a[dj]-mid;
		 suml=mid;
	}
	else
	{
		 sumr=a[dj]-mid;
		 suml=mid-1;
	}
	int l=dj,r=dj;
	while(l!=0)
	{
		if(suml==0)
		{
			l--;
			suml=a[l];
		}
		if(sumr==0)
		{
			r++;
			sumr=a[r];
		}
		if(c[l]!=c[r])
		{
			if(suml>=sumr)
			{
				ans+=sumr;
				suml-=sumr;
				sumr=0;
			} 
			else
			{
				ans+=suml;
				sumr-=suml;
				suml=0;
			}
		} 
		else
		{
			if(suml>=sumr)
			{
				suml-=sumr;
				sumr=0;
			} 
			else
			{
				sumr-=suml;
				suml=0;
			}
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
