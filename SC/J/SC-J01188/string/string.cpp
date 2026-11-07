#include<bits/stdc++.h>
using namespace std;
using ll=long long;
struct ck{
	ll a;
	char c;
};
ck b[200002];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n,cnt=0;
	cin>>n;
	for(ll i=1;i<=n;i++) cin>>b[i].a>>b[i].c;
	ll l=1,r=n;
	while(l<r){
		if(b[l].a==0) l++;
		if(b[r].a==0) r--;
		if(b[r].c!=b[l].c&&b[r].a>=b[l].a){
			cnt+=b[l].a;
			b[r].a-=b[l].a;
			b[l].a=0;
		}
		else if(b[r].c!=b[l].c&&b[r].a<b[l].a){
			cnt+=b[r].a;
			b[l].a-=b[r].a;
			b[r].a=0;
		}
		else if(b[r].a<b[l].a){
			b[l].a-=b[r].a;
			b[r].a=0;
		}
		else{
			b[r].a-=b[l].a;
			b[l].a=0;
		}
	}
	cout<<cnt;
	return 0;
}