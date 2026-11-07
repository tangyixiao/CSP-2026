#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
ll n,a[N],ans=0,pre[N];
char ch[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i]>>ch[i];
		pre[i]=pre[i-1]+a[i];
	}
	ll st=1,ed=pre[n],ist=1,ied=n;
	for(ll i=0;i<(pre[n]/2);i+=0){
		ll jst=(pre[ist]-st+1),jed=(ed-pre[ied-1]);
		ll rj=min(jst,jed);
		if(ch[ist]!=ch[ied]) ans+=rj;
		st+=rj,ed-=rj;i+=rj;
		if(st>pre[ist]) ist++;
		if(ed<pre[ied-1]+1) ied--;
//		cout<<i<<",jump to"<<ist<<","<<ied<<endl;
	}
	cout<<ans;
	return 0;
}