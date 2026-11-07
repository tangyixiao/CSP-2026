#include <bits/stdc++.h> 
//#define int long long 
using namespace std ;

string s1,s2,s3,s4 ;

signed main() {
	freopen("travel.in","r",stdin) ;
	freopen("travel.out","w",stdout) ;
	ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
	
	cin>>s1>>s2>>s3>>s4 ;
	if(s1!=s3) return cout<<"0000",0 ;
	if(s2.substr(0,2)!=s4.substr(0,2)) return cout<<"1000",0 ;
	char a=s2[2],b=s4[2] ;
	if(a>b) swap(a,b) ;
	if('A'<=a&&a<='C') {
		if('A'<=b&&b<='C') {
			if((char)(a+1)==b) cout<<"1111" ;
			else cout<<"1110" ;
		} 
		else cout<<"1100" ;
	}
	else {
		if('D'<=b&&b<='F') {
			if((char)(a+1)==b) cout<<"1111" ;
			else cout<<"1110" ;
		}
		else cout<<"1100" ;
	}
	
	return 0 ;
}