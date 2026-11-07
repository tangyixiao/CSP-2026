#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	long long a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	long long ans=0;
	for(long long i=1;i<=n;i++){
		for(long long j=1;j<=n;j++){
			if(a[i]==a[j])continue;
			if(a[i]&a[j]>=ans){
				ans=a[i]&a[j];
			}
		}
	}
	cout<<ans;
	return 0;
}
