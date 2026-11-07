#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,a[400005];
char ch[400005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i = 1; i <= n; i++){
		scanf("%lld %c",&a[i],&ch[i]);
	}
	ll l=1,r=n,ans=0;
	while(l<=r){
		if(ch[l]==ch[r]){
		//	cout<<"dbg3 "<<l<<' '<<r<<' '<<a[l]<<' '<<a[r]<<'\n';
			ll lll=a[l],rrr=a[r];
			a[l]-=min(lll,rrr);
			a[r]-=min(rrr,lll);
		//	cout<<"dbg4 "<<l<<' '<<r<<' '<<a[l]<<' '<<a[r]<<'\n';
		}
		else{
		//	cout<<l<<' '<<r<<' '<<a[l]<<' '<<a[r]<<'\n';
			ans+=min(a[l],a[r]);
			ll lll=a[l],rrr=a[r];
			a[r]-=min(lll,rrr);
			a[l]-=min(lll,rrr);
		//	cout<<"dbg2 "<<l<<' '<<r<<' '<<a[l]<<' '<<a[r]<<'\n';
		}
		if(a[l]<=0) l++;
		if(a[r]<=0) r--;
	}
	printf("%lld",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}