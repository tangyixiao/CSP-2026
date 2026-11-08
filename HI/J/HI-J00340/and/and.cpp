#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in",r,stdin);
	freopen("and.out",w,stdout);
	int n,m,a[200005],mx=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	mx=max(a[i],mx);
	}
	cout<<mx;
	return 0;
}
