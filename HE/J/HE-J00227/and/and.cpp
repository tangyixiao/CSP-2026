#include<bits/stdc++.h>
using namespace std;
#define ll long long




int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	ll a[n];
	cin >> n;
	ll r[n];
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	cout << a[n-m] and a[n-m+1];
	
	

	return 0;
}
