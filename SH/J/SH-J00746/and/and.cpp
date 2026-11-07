#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+9;
ll n,m;
int b[N][32];
ll a[N];
bool can[N];
void build(){
	for(int i=1;i<=n;i++){
		ll x=a[i];
		int cnt=1;
		while(x){
			b[i][cnt++]=x%2;
			x/=2;
		}
	}	
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	build();
	memset(can,1,sizeof(can));
	for(int i=31;i>=1;i--){
		int sum=0;
		for(int k=1;k<=n;k++) 
			if(can[k])
		        sum+=b[k][i];
		if(sum>=m){
			for(int k=1;k<=n;k++)
			    if(!b[k][i])
			        can[k]=0;
		}
	}
	ll ans=pow(2,31)-1;
	for(int i=1;i<=n;i++)
	    if(can[i])
	       ans=ans&a[i];
	cout<<ans;
	return 0;
}
