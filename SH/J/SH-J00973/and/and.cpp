#include <bits/stdc++.h>
using namespace std;
bool cmp(long long a,long long b)
{
	return a>b;
}
int main(){
	freopen("and3.in","r",stdin);
	//freopen("and.out","w",stdout);
	int n,m;
	long long a[200005];
	cin >> n >> m; 
	for(int i = 1;i <= n;i ++)
	{
		cin >> a[i];
	}
	sort(a+1,a+n+1,cmp);
	long long ans = a[1];
	cout << ans << a[2];
	for(int i = 1;i <= m;i ++)
	{
		ans = (ans&a[i]);
	}
	cout << ans;
	return 0;
}
