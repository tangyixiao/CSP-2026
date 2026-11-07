#include<bits/stdc++.h>
#define ll long long
//#define ld long double
//#define d double
using namespace std;
const int N=2e5+10;
ll n,m,ans=1,a[N];
bool cmp(ll a,ll b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n,cmp);
	ans=a[1];
	for(int i=2;i<=m;i++) ans=(ans&a[i]);
	cout<<ans<<'\n';
	return 0;
}
//  Trick||Treat!
