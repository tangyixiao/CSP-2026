#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5 + 5,P = 30; 
ll n,m,s[32],t[32][N],x,sum,vis[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>x;
		for(ll j=P;j>=0;j--){
			if((x>>j)&1){
				s[j]++,t[j][i]=1;
			}
		}
	}
	for(ll i=P;i>=0;i--){
		if(s[i]>=m){
			sum+=(1<<i);
			for(ll j=1;j<=n;j++){
				if(vis[j]) continue;
				if(t[i][j]) continue;
				vis[j]=1;
				for(ll k=i-1;k>=0;k--) if(t[k][j]) s[k]--;
			}
		}else continue;
	}
	cout<<sum;
	return 0;
}