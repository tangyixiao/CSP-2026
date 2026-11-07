#include <iostream>
#include <algorithm> 
using namespace std;
int a[200005]; 
int maxn=-1e9;
int n,m;
void rec(int k,int an,int cho)
{
	if(cho==m||k==n)
	{
		maxn=max(maxn,an&a[k]);
		return;	
	}	
	if(k>n)
		return;
	rec(k+1,an,cho);
	rec(k+1,an&a[k],cho+1);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool specialA=1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		int po=a[i]+1;
		while(po%2==0)
			po/=2;
		if(po!=1)
			specialA=0;
	}
	if(specialA)//P13
	{
		int ans=2147483647;
		sort(a+1,a+n+1);
		for(int i=n;i>=n-m+1;i--)
			ans&=a[i];
		cout<<ans<<endl;
		return 0;
	}
	if(m==1)//P6
	{
		for(int i=1;i<=n;i++)
		{
			maxn=max(maxn,a[i]); 
		}
		cout<<maxn<<"\n";
		return 0;
	}
	if(m==n)//P7
	{
		int ans=2147483647;
		for(int i=1;i<=n;i++)
		{
			ans&=a[i]; 
		}
		cout<<ans<<"\n";
		return 0;
	}
	if(m==2)//P8-10
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<i;j++)
				maxn=max(maxn,a[i]&a[j]);
			for(int j=i+1;j<=n;j++)
				maxn=max(maxn,a[i]&a[j]);
		}
		cout<<maxn<<"\n";
		return 0;
	}
	if(n<=20&&m<=20)//P1-P5
	{
		rec(0,2147483647,0);
		cout<<maxn<<"\n";
		return 0;
	}
	cout<<"0\n";
	return 0;
}
