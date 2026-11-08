#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll bin(ll n){
	ll b=1,sum=0;
	while(n){
		ll x=n%2;
		sum+=x*pow(10,b-1);
		n/=2;
		b++;
	}
	return sum;
}
ll yu(ll x,ll y){
	ll a=bin(x),b=bin(y),ret=0,sum=0,c=0;
	while(max(a,b)){
		if(a%10&&b%10)
			sum+=pow(10,c);
		c++;
		a/=10,b/=10;
	}
	for(int i=1;i<=c;i++){
		if(sum%10)
			ret+=pow(2,i-1);
		sum/=10;
	}
	return ret;
}
ll n,m,a[200005],ans;
ll p=0,s[200005]={};
void ss(ll k,ll t){
	if(k==m+1){
		ans=max(ans,p);
		p=0,t=0;
	}
	for(int i=t+1;i<=n;i++){
		if(s[i]==0){
			if(t){
				if(!p)
					p+=yu(a[t],a[i]);
				else
					p=yu(p,a[i]);
			}
			s[i]=1;
			ss(k+1,i);
			s[i]=0;
		}
	}
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	ss(1,0);
	cout<<ans;
	return 0;
}
