#include <bits/stdc++.h>
using namespace std;
#define int long long
bool cmp(int x,int y){
	return x>y;
}
int a[200005],ans,p2[35];
void ms(){
	p2[0]=1;
	for(int i=1;i<=31;i++){
		p2[i]=p2[i-1]*2;
	}
}
bool ok(int x){
	for(int i=1;i<=31;i++){
		if(x==p2[i]) return 0;
	}
	return 1;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	ms();
	ans=p2[31]-1;
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(cnt==m) break;
		if(ok(a[i])==1){
			ans=ans&a[i];
			cnt++;
		}
	}
	if(cnt<m) cout<<0;
	else cout<<ans;
	return 0;
}