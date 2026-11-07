#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int x=a[n];
	for(int i=n-1;i>=n-m+1;i--){
		x=(x&a[i]);
	}
	cout <<x;
	return 0;
}
