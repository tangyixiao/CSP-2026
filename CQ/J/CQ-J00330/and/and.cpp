#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200007];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	long long ans=a[n];
	for(int i=n-m+1;i<=n;i++)ans=(ans&a[i]);
	cout<<ans;
	
} 
