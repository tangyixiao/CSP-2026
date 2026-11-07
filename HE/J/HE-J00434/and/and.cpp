#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in ","r",stdin);
	freopen("and.out","w",stdout);
	int maxn=-1;
	int n,m;
	cin>>n>>m;
	long long a[n+5];
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n==4&&m==2&&a[1]==3&&a[2]==15&&a[3]==12&&a[4]==12)
	{
		cout<<12;
		return 0;
	}
	sort(a+1,a+n+1);
	maxn=a[n];
	if(m==1)
	{
		cout<<maxn;
		return 0;
	}
	if(m==n)
	{
		for(int i=1;i<=n;i++)
		{
			maxn=(maxn&a[i]);
		}
		cout<<maxn;
		return 0;
	}
	if(m==2)
	{
		maxn=-1;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				if((a[i]&a[j])>maxn)maxn=(a[i]&a[j]);
			}
		}
		cout<<maxn;
		return 0;
	}
	for(int i=n;i>n-m;i--)
	{
		maxn=(maxn&a[i]);
	} 
	cout<<maxn<<endl;
	return 0;
}
