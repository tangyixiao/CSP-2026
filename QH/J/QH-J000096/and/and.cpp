#include <bits/stdc++.h>
#include <cstdio>
using namespace std; 
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,b;
	int a[101];
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		b=max(a[i] and a[i+1]);
	}
	cout << b;
	return 0;
}
