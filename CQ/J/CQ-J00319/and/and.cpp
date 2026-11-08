#include<bits/stdc++.h>
using namespace std;
#define int long long
const int RP=LLONG_MAX; 
int n,m;
int maxx;
int a[200005];
int p[200005],q[200005];
void dfs(int x,int y,int ans){
	if(x==n){
		if(y==m) maxx=max(maxx,ans);
		return;
	}
	dfs(x+1,y,ans);
	dfs(x+1,y+1,ans&a[x+1]); 
}
bool check1(int x){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if((a[i]&x)>=x) cnt++;
	}
	return cnt>=m;
}
bool check2(int x){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(a[i]>=x) cnt++;
	}
	return cnt>=m;
}
signed main(){
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1){
		for(int i=1;i<=n;i++) maxx=max(maxx,a[i]);
		cout<<maxx;
		return 0;
	}
	if(m==2&&n*n<=100000000){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++)	maxx=max(maxx,a[i]&a[j]);
		}
		cout<<maxx;
		return 0;
	}
	if(m==n){
		maxx=(1<<30)-1;
		for(int i=1;i<=n;i++) maxx&=a[i];
		cout<<maxx;
		return 0;
	}
	if(m==n-1){
		p[1]=a[1],q[n]=a[n];
		for(int i=2;i<=n;i++) p[i]=p[i-1]&a[i];
		for(int i=n-1;i>=1;i--) q[i]=q[i+1]&a[i];
		maxx=max(p[n-1],q[2]);
		for(int i=2;i<n;i++) maxx=max(maxx,p[i-1]&q[i+1]);
		cout<<maxx;
		return 0;
	}
	if(n<=20){
		dfs(0,0,(1<<30)-1);
		cout<<maxx;
		return 0;
	}
	for(int i=1;i<=n;i++) maxx=max(maxx,a[i]);
	if(maxx<=(1<<10)){
		for(int i=(1<<10);i>=0;i--){
			if(check1(i)){
				cout<<i;
				return 0;
			}
		}
	}
	int l=1,r=(1<<30);
	while(l<r){
		int mid=(l+r+1ll)>>1;
		if(check2(mid)) l=mid;
		else r=mid-1;
	}
	cout<<l;
	return 0;
} 
