#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005];
long long ans=1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    if(n==1){
    	cout<<a[1];
    	return 0;
	}
    if(m==1){
    	sort(a+1,a+n+1);
    	cout<<a[n];
    	return 0; 
	}
	if(m==n){
		for(int i=1;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n&&i!=j;j++){
			long long js=a[i]&a[j];
			ans=max(ans,js);
		}
	}
	cout<<ans;
	return 0;
}
