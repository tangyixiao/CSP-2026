#include<bits/stdc++.h>
using namespace std;
int n,m;
int ans=0;
int u;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	ans=a[n-m+1];
	cout<<ans;
	return 0;
} 