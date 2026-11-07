#include <bits/stdc++.h>
using namespace std;

int m, n, a[200000], ans1=0, ans2=0;

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin.tie(NULL);
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int count=0;count<n-m;count++){
		if(__builtin_popcount(a[i])>ans1)ans1=__builtin_popcount(a[i]);
	}
	for(int count=0;count<n-m;count++){
		if(__builtin_popcount(a[i])>ans2&&__builtin_popcount(a[i])<ans1)ans2=__builtin_popcount(a[i]);
	}
	cout<<ans1&ans2;
}