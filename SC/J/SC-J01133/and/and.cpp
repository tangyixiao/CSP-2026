#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,a[N],m,p[31],ans;
bool b[N][31];
void fj(int x,int i){
	int cnt=0;
	while(x){
		b[i][++cnt]=x%2;
		x/=2;
	}
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) fj(a[i],i);
	m=n-m;p[0]=1;
	for(int i=1;i<=30;i++) p[i]=p[i-1]*2;
	for(int i=30;i>=1;i--){
		int sum=0;
		for(int j=1;j<=n;j++) sum+=!b[j][i];
		if(sum<=m){
			m-=sum;
			for(int j=1;j<=n;j++){
				if(!b[j][i]){
					for(int k=i-1;k>=1;k--) b[j][k]=1;
				}
			}
			ans+=p[i-1];
		}
	}
	cout<<ans;
	return 0;
}