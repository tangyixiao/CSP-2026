#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,m,now,ans,a[210000],b[210000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);//差点写成add……
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,greater<ll>());
	now=n;
	for(int i=29;i>=0;i--){
		ll cnt=0;
		for(int j=1;j<=now;j++)if((a[j]>>i)&1)cnt++;
		if(cnt<m)continue;
		else{
			now=cnt;
			ll d=0;
			for(int j=1;j<=now;j++){
				if((a[j]>>i)&1)b[++d]=a[j];
			}
			for(int j=1;j<=d;j++)a[j]=b[j];
			ans+=(1ll<<i);
		}
	}
	cout<<ans;
	return 0;
}