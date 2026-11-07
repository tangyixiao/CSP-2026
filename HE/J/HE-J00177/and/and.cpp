#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;

unsigned int n,m;
unsigned long long a[200002];
bool cmp1(int x,int y)
{
	ull cnt1=0,cnt2=0,i=1;
	while(x||y)
	{
		cnt1 += (x%2)*i;
		x/=2;
		cnt2 += (y%2)*i;
		y/=2;
		i*=10;
	}
	return cnt1>cnt2;
}
bool cmp2(int x,int y)
{
	ull cnt1=0,cnt2=0;
	while(x||y)
	{
		cnt1 += (x%2);
		x/=2;
		cnt2 += (y%2);
		y/=2;
	}
	return cnt1>cnt2;
}
bool cmp3(int x,int y)
{
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	sort(a+1,a+1+n,cmp3);
	unsigned long long ans=a[1];
	for(int i=2;i<=m;i++)
	{
//		cout << ans << ' ';
		ans &= a[i];
		if(ans==0) break;
	}
	cout << ans;
	return 0;
}

