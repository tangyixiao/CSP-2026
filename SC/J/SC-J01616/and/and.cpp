#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200005]={},ans=0,t[25]={};
void f(int x){
	if(x==m+1){
		int h=t[1];
		for(int i=2;i<=m;i++) h&=t[i];
		ans=max(ans,h);
		return;
	}
	for(int i=t[x-1]+1;i<n;i++){
		t[x]=a[i];
		f(x+1);
	}
	return;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	if(m==1){
		for(int i=0;i<n;i++) ans=max(ans,a[i]);
		cout<<ans;
	}else if(m==n){
		ans=a[0];
		for(int i=1;i<n;i++) ans&=a[i];
		cout<<ans;
	}else if(m==2){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++) ans=max(ans,(a[i]&a[j]));
		}
		cout<<ans;
	}else if(n<=20){
		t[0]=-1;
		f(1);
		cout<<ans;
	}else cout<<0;
	return 0;
}