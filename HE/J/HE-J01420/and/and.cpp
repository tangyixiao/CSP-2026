#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
ll a[N];
ll n,m;
ll f(ll a,ll b,ll c){
	if(a==n||c==m)return b;
	for(int i=a;i<=n;i++){
		b=max(b,f(i,b,c+1));
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(ll i=1;i<=n;i++)cin>>a[i];
	if(n==m){
		ll o=0;
		for(ll i=1;i<=n;i++){
			o=o&a[i];
		}
		cout<<o;
	}
	if(m==1){
		ll o=0;
		for(ll i=1;i<=n;i++){
			o=max(a[i],o);
		}
		cout<<o;
	}
	sort(a+1,a+n+1);
	if(m==2){
		ll o=0;
		
		o=a[n]&a[n-1];
		cout<<o;
	}
	else if(m<=20)cout<<f(0,0,0);
	else cout<<(a[n]&a[n-1]);
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
