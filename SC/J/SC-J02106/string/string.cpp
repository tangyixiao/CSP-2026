#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+1e3;
int n,m,ans,l=0,r=0,il=1,ir,el,er,a[N],len=0;
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	ir=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	for(;l+r<=len*2;){
//		cout<<l<<" "<<r<<endl;
		if(el==0){
			el=a[il];
			il++;
		}
		if(er==0){
			er=a[ir];
			ir--;
		}
		l+=min(el,er);
		r+=min(el,er);
		if(el==er){
			ans+=el*(c[il-1]!=c[ir+1]);
			el=er=0;
		}else if(el<er){
			ans+=el*(c[il-1]!=c[ir+1]);
			er-=el;
			el=0;
		}else{
			ans+=er*(c[il-1]!=c[ir+1]);
			el-=er;
			er=0;
		}
	}
	cout<<ans/2;
	return 0;
}