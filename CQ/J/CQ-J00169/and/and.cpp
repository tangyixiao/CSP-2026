#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],mx;
void d(int e,int l,int q){
	if(e==m){
		mx=max(mx,q);
		return;
	}
	for(int i=l+1;i<=n;i++){
		d(e+1,i,q&a[i]);
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	d(0,0,INT_MAX);
	cout<<mx;
	return 0;
}

