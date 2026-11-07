#include<bits/stdc++.h>
using namespace std;
int n,m,a[10010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","r",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	if(m==1)cout<<a[n];
	else cout<<a[n-m];
	return 0;
}
