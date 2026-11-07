#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN=2e5+10;
ll n,a[MAXN];
char c[MAXN];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	ll ls=1,rs=n,ans=0;
	while(ls<rs){
		if(c[ls]==c[rs]){
			if(a[ls]>=a[rs])a[ls]-=a[rs--];
			else a[rs]-=a[ls++];
		}else{
			if(a[ls]>=a[rs])ans+=a[rs],a[ls]-=a[rs--];
			else ans+=a[ls],a[rs]-=a[ls++];
		}
		//cout<<ls<<' '<<rs<<" "<<ans<<'\n';
	}
	cout<<ans;
	return 0;
}

