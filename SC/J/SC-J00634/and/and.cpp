#include <bits/stdc++.h> 
#define int long long 
using namespace std ;

const int N=2e5+10 ;
int b[N] ; bool used[N] ;int n,m,tot=0 ; 
bitset<31> a[N] ; vector<bitset<31>> chos ;

bool cmp(int x,int y) {return b[x]<b[y] ;}
bool check(int pos) {
	for(auto c:chos) {if(c[pos]==0) return 0 ;}
	vector<int> v ;
	for(int i=1;i<=n;i++) {
		if(a[i][pos]==1&&used[i]==0) {
			v.push_back(i) ;
		}
	}
	if(v.empty()) return 0 ;
	sort(v.begin(),v.end(),cmp) ;
//	cout<<pos<<": " ;
//	for(auto vi:v) cout<<b[vi]<<" " ;
//	cout<<"\n" ;
	tot++ ;
	chos.push_back(a[v.back()]) ;
	used[v.back()]=1 ;
	return 1 ;
}

signed main() {
	freopen("and.in","r",stdin) ;
	freopen("and.out","w",stdout) ;
	ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
	
	cin>>n>>m ;
	int mx=0,mn=1e10,res=2147483647 ; bool flag=1 ;
	for(int i=1;i<=n;i++) {
		cin>>b[i] ;
		mx=max(mx,b[i]) ; mn=min(b[i],mn) ;
		res=res&b[i] ;
		double k=log2(b[i]+1) ; int kk=k ;
		if(ceil(k)!=k||floor(k)!=kk) flag=0 ;
	}
	if(m==1) return cout<<mx,0 ;
	if(m==n) return cout<<res,0 ;
	if(flag==1) {
		sort(b+1,b+1+n,greater<int>()) ;
		res=2147483647 ;
		for(int i=1;i<=m;i++) res&=b[i] ;
		cout<<res ;
		return 0 ;
	}
	for(int i=1;i<=n;i++) a[i]=b[i] ;
	for(int i=1;i<=n;i++) for(int k=31;k>=0;k--) {
		if(a[i][k]==1) {mx=max(mx,k) ; break ;}
	}
	bitset<31> ans=2147483647 ;
	for(int i=mx;i>=0;i--) {
		if(tot==m) break ;
		check(i) ;
	} 
	for(auto ci:chos) ans=ans&ci ;
	cout<<ans.to_ullong();
	
	return 0 ;
}
/*
5 2
3 15 12 12 3 

5 3
31 3 1 15 7

3 2
2147483647 1 3
*/