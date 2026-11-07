#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
const long long N=1e6+5,B=131;
ll n,m,k,t,sum=0,ans=0;
ll a[200005];
int ok(ll x){
	if(x%2!=0)return 0;
	ll y=1;
	while(y<x){
		y*=2;
	}
	if(y==x)return 1;
	else return 0;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	if(m==1){
		cout<<a[n];
		return 0;
	}
	ll cnt=0,x=-1;
	set<ll>st;
	for(int i=n;i>=1;i--){
		cnt++;
		if(ok(a[i])){
			cnt--;
			st.insert(a[i]);
		}else {
			if(x==-1)x=a[i];
			else x&=a[i];
		}
		if(cnt==m){
			cout<<x;//<<"\n"<<a[i-1]<<"\n"<<a[i-2];
			return 0;
		}
		//else cout<<a[i]<<"\n";
		//cout<<a[i]<<" ";
	}
	if(m-cnt>1){
		cout<<0;
	}else {
		//cout<<x<<"\n";
		for(auto p:st){
			ll o=x&p;
			//cout<<p<<" "<<o<<"\n";
			ans=max(ans,o);
		}
		cout<<ans;
	}
	return 0;
	
}
/*
4 2
3 15 12 12

12

-

5 3
31 3 1 15 7

7
-

5 3
2 4 8 55 66

2

RP++RP++RP++RP++RP++RP++RP++RP++RP++


*/
