#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans=-1,mx=-1;
void dfs(int i,int cnt,int s){
	if(cnt==m){
		ans=max(ans,s);
		return;
	}
	for(int j=i;j+m-cnt<=n;j++) dfs(j+1,cnt+1,s&a[j]);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	if(m==n){
		int ans=a[0];
		for(int i=1;i<n;i++) ans=ans&a[i];
	}
	else if(mx<=3){
		int cnt1=0,cnt2=0;
		for(int i=0;i<n;i++){
			if(a[i]==3) cnt1++;
			if(a[i]==2) cnt2++;
		}
		if(cnt1>=m) ans=3;
		else if(cnt1+cnt2>=m) ans=2;
		else ans=1;
	}
	else for(int i=0;i+m<=n;i++) dfs(i+1,1,a[i]);
	cout<<ans;
	return 0;
}