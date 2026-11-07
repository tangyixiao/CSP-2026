#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n,ans=0,k=n-2;
	int a[200005];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	ans=a[n]|a[n-1];
	for(int i=1;i<m;i++){
		ans=ans|a[k];
		k--;
	}
	cout<<ans;
	return 0;
}