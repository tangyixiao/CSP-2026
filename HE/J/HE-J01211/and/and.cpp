#include<bits/stdc++.h>
using namespace std;
int n,m,d,a[1000005],b[1000005];
int cmp(int a,int b) {
	return a>b;
}
/*
4 2
3 15 12 12
Trick||Treat!
5 3
31 3 1 15 7
*/
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i = 0; i<n; i++) {
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	cout<<a[m-1]<<" ";

	return 0;
}
