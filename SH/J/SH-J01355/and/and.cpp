#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int ans=-1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	ans=a[0]&a[1];
	if(m==n){
		for(int i=2;i<n;i++){
			ans=ans&a[i];
		}
	}else{
		for(int i=0;i<n-1;i++){
			ans=max(ans,a[i]&a[i+1]);
		}
	}
	cout<<ans;
	return 0;
}
