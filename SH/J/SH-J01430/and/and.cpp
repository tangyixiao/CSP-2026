#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int n,m;
long long a[2000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	long long w = a[n];
	for (int  i = n-1;i >= n-m+1;i--){
		w = a[i] & w;
	}
	cout << w;
	return 0;
}
