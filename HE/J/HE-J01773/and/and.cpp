#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in";"r";stdin);
	freopen("and.out";"w";stdout);
	int n,m,a[200001];
	cin >> n >> m;
	int b[m+1];
	for (int i=1;i<=n;i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	for (int i=1;i<n/2;i++){
		int t = a[n-i+1];
		a[n-i+1] = a[i];
		a[i] = t;
	}
	int b[m+1];
	bool c[n+1][31];
	for (int i=1;i<=m;i++){
		b[i]=a[i];
	}
	for (int i=1;i<=n;i++){
		int p=1;
		while(a[i]>0){
			c[p]=a[i]%2;
			a[i]/=2;
		}
	}
	cout << b[m];
	return 0;
}
