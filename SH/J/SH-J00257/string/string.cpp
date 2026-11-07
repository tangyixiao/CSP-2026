#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll a[200005];
char c[200005];
ll len=0,ans=0;
struct str{
	ll l,r;
	char c1;
} s[200005];
bool vis[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
		if(c[i]==c[i-1]){
			a[i-1]+=a[i];
			i--;
			n--;
		}
	}
	ll nw=1;
	for(ll i=1;i<=n;i++){
		s[i].l=nw;
		nw+=a[i];
		s[i].r=nw-1;
		s[i].c1=c[i];
		if((len%2)&&((s[i].l<=(len+1)/2)&&(s[i].r>=(len+1)/2))){
			len--;
			nw--;
			a[i]--;
			s[i].r--;
		}
	}
	ll l=1,r=n;
	nw=1;
	for(;l<=n&&s[l].r<=len/2;l++){
		if(abs(len-s[r].l+1)<s[l].l||r>n)r--;
		nw=s[l].l;
		while(abs(len-s[r].r+1)<=s[l].r){
			if(s[l].c1!=s[r].c1){
				ans+=abs(min(abs(len-s[r].l+1),s[l].r)-nw+1);
			}
			nw=min(abs(len-s[r].l+1),s[l].r)+1;
			vis[r]=1;
			r--;
		}
		r++;
	}
	if(s[l].l<=len/2&&s[l].r>len/2&&!vis[l])ans+=abs(s[l].l-abs(len-s[l].r+1));
	cout<<ans<<endl;
	return 0;
}
