#include <bits/stdc++.h>
using namespace std;
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
int m,n,a[31][200010],s,t,b[200000];
void mi(int x,int y)
{
	int tt=0;
	while(x!=0)
	{
		if(x%2==1)
		{
			a[tt][y]=1;
			
		} 
		x/=2;
		tt++;
	}
}
int main()
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		cin>>s;
		b[i]=i;
		mi(s,i);
	}
	int k=m,mj=k;
	for(int i=31;i>=0;i--)
	{
		int t=0;

		for(int j=0;j<k;j++)
		{
			
			if(a[i][b[j]]==1)
			{
				b[t]=j;
				t++;
			}
		}
		if(t==n) break;
		if(t>n) k=t;
		if(t<n) k=mj;
		mj=k;
	}
	long long sum=0;
	for(int i=0;i<31;i++)
	{
		t=0;
		for(int j=0;j<n;j++)
		{
			if(a[i][b[j]]==0)
			{
				t=1;
				break; 
			} 
		}	
		if(t==0) sum+=pow(2,i);
	}
	cout<<sum;
	return 0;
}
