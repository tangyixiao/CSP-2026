#include<bits/stdc++.h>
using namespace std;

long long n, m, ans; 
long long a[10000005];

int main(){
	
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n);
	ans = a[n-1];
	for(int i=n-1;i>n-m-1;i--){
		ans = (ans & a[i]);
	}
	cout<<ans;
	
	
	return 0;
} 
