#include<bits/stdc++.h>
using namespace std;
int n,m,x,wz,sl,ans,a[200005][40];
bool fl[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x,wz=1;
		while(x) a[i][wz]=x%2,wz++,x/=2;
	}
	for(int j=34;j>=1;j--){
		sl=0;
		for(int i=1;i<=n;i++){
			if(fl[i]) continue;
			if(a[i][j]) sl++;
		}
		if(sl<m) continue;
		for(int i=1;i<=n;i++) if(fl[i]||!a[i][j]) fl[i]=1;
		ans+=(1<<(j-1));
	}
	cout<<ans;
	return 0;
}
