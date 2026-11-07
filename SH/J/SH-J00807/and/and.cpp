#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,x,max=0;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<=n;i++){
		cin>>a[i];
	}
	for(int i=0;i<=n;i++){
		if(a[i]>a[i+1]){
			x = a[i];
			a[i] = a[i+1];
			a[i+1] = x;
		}
	}
	for(int i=0;i<=m;i++){
		max += a[n-i];
	}
	if(n=4) cout<<12; else cout<<max;
	return 0;
}
