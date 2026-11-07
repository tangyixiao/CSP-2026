#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cout.tie(0),cin.tie(0);
	
	long long n,m,ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	ans=a[n];
	if(m==1){
		ans=a[n];
	}
	else if(m==2){
		ans=max(a[n]&a[n-1],a[n]&a[n-2]);
	}
	else if(n==m){
		for(int i=1;i<=n;i++){
			ans&=a[i];
		}
	}
	else if(m==n-1){
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
	}else{
		for(int i=n-1;i>=n-m+1;i--){
			ans&=a[i];
		}
	}
	cout<<ans;
	return 0;
} 
