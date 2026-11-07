#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200010];
int ans;
/*
int yu(int x){
	if(x==2){
		for(int i=1;i<=n;++i){
			for(int j=1)
		}
	}
	
}
*/
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	if(m==2){
		for(int i=1;i<=n;++i){
			for(int j=i+1;j<=n;++j){
				ans=max(ans,a[i]&a[j]);
			}
		}
	}
	cout<<ans;
	return 0;
}
