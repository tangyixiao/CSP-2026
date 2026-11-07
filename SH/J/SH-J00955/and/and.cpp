#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,ans=0;
ll a[200005];
ll jz(ll x){
	ll js=0,p=1;
	while(x>p){
		p*=2;
	}
	while(x>0||p!=0){
		js*=10;
		if(x>=p){
			js++;
			x-=p; 
		}
		p/=2;
	}
	return js;
}
ll zdz(ll a,ll b){
	ll js[1005],i=1;
	while(a>=0&&b>=0){
		if(a%10==1&&b%10==1)	js[i]++;
		i++;
		if(a==0||b==0)	break ;
		a/=10;
		b/=10;
	}
	ll cnt=0, p=1;
	for(int j=1;j<=i;j++){
		cnt+=p*js[j];
		p*=2;
	}
	return jz(cnt);
}
ll hy(ll x){
	ll p=1,js=0;
	while(x>=0){
		if(x==0)	break ;
		js+=x%10*p;
		x/=10;
		p*=2;
	}
	return js;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]=jz(a[i]);
	}	
	for(int i=1;i<=n-m+1;i++){
		ll ans1=a[i];
		for(int j=i+1;j<=i+m-1;j++){
			if(j>n)	break;
			ans1=zdz(ans1,a[j]);
		}
		ans=max(ans,ans1);
	}
	cout<<hy(ans);
	return 0;
}
