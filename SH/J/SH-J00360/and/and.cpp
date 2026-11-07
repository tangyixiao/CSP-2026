#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int n,m;
long long ans;
long long a[200010];
bool cmp(int x, int y)
{
	return x > y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
	sort(a+1,a+1+n,cmp);
	ans = a[1];
	for(int i = 2 ; i <= m ; i++)
	{
		cout << ans << '&' << a[i] << endl;
		ans = ans&a[i]; 
	}
	cout << ans;
} 
