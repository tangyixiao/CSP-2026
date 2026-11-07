#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n, m;
long long a, f[N];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin>>n>>m;
	for(int i=0; i<=m; i++) 
		f[0]=INT_MAX;
	for(int i=1; i<=n; i++) {
		cin>>a;
		for(int j=m; j>=1; j--) {
			f[j]=max(f[j], f[j-1]&a);
		}
	}
	cout<<f[m];
	return 0;
}
