#include<bits/stdc++.h>
using namespace std;
int n,m,a[200003],ans1,mx=-INT_MAX;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i==1) ans1=a[1];
		ans1&=a[i];
		mx=max(mx,a[i]);
	}
	if(m==1){
		cout<<mx;
		return 0;
	}
	else if(m==n){
		cout<<ans1;
		return 0;
	}
	else{
		cout<<mx;
		return 0;
	}
	return 0;
}
/*

*/