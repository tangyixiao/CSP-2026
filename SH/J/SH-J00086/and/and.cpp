#include<bits/stdc++.h>
#define pc __builtin_popcountll
#define endl '\n'
typedef long long ll;
typedef double db;
using namespace std;
const ll N=2e5+9,INF=0x3f3f3f3f;
ll n,m,a[N],f[2][N],p;
bool cmp(ll &x,ll &y){
	return pc(x)==pc(y)?x>y:pc(x)>pc(y);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++) cin>>a[i];
//	for(ll i=1;i<=n;i++){
//		p=i&1;
//		f[p][1]=*max_element(a+1,a+i+1);
//		for(ll j=2;j<=i;j++){
//			f[p][j]=max(f[!p][j],f[!p][j-1]&a[i]);
//		}
//	}
//	cout<<f[n&1][m]<<endl;
//	return 0;
	sort(a+1,a+n+1,cmp); ll ans=a[1];
	for(ll i=2;i<=m;i++){
		ans&=a[i];
	}
	cout<<ans<<endl;
	return 0;
}
//sto xiaoR&xiaoX orz
