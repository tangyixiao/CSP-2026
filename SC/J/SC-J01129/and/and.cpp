#include<bits/stdc++.h>
using namespace std;
int n,m;
bool vis[200005][35],num[200005];
long long a[200005],p[35];
long long ans;
void solve(int id,long long s){
	int cnt=0;
	while(s){
		if(s%2) vis[id][cnt]=1;
		s>>=1;
		cnt++;
	}
	return;
}
bool check(int pw){
	int now=0;
	for(int i=1;i<=n;i++){
		if(num[i]) continue;
		now+=(vis[i][pw]);
	}
	return now>=m;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	p[0]=1;
	for(int i=1;i<=30;i++) p[i]=p[i-1]*2;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		solve(i,a[i]);
	}
	for(int i=30;i>=0;i--){
		if(check(i)){
			ans+=p[i];
			for(int j=1;j<=n;j++) if(!vis[j][i]) num[j]=1;
		}
	}
	cout<<ans;
	return 0;
}