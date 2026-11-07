#include<bits/stdc++.h>
using namespace std;
const int N=200005;
int n;
int a[N];
char c[N];
long long ans;
long long cnt1,cnt2;
long long len;
long long tot;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		cin>>c[i];
		len+=a[i];
	}
	int l=0,r=n+1;
	int k1=0,k2=0;
	while(1)
	{
		if(k1==0)
		{
			k1=a[++l];
				
		}
		if(k2==0)
		{
			k2=a[--r];
		}
		if(l>=r)break;
		tot=min(k1,k2);
		if(c[l]==c[r])
		{
			k1-=tot;
			k2-=tot;
		}
		else
		{
			ans+=tot;
			k1-=tot;
			k2-=tot;
		}
	}
	cout<<ans;
	return 0;
} 
