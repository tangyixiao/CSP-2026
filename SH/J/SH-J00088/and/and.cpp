#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int maxn=-0x3f3f3f;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	if(m==1)
	{
		cout<<maxn;
		return 0;
	}
	if(m==2)
	{
		int max1=-0x3f3f3f;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				max1=max(max1,(a[i]&a[j]));
			}	
		}	
		cout<<max1;
		return 0;
	}
	if(m==2)
	{
		int cnt=a[1];
		for(int i=2;i<=n;i++)cnt=cnt&a[i];
		cout<<cnt;
		return 0;	
	} 
	return 0;//T2 ye shi cheng gong gua fen dan shi t3 t4 wo ye bu hui a 	
} 
