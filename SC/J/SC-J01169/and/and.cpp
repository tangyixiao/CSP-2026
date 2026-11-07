#include<bits/stdc++.h>
#define int long long
const int N=1e6+5;
int a[N];
int ans=0;
int n,m;
int maxx(int a,int b){
	if(a>b)return a;
	else return b;
}
void dfs(int x,int cnt,int h){
	if(x>n){
		if(h==m)ans=maxx(ans,cnt);
		return ;
	}
	if(h>=m)return;
	if(h<m){
		dfs(x+1,cnt&a[x],h+1);
	}
	dfs(x+1,cnt,h);
}
using namespace std;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int gh=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		gh=max(a[i],gh);
	}
	if(m==1){
		cout<<gh<<endl;
		return 0;
	}else if(m==2){
		int df=-1;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				df=max(df,a[i]&a[j]);
			}
		}
		cout<<df<<endl;
		return 0;
	}else if(m==n){
		int hj=a[1];
		for(int i=2;i<=m;i++){
			hj=hj&a[i];
		}
		cout<<hj<<endl;
		return 0;
	}
	int mx=1;
	for(int i=1;i<=31;i++){
		int h=1;
		for(int j=1;j<=i;j++){
			h*=2;
		}
		mx+=h;
	}
	if(m==n-1){
		int dc=mx;
		for(int i=1;i<=n;i++){
			dc=dc&a[i];
		}
		int ans1=0;
		for(int i=1;i<=n;i++){
			ans1=max(ans1,dc&a[i]);
		}
		cout<<ans1<<endl;
		return 0;
	}
	dfs(1,mx,0);
	cout<<ans<<endl;
	return 0;
}