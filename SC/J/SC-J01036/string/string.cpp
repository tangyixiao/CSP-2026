#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=200100;
char c[N],z[2];
int x[N],n,l,res,p=0;
struct ___{int a,b,idx;}; vector<___> v;
signed main(){
	freopen("string.in","r",stdin),freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cin>>n;
	for(int i=1,sx=1;i<=n;i++) cin>>x[i]>>c[i],v.push_back({sx,c[i],0}),sx+=x[i];
	for(int i=n,sx=1;i>=1;i--) v.push_back({sx,c[i],1}),sx+=x[i];
	for(int i=1;i<=n;i++) l+=x[i];
	sort(v.begin(),v.end(),[](___ x,___ y){return x.a<y.a;}),z[0]='?',z[1]='!';
	for(int i=0;i<v.size();i++){
		int a=v[i].a,b=v[i].b,idx=v[i].idx;
		res+=max(a-p,0ll)*(z[0]!=z[1]),z[idx]=b,p=a;
	}
	res+=(l-p)*(z[0]!=z[1]);
	cout<<res/2<<'\n';
}