#include <bits/stdc++.h> 
#define int long long 
using namespace std ;

const int N=2e5+10 ;
int n ; 

signed main() {
	freopen("string.in","r",stdin) ;
	freopen("string.out","w",stdout) ;
	ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
	
	cin>>n ;
	string s ; 
	for(int i=1;i<=n;i++) {
		int x ; char c ;
		cin>>x>>c ;
		for(int k=1;k<=x;k++) s.push_back(c) ;
	}
	int ans=0,len=s.size() ;
	for(int i=0;i<len;i++) {
		if(len-i-1<=i) break ;
//		cout<<i<<" "<<n-1-i<<"\n" ;
		if(s[i]!=s[len-i-1]) ans++ ;
	}
	cout<<ans ;
	
	return 0 ;
}
/*
3
2 a
2 b
1 c
2

5
1 a
1 b
1 c
1 d
3 e
*/