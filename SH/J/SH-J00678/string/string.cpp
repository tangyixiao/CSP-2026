#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll maxn=1e5;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll a[maxn];
	string c[maxn];
	ll n;
	cin>>n;
	string key;
	ll cnt=0;
	for(ll i=0;i<n;i++)cin>>a[i]>>c[i];
	for(ll i=0;i<n;i++){
		for(ll j=0;j<a[i];j++){
			key+=c[i];
			cnt++;
		}
	}
	ll res=0;
	for(ll i=0,j=cnt-1;i<cnt,j>=i;i++,j--){
		if(key[i]==key[j])cnt+=0;
		else res++;
	}
	cout<<res;
	return 0;
}
