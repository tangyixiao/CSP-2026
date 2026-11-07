#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005],tot[200005],ans=0,mx=0;
bool vis[200005]={1};
string b[200005];
bool cmp(int x,int y){
	return x>y;
}
void solve1(){
	for(int i=1;i<=n;i++) ans=max(ans,a[i]);
	cout<<ans<<"\n";
	return;
}
void solve2(){
	ans=a[1];
	for(int i=2;i<=n;i++) ans&=a[i];
	cout<<ans<<"\n";
	return;
}
void x(int i){
	if(i==mx+1){
		cout<<(1<<mx)-1;
		return;
	}
	int sum=0;
	for(int j=1;j<=n;j++){
		if(b[j][i]=='1'&&vis[j]==1){
			sum++;
		}
		else vis[j]=0;
	}
	if(sum<m){
		if(i==mx){
			cout<<ans<<"\n";
			return;
		}
		x(i+1);
	}
	else if(sum==m){
		bool fl=1;
		for(int j=1;j<=n;j++){
			if(vis[j]==1&&fl==1){
				ans=a[j];
				fl=0;
			}
			if(vis[j]==1&&fl==0) ans=ans&a[j];
		}
		cout<<ans<<"\n";
		return;
	}
	else{
		ans+=(1<<(mx-i));
		x(i+1);
	}
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) vis[i]=1; 
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1){
		solve1();
		return 0;
	}
	if(m==n){
		solve2();
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		int x=a[i];
		while(x){
			b[i][++tot[i]]=x%2+48;
			x/=2;
		}
	}
	for(int i=1;i<=n;i++) mx=max(mx,tot[i]);
	for(int i=1;i<=n;i++) for(int j=1;j<=mx/2;j++) swap(b[i][j],b[i][tot[i]-j+1]);
	x(1);
	return 0;
}

