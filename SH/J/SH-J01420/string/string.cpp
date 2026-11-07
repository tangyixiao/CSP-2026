#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int N=2e5+5;
ll n,len,a[N],ans;
char c[N];
string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	ll l=1,r=len,lid=1,rid=n,mid=(len+1)/2;
	while(l<=mid&&r>=mid){
		int nlen=min(a[lid],a[rid]);
		a[lid]-=nlen,a[rid]-=nlen;
		l+=nlen,r-=nlen;
		if(c[lid]!=c[rid])ans+=nlen;
		if(a[lid]==0)lid++;
		if(a[rid]==0)rid--;
	}
	cout<<ans;
	return 0;
}
