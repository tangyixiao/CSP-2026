#include<bits/stdc++.h>
using namespace std;
int a[10010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,m,ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}
	else if(m==n){
		for(int i=2;i<=n;i++){
			a[i]=a[i-1]&a[i];
		}
		cout<<a[n];
		return 0;
	}
	return 0;
}
