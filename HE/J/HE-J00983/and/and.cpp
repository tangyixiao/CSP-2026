#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans;
int dp[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n);
	if(m==1) cout<<a[n];
	else if(m==2){
		int ans=0;
		for(int i=1;i<=n;i++){
			int w=a[i];
			for(int j=i+1;j<=n;j++) ans=max(ans,w&a[j]);
			cout<<w; 
		}
	}else if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++) ans=ans&a[i];
		cout<<ans;
	}else cout<<1;
	return 0;
}
