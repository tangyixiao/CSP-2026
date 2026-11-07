#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<tuple>
typedef long long ll;
using namespace std;
class tle{public:ll l,r;char c;};
ll n,m,rs,ans;vector<tle> qj;
int main(){
	freopen("string.in","r",stdin);freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;for(ll i=0;i<n;i++){
		ll a;char b;cin>>a>>b;m+=a;
		if(qj.empty())qj.push_back({1ll,a,b});
		else{
			ll v=qj.back().r;
			qj.push_back({v+1,v+a,b});
		}
	}rs=n-1;
	for(ll i=0;i<n;i++){
		ll l1=qj[i].l,r1=qj[i].r,s1=qj[i].c;
		if(rs<=i||l1>m/2)break;
		if(r1>m/2){
			ll dy=m-r1+1;
			if(dy<=l1)break;
			else r1=dy-1;
		}
		ll dyl=m-l1+1,dyr=m-r1+1;
		while(true){
			if(rs<=i)break;
			ll l2=qj[rs].l,r2=qj[rs].r,s2=qj[rs].c;
			if(l2>dyl)rs--;
			else if(l2>=dyr||r2>=dyr){
				ans+=(min(r2,dyl)-max(l2,dyr)+1)*(s2!=s1);
				rs--;
			}else if(r2<dyr){
				rs+=(r2!=dyr-1);
				break;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}