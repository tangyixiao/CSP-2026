#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2*1e5+10;
struct az{
	int length;
	int kind;
}a[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    int n,lxy=0;
    char c;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i].length>>c,a[i].kind=c-'a'+1;
	int li=1,ri=n,lm=0,rm=0,ll,rl;
	while(li<ri){
		ll=a[li].length;
		rl=a[ri].length;
		ll-=lm,rl-=rm;
		if(a[li].kind!=a[ri].kind) lxy+=min(ll,rl);
		if(ll==rl) li++,ri--,lm=0,rm=0;
		if(ll>rl){
			ri--,rm=0;
			lm+=rl;
		}
		if(ll<rl){
			li++,lm=0;
			rm+=ll;
		}
	}
	cout<<lxy;
	return 0;
}