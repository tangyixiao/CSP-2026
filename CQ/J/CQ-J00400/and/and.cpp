#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll maxn=1e5+5;
const ll mod=1e9+7;
const ll inf=0x3f3f3f3f3f3f3f3f;
ll n,m;
ll a[maxn];
ll _max;
ll r[10];
ll c[50];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	c[0]=1;
	c[1]=2;
	for(int i=2;i<=30;i++){
		c[i]=c[i-1]*2;
	}
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		_max=max(_max,a[i]);
	}
	bool wn=0;
	for(int i=1;i<=n;i++){
		ll p=lower_bound(c,c+30,a[i]+1)-c;
		if(c[p]!=a[i]+1){
			wn=1;
			break;
		}
	}if(m==1){
		sort(a+1,a+1+n);
		cout<<a[n];
	}else if(m==n){
		ll ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
	}else if(m==2){
		ll ans=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ll t=a[i]&a[j];
				ans=max(ans,t);
			}
		}
		cout<<ans;
	}else if(_max<4){
		for(int i=1;i<=n;i++){
			r[a[i]]++;
		}if(r[3]>m){
			cout<<3;
		}else if(r[3]+r[1]>m){
			cout<<2;
		}else if(r[3]+r[2]>m){
			cout<<1;
		}else{
			cout<<0;
		}
	}else if(!wn){
		sort(a+1,a+1+n);
		cout<<a[n-m+1];
	}
	return 0;
}

