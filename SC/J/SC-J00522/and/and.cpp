#include<bits/stdc++.h>
using namespace std;
int n,m,a[3000000],ans;
void f(int t,int v,int cnt ){
	if(t>n){
		if(v==m)ans=max(ans,cnt);
		return;
	}
	if(n-t+1<m-v)return;
	if(v==m){
		ans=max(ans,cnt);
		return;
	}
	if(cnt<=ans)return;
	
	f(t+1,v,cnt);
	if(v<m){
		
		f(t+1,v+1,cnt&a[t]);
	}
}
signed main(){
	ios::sync_with_stdio(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=10000){
		for(int i=1;i<=n-m+1;i++)f(i+1,1,a[i]);
		cout<<ans;
	}else{
		int n1=1, k=0;
		for(int i=1;n1<n;i++){
			n1*=2;
			k++;
		}
		sort(a+1,a+n+1);
		if(n1==n){
			ans=n-1;
			for(int i=1;i<=m;i++){
				ans&=n-i;
			}
			cout<<ans;
		}else cout<<a[n-m+1];
		
		
	}
	return 0;
}