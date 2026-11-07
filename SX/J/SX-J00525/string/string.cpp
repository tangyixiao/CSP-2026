#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAXN 999999999
ll a,n,t,l,r,h;
char c,w[MAXN];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=0;i<n;i++){
		cin>>a>>c;
		for(ll ans=0;ans<a;ans++){
			w[t]=c;
			t++;
		}
	}
	r=t-1;
	for(ll i=0;i<t/2;i++){
		if(w[l]!=w[r]){
			h++;l++;r--;
		}else{
			l++;r--;
		}
	}
	cout<<h;
	return 0;
}