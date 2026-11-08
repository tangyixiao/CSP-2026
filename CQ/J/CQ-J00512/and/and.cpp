#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,m,a[200005],maxx=-1,ans; 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
	}
	if(m==1){
		cout<<maxx;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ll hh=a[i]&a[j];
				ans=-1;
				ans=max(ans,hh);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++) ans=ans&a[i];
		cout<<ans;
		return 0;
	}
	sort(a+1,a+n+1);
	ans=a[n];
	for(int i=1;i<m;i++) ans=ans&a[n-i];
	cout<<ans;
	return 0;
}
