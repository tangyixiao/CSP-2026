#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=2e5;
ll n,ans;
char c[N];
ll a[N];//25min
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	ll l=1,r=n,ls=a[l],rs=a[r];
	while(l!=r){
		if(ls>rs){
			if(c[l]==c[r]){
				ls-=rs;
				r--; rs=a[r];
			}
			else{
				ans+=rs;
				ls-=rs;
				r--; rs=a[r];
			}
		}
		else{
			if(c[l]==c[r]){
				rs-=ls;
				l++; ls=a[l];
			}
			else{
				ans+=ls;
				rs-=ls;
				l++; ls=a[l];
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
