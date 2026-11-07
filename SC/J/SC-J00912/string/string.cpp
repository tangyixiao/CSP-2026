//#include<bits/stdc++.h>
//#define ll long long
//#define endl '\n'
//using namespace std;
//const ll N=1e5+5;
//struct S{
//	ll l;
//	ll r;
//	char w;
//}a[N];
//ll n,m,sum,mid,cnt;
//ll ans,l_,r_,nw,las;
//char x;
//int main(){
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	cin>>n;
//	for(ll i=1;i<=n;++i){
//		cin>>m>>x;
//		sum+=m;
//		++cnt;
//		a[cnt].l=a[cnt-1].l+1;
//		a[cnt].r=a[cnt].l+m-1;
//		a[cnt].w=x;
//	}
//	mid=sum/2;
//	for(l_=1,r_=cnt;;){
//		nw=min(a[l_].r,sum-a[r_].r+1);
//		if(a[l_].r>=a[r_].l)break;
//		if(a[l_].w!=a[r_].w)ans+=nw-las;
//		if(a[l_].r<sum-a[r_].r+1)l_++;
//		else r_--;
//		las=nw;
//	}
//	cout<<ans;
//	return 0;
//} 
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
ll n,m,ans;
char x;
string a,b;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;++i){
		cin>>m>>x;
		for(ll j=1;j<=m;++j)a+=x;
	}
	//cout<<a<<endl	//输入a调 
	for(ll i=a.size()-1;i>=0;--i)b+=a[i];
	//cout<<b<<endl //输入b调  
	for(ll i=0;i<a.size();++i){
		if(a[i]!=b[i])++ans;
	}
	cout<<ans/2;
	return 0;
} 