#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int N = 2e5+5;
int n,m,ans=2147483647;
long long a[N];
long long cnt[32];
long long change=0;//每一位上1的数量 
bool cmp(int a,int b)
{
	return a > b;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		int x = a[i],j=0;
		while(x)
		{
			if(x & 1)	cnt[j]++;
			x >>= 1;j++;
		}
	}
	for(int i = 30;i>=0;i--)
	{
		if(cnt[i] >= m)	change += 1<<i;
	}
	for(int i = 0;i<n;i++)
	{
		a[i] &= change;
	}
	sort(a,a+n,cmp);
	for(int i = 0;i<m;i++)
	{
		ans &= a[i];
	}
	cout << ans;
}