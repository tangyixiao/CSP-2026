#include<bits/stdc++.H>
using namespace std;
typedef long long ll;
const int N=2e5+10;
int bit[N],p;
int n,m;
ll ans=0;
struct ty{
	ll a;
	int b,mx;
	bool operator<(const ty &bi)const{
		if(b==bi.b)return mx>bi.mx;
		else return b>bi.b;
	}
}e[N];
int read(){
	int x=0;char c=getchar();
	while(!isdigit(c)){c=getchar();}
	while(isdigit(c)){x=x*10+c-'0';c=getchar();}
	return x;
}
int get1(ll x){
	int pos=0;
	while(x){
		if(x&1)pos++;
		x>>=1;
	}
	return pos;
}
int get2(ll x){
	for(int i=30;i>=0;i--){
		if(x&(1<<i)){
			return i;
		}
	}
	return 0;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=read();m=read();
	bool ok=0;
	if(n==m)ok=1;
	for(int i=1;i<=n;i++){
		e[i].a=read();
		if(ok)ans&=e[i].a;
		e[i].b=get1(e[i].a);
		e[i].mx=get2(e[i].a);
	}
	if(ok){
		cout << ans;
		return 0;
	}
	sort(e+1,e+1+n);
	int used=0;
	ans=e[1].a;
	for(int i=2;i<=m;i++)ans&=e[i].a;
	cout << ans;
	return 0;
}
