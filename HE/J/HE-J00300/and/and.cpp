#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
long long ans = 0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n<=20||m==2){
		for(int i=1;i<=n-m+1;i++){
			long long cur = a[i];
			for(int j=0;j<=m;j++){
//				cout<<cur<<' ';
				cur = cur&a[i+j];
//				cout<<a[i+j]<<'\n';
			}
//			cout<<cur<<'\n';
			ans = max(ans,cur);
		}
		cout<<ans;
		return 0;
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			ans = max(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		for(int i=1;i<=n;i++){
			ans = ans & a[i];
		}
		cout<<ans;
		return 0;
	}
	return 0;
}

