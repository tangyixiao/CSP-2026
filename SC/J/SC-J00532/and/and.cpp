#include<bits/stdc++.h>
using namespace std;
long long a[9999999],maxs=0,n,m;
void an(int n,int m){
	if(n==0||m==0){
		return;
	}
	for(int i=n;i>=0;i--){
		maxs=max(maxs,a[i]&a[i-1]);
		an(n-1,m-1);
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	an(n,m);
	cout<<maxs;
	return 0;
}