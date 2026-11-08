#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	long long maxn=0;
	int a[n];
	for(int i = 1;i<=n;i++) {
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i = 1;i<=n-m;i++){
		long long mx=a[i];
		for(int j = 2;j<=m;j++){
			mx&=a[j];
		}
		maxn=max(maxn,mx);
	}
	cout<<maxn;

	return 0;	
} 
