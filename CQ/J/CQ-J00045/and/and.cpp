#include<bits/stdc++.h>
using namespace std;
bool f[200005];
int n,m,a[200005];
bool num[35];
void op(int k){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(!f[i] && (a[i]>>k)&1) cnt++;
	}
	if(cnt>=m){
		for(int i=1;i<=n;i++){
			if(!((a[i]>>k)&1)) f[i]=1;
		}
		num[k]=1;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=31;i>=0;i--) op(i);
	int ans=0,t=1;
	for(int i=0;i<=31;i++) ans+=t*num[i],t*=2;
	cout<<ans;
	return 0;
}
