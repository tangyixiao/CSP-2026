#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,x[210000],t,v[210000],maxt,ans=-1;
int a[210000][40];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		t=0;
		cin>>x[i];
		int c=x[i];
		v[i]=1;
		while(c!=0){
			t++;
			int y=c%2;
			if(y==1) a[i][t]++;
			c/=2;
		}
		maxt=max(maxt,t);
	}
	for(int i=maxt;i>=1;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(v[j]==0) continue;
			if(a[j][i]==1){
				cnt++;
			}
		}
		if(cnt>=m){
			for(int j=1;j<=n;j++){
				if(v[j]==0) continue;
				if(a[j][i]==0){
					v[j]=0;
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(v[i]==0) continue;
		if(ans==-1) ans=x[i];
		else ans&=x[i];
	}
	cout<<ans;
	return 0;
}