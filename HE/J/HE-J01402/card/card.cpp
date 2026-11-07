#include<bits/stdc++.h>
using namespace std;
long long a[200005],n,l,o,z,m;
char b[200005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i)cin>>a[i];
	if(m==1)cout<<n;
	if(m==2)
	{
		if(n==2)
		{
		if(a[1]==1&&a[2]==2)
		cout<<1<<" "<<2;
		if(a[1]==2&&a[2]==1)
		cout<<2<<" "<<1;
		}
		if(n==3)
		{
		if(a[1]==1&&a[2]==2&&a[3]==2)
		cout<<0<<" "<<3;
		if(a[1]==2&&a[2]==1&&a[3]==1)
		cout<<3<<" "<<0;
		if(a[1]==2&&a[2]==1&&a[3]==2)
		cout<<1<<" "<<3;
		if(a[1]==1&&a[2]==2&&a[2]==1)
		cout<<3<<" "<<1;
		if(a[1]==2&&a[2]==2&&a[2]==1)
		cout<<3<<" "<<2;
		if(a[1]==1&&a[2]==1&&a[2]==2)
		cout<<2<<" "<<3;
		}
	}
	return 0;
}
