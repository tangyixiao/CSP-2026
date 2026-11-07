#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=200005;
char a[maxn];
int c[maxn],n;
int l,r,i,j,ans,tmp,L;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	L=0;
	for(int i=1;i<=n;i++){
		cin>>c[i]>>a[i];
		L+=c[i];
	}
	ans=0;
	l=0;
	r=c[n];
	i=1,j=n;
	tmp=(L>>1);
	int lst=0;
	for(;i<=n;i++){
		l+=c[i];
		if(l>tmp)l=tmp;
		if(r>=l){
			ans+=(a[j]!=a[i])*c[i];
		}
		else{
			while(l>r){
				ans+=(a[j]!=a[i])*min(r-lst,c[j]);
				--j;
				r+=c[j];
			}
			ans+=(a[j]!=a[i])*(l-r+c[j]);
		}
//		cerr<<i<<' '<<l<<' '<<j<<' '<<r<<' '<<ans<<' '<<tmp<<'\n';
		lst=l;
		if(l>=tmp)break;
	}
	cout<<ans<<'\n';
	return 0;
}