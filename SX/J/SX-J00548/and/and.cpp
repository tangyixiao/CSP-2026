#include <bits/stdc++.h>
using namespace std;
const int N=200500;
long long a[N],n,cnt,ans,m;
string b;
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin>>n>>m;
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=n-1;i>=n-m;i--){
		a[i-1]=a[i]&a[i-1];
	}
	cout<<a[n-m];
	return 0;
}
