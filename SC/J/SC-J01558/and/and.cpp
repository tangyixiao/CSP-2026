#include<bits/stdc++.h>
#define int long long
#define double long double
#define fs(n) fixed<<setprecision(n)
using namespace std;
const int N=2e5+7;
int n,m,nc[N],t=32,th=0;
bool fl[N][38],ans[N],can[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int a,cnt=1;
		cin>>a;
		while(a){
			fl[i][cnt++]=(a%2==1?true:false);
			a/=2;
		}
	}
	for(;t>=1;t--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			can[j]=false;
			if(fl[j][t]){
				cnt++,can[j]=true;
			}
		}
		if(cnt>=m) break;
	}
	for(;t>=1;t--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			nc[j]=false;
			if(can[j]==false) continue;
			nc[j]=true;
			if(fl[j][t]){
				cnt++;
			}else{
				nc[j]=false;
			}
		}
		if(cnt>=m){
			for(int j=1;j<=n;j++) can[j]=nc[j];
			ans[t]=true;
		}
	}
	for(int i=32;i>=1;i--){
		th*=2;
		if(ans[i]) th++;
	}
	cout<<th;
	return 0;
} 