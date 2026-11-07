#include<bits/stdc++.h> 
using namespace std;
const int N=2e5+7;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	long long a[N][35]={},sum[35]={};
	int r=0;
	for(int i=1;i<=n;i++)
	{
		int x,js=0;
		cin>>x;
		while(x!=0)
		{
			a[i][++js]=x%2;
			int pd=a[i][js];
			sum[js]+=pd;
			x/=2;
		}
		r=max(r,js);
	}
	
	//solve
	int pa[35]={};
	int lpa=0;
	int ma=0,num=0;
	for(int i=r;i>=1;i--) 
	{
		if(sum[i]>=m) 
		{
			ma=i;
			break;
		}
	}
	int bin=1;
	for(int i=ma;i>1;i--) bin*=2;
	num+=bin;
	
	pa[++lpa]=ma;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=ma;j++)
		{
			sum[j]+=a[i][j];
		}
	}
	
	
	
	
	
	
	
	while(sum[ma]>=m && ma>1)
	{
		//cout<<ma<<" ";
		int flag=0;
		for(int i=ma-1;i>=1;i--) 
		{
			if(sum[i]>=m)
			{
				ma=i;
				flag=1;
				pa[lpa+1]=i;
				lpa+=1;
				break;
			}
		}
		
		if(!flag) break;
		
		int bi=1;
		for(int i=ma;i>1;i--) 
		{
			bi*=2;
		}
		num+=bi;
		
		
		
		for(int i=1;i<=35;i++)
			sum[i]=0;
		
		for(int i=1;i<=n;i++)
		{
			int flag=0;
			for(int j=1;j<=lpa;j++) if(a[i][pa[j]] == 0) flag=1;
			if(flag) continue;
			for(int j=1;j<=ma;j++)
			{
				sum[j]+=a[i][j];
			}
		}	
		
	}
	cout<<num;
	return 0;
}
