#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define st string
const ll N=1e6+5;
struct flag{
	ll num;
	st zi;
}a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	ll n,l=0,mmax=0,sum=0,p=1;
	cin>>n;
	st s="";
	for(ll i=1;i<=n;i++) cin>>a[i].num>>a[i].zi;
	for(ll i=2;i<=n;i++) if(a[i-1].zi==a[i].zi) p++;
	for(ll i=1;i<=n;i++){
		if(a[i].num>mmax){
			mmax=a[i].num;
			l=i;
		}
	}
	for(ll i=1;i<=n;i++) if(a[i].zi==a[l].zi) sum++;
	if(p!=n) cout<<sum*mmax;
	else cout<<0;
	return 0;
}