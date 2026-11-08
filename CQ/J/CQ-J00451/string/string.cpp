#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[200005],r,cnt,sum,ans,cnt2;
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i],sum+=a[i];
	r=n;
	for(int i=1;i<=n;i++){
		cnt+=a[i];
		if(cnt>sum/2){
			while(r>i){
				if(c[r]!=c[i]) ans+=a[r];
				r--;
			}
			break;
		}
		else{
			while(a[r]+cnt2<=cnt){
				cnt2+=a[r];
				if(c[r]!=c[i]) ans+=a[r];
				r--;
			}
			if(cnt2!=cnt){
				a[r]-=(cnt-cnt2);
				if(c[r]!=c[i]) ans+=(cnt-cnt2);
				cnt2=cnt;
			}
		}
	}
	cout<<ans;
}

