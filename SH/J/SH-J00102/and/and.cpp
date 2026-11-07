#include<bits/stdc++.h>
using namespace std;
long long a[200005];
int n,m;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	sort(a + 1,a + n + 1);
	int ans = 2147483647;
	for(int i = n;i >= n - m + 1;i--){
		ans &= a[i];
	}
	cout << ans;
	return 0;
}
