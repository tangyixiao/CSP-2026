#include<bits/stdc++.h>
#define int long long
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;cin>>n>>m;
	int a[n+2];
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,cmp);
	int max;
	for(int i=1;i<=m-1;i++)max=a[i]&a[i+1];
	cout<<max;
	return 0;
}