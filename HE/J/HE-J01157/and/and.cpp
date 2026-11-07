#include<bits/stdc++.h>
using namespace std;
const int N=200010;
long long n, m;
long long a[N];
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a, a+n);
	long long res=1000000;
	for(int i=n-1; i>=n-m; i--){
		res=min(res, a[i]);
	}
	cout<<res;
	return 0;
}
