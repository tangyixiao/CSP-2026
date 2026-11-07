#include <bits/stdc++.h>
using namespace std;

const int MAX=2e5 + 3;
long long a[MAX];

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
		cin >> a[i];
	
	long long ans;
	
	sort(a+1, a+1+n);
	int k=n-m+1;
	ans = a[k];
	cout << ans;
	return 0;
}