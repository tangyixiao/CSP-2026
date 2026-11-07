#include<bits/stdc++.h>
using namespace std;
long long a[200100],mx[200100]={0};
long long ans(long long n,long long m)
{
	long long sum=0,v=1;
	while(m!=0)
	{
		int y1=n%2,y2=m%2;
		n/=2;
		m/=2;
		if(y1==1&&y2==1)
		sum+=v;
		v*=2;
	}
	return sum;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		for(int j=1;j<=m;j++)
		{
			if(mx[j]<a[i])
			{
				for(int k=j;k<=m;k++)
				{
					mx[k+1]=mx[k];
				}
				mx[j]=a[i];
				break;
			}	
		} 
	}
	long long mx1,mx2; 
    mx1=mx[1];                                  
	mx2=mx[m];
	cout<<ans(mx1,mx2);
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
