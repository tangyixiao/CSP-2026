#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5 + 86;
ll n,a[N],c[N],len,ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1;i <= n;i++){
		cin>>a[i];
		char x;
		cin>>x;
		c[i] = (ll)x;
		len += a[i];
	}
	ll l = 0,r = 0,i = 1,j = n;
	while(l <= len / 2 && r <= len / 2 && i <= n && j >= 0){
		if(r == len / 2){
			if(c[i] == c[j]) l += min(len / 2 - l,a[i]);
			else ans += min(len / 2 - l,a[i]),l += min(len / 2 - l,a[i]);
			i++;
		}
		else if(l == len / 2){
			if(c[j] == c[i]) r += min(len / 2 - r,a[j]);
			else ans += min(len / 2 - r,a[j]),r += min(len / 2 - r,a[j]);
			j--;
		}
		else{
			if(c[j] == c[i]) l += min(len / 2 - l,a[i]),r += min(len / 2 - r,a[j]);
			else ans += min(min(len / 2 - l,a[i]),min(len / 2 - r,a[j])),l += min(len / 2 - l,a[i]),r += min(len / 2 - r,a[j]);
			if(l < len / 2) i++;
			if(r < len / 2) j--;
		}
		//cout<<ans<<' '<<l<<' '<<r<<endl;
	}
	cout<<ans;
	return 0;
}
