#include<bits/stdc++.h>
using namespace std;

const int MAXN=2e5+5;
int a[MAXN];
int n,m;

int bcnt(int z)
{
	int cnt=0;
	while(z)
	{
		z&=z-1;
		cnt++;
	}
	return cnt;
}

bool cmp(int x,int y)
{
	int b_x=bcnt(x),b_y=bcnt(y);
	return (b_x!=b_y)?(b_x>b_y):(x>y);
} 

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	int ans=a[1];
	for(int i=2;i<=m;i++)
	{
		ans&=a[i];
	}
	cout<<ans;
	return 0;
}
