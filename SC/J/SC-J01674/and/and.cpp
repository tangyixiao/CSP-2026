/*

Start Code At 2026/10/31 8:48:46 .

Code By Bestart (luogu uid : 1062290) .

*/

#include <bits/stdc++.h>
#define gc() (p1 == p2 && (p2 = (p1 = buf) + fread(buf , 1 , fread_cnt , stdin) , p1 == p2) ? EOF : *p1 ++)

using namespace std ;

using db = double ;
using ll = long long ;
using ldb = long double ;
using uint = unsigned int ;
using ull = unsigned long long ;

#define inline
//#define int long long

mt19937_64 rnd(chrono :: system_clock :: now() .time_since_epoch() .count()) ;
const size_t fread_cnt = 1<<20 ;
const size_t MN = 1e6 + 10 ;
const int mod = 998244353 ;
const int inf = 1e9 + 7 ;
//const ll inf = 1e18 ;

char buf[fread_cnt] , *p1 = buf , *p2 = buf ;

template <typename T = int>
inline T read()
{
	T x = 0 ;  bool f = 0 ;  char ch = gc() ;
	while(ch < '0' || ch > '9')  f ^= ch == '-' , ch = gc() ;
	while(ch >= '0' && ch <= '9')  x = (x << 3) + (x << 1) + (ch ^ 48) , ch = gc() ;
	return f ? -x : x ;
}


int n , m , ans , a[MN] , c[MN] , cnt , b[MN] , bcnt ;

inline bool solve()
{
	
	cin >> n >> m ;
	for(int i = 1 ; i <= n ; ++ i)  cin >> a[i] , c[i] = a[i] ;
	cnt = n ;
	for(int k = 30 ; k >= 0 ; -- k) {
		bcnt = 0 ;
		for(int i = 1 ; i <= cnt ; ++ i) {
			if(c[i] >> k & 1)  b[++bcnt] = c[i] ;
		}
		if(bcnt >= m) {
			ans |= 1<<k , cnt = bcnt ;
			for(int i = 1 ; i <= cnt ; ++ i)  c[i] = b[i] ;
		}
	}
	cout << ans << '\n' ;
	
	return 0 ;
}

signed main()
{
	freopen("and.in" , "r" , stdin) ;
	freopen("and.out" , "w" , stdout) ;
	
	cin.tie(0) -> sync_with_stdio(0) ;
	
//	system("fc .out .ans") ;
	
//	int __T_ ;  cin >> __T_ ;  while(__T_ --)  solve() ;
	
//	while(!solve()) ;
	
	solve() ;
	
	return 0 ;
}
