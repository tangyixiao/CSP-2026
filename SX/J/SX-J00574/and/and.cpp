#include<bits/stdc++.h>
using namespace std;
const int X=2e5+5;
long long n,m,a[X],ans;
bool flag=1;
bool cmp(int x,int y) {return x>y;}
int main() 
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(i>1&&a[i]-a[i-1]!=1) flag=0;
	} 
	if(pow(2,log2(n))==n&&flag==1)
	{
		 cout<<n-m;
		 return 0;
	}
	if(m==1)
	{
		for(int i=1;i<=n;i++) ans=max(ans,(a[i]&a[i]));
		cout<<ans;
		return 0;
	 } 
	if(m==2)
	{
		for(int i=1;i<=n;i++) for(int j=i+1;j<=n;j++) ans=max(ans,a[i]&a[j]);
		cout<<ans;
		return 0;
	}
	if(m==n)
	{
		ans=a[1];
		for(int i=2;i<=n;i++) ans=(ans&a[i]);
		cout<<ans;
		return 0;
	 } 
	if(m==n-1)
	{
		long long k=1,tot;
		for(int i=1;i<=n;i++) 
		{
			if(k==1) 
			{
				tot=a[2];
				for(int j=3;j<=n;j++) tot=(tot&a[j]);
			}
			else
			{
				tot=a[1];
				for(int j=2;j<=n;j++) if(j!=k) tot=(tot&a[j]);
			}
			ans=max(ans,tot);
			k++;
		}
		cout<<ans;
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	ans=a[1];
	for(int i=2;i<=m;i++) ans=(ans&a[i]);
	cout<<ans;
    return 0;
}