#include <bits/stdc++.h>
using namespace std;
bool cmb(int x,y){
	if(x<=y){
		return x;
	}
}
main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[10002];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a[1],a[i+1],cmb)
	cout<<a[m];
	return 0;
}
