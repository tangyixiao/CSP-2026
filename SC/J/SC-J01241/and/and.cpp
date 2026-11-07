#include<bits/stdc++.h>
#define int int
using namespace std;
const int N = 2e5+5;
int n, m, a[N], ans, num[50];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1; i <= n; i++){
		cin>>a[i];
		for(int j = 1; j <= 30; j++)
			if(a[i]&(1<<j)) num[j]++;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= 30; j++)
			if(num[j]<m) a[i]=(a[i]|(1<<j))-(1<<j);
	}
	sort(a+1, a+1+n);
	ans = a[n];
	for(int i = n-1; i > n-m; i--) 
		ans &= a[i];
	cout<<ans;
	
	return 0;
}  