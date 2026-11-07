#include<bits/stdc++.h>
#define endl '\n'
#define N 200005
using namespace std;
int n,m,a[N][40],x,ans;
bool v[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x;
		int cnt=0;
		while(x){
			a[i][cnt++]=x&1;
			x>>=1;
		}
	}
	for(int i=30;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(v[j]) continue;
			cnt+=a[j][i];
		}
		if(cnt<m) continue;
		ans|=(1<<i);
		for(int j=1;j<=n;j++)
			if(!a[j][i])
				v[j]=1;
	}
	cout<<ans;
	return 0;
}
/*

*/