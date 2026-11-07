#include <bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(m==1){
		cout<<a[n];
		return 0;
	}
	long long ans=a[1]&a[2];
	if(m==n){
		for(int i=3;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	ans=0;
	for(int i=1;i<=n;i++){
		long long ma=a[i];
		for(int j=i+1;j<=i+m-1;j++){
			ma=ma&a[j];
		}
		ans=max(ans,ma);
	}
	cout<<ans;
	return 0;
} 
