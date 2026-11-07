#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n, m, a[N], ans=0; 
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) cin>>a[i];
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			for(int k=1; k<=n; k++){
			
			if(a[i] and a[j]>ans) ans=a[i] and a[j];
			else if(a[i]and a[j] and a[k]>ans) ans=a[i] and a[j];
		}
		}
	} 
	cout<<ans;
	return 0;
}
