#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200010];
long long ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	long long t;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			t=a[i]&a[j];
		}
		ans=max(ans,t);
	}
	cout<<ans;
	return 0;
}