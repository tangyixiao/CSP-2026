#include<bits/stdc++.h>
using namespace std;
long long n,m,a[300000],ma;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=n;i>=n-m+1;i--){
		ma=a[i];
		a[i]=a[i]&&a[i-1];
	}
	cout<<ma;
	return 0;
} 
