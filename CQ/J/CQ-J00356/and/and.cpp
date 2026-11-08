#include<bits/stdc++.h>
typedef long long ll;
const bool islocal=0;
std::ifstream fin("and.in");
std::ofstream fout("and.out");
ll n,m,a[200005],ans=2147483647,ans2=2147483647,ans3=2147483647,realans=0;
ll cnt(ll x){
	ll r=0;
	while(x)r+=x&1,x>>=1;
	return r;
} 
bool cmp(ll _1,ll _2){return(_1&a[0])>(_2&a[0]);}
ll vis[32];
void add(ll x){
	for(ll i=0;i<31;i++)vis[i]+=((x&(1<<i))?1:0);
}
void calc(){
	for(ll i=0;i<31;i++)if(vis[i]>=m)realans|=(1<<i);
}
ll calc2(ll x){
	ll ret=0;
	for(ll i=0;i<31;i++)if(vis[i]>=m&&x&(1<<i))ret++;
	return ret;
}
int main(){
	std::cin.tie(nullptr)->sync_with_stdio(false);
	(islocal?std::cin:fin)>>n>>m>>a[0],add(a[0]);
	for(ll i=1;i<n;i++){(islocal?std::cin:fin)>>a[i],add(a[i]);if(a[i]>a[0])std::swap(a[i],a[0]);}
	std::sort(a+1,a+n,cmp);
	for(ll i=0;i<m;i++)ans&=a[i];
	for(ll i=1;i<n;i++)if(cnt(a[i])>cnt(a[0]))std::swap(a[i],a[0]);
	std::sort(a+1,a+n,cmp);
	for(ll i=0;i<m;i++)ans2&=a[i];
	for(ll i=1;i<n;i++)if(calc2(a[i])>calc2(a[0]))std::swap(a[i],a[0]);
	std::sort(a+1,a+n,cmp);
	for(ll i=0;i<m;i++)ans3&=a[i];
	calc();
	(islocal?std::cout:fout)<<std::min(std::max({ans2,ans,ans3}),realans);
}
void zhapian(){
	//I'm luogu user 1754409(huang_hym)!
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
}
//time:50 minutes
/*
zhe  dang yang li  you  **yi** dian dian  shui fen.
zhe ge  lei ting  tan xin  neng guo  wo chi.
*/
