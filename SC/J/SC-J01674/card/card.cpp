/*

Start Code At 2026/10/31 9:04:32 .

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

/*
10 3
3 1 2 1 3 2 3 1 2 1
*/


int n , m , a[MN] , t[MN] , suf[MN] , cnt[MN] ;

inline bool solve1() // dui ji xian shu ju jin xing te pan.
{
	for(int i = 1 ; i <= m ; ++ i)  if(t[i] > 1)  return 1 ;
	for(int i = 1 ; i <= m ; ++ i)  cout << suf[i] << " \n"[i==m] ;
	return 0 ;
}

inline bool solve2() 
{
	if(n*m > 1e7)  return 1 ;
	for(int i = 1 ; i <= n ; ++ i) {
		int p = i ;
		while(p <= n)  ++ cnt[a[p]] , p = suf[a[p]]+1 ;
	}
	for(int i = 1 ; i <= m ; ++ i)  cout << cnt[i] << " \n"[i==m] ;
	return 0 ;
}

int p[MN] ;
bool vis[MN] ;
vector<int> vt[MN] ;
inline bool solve9() 
{
	for(int i = 1 ; i <= n ; ++ i)  vt[a[i]] .push_back(i) ;
	for(int i = 1 ; i <= m ; ++ i)  vis[suf[i]] = 1 ;
	for(int i = 1 ; i <= m ; ++ i)  p[i] = i ;
	sort(p+1, p+m+1, [](int x, int y) {return suf[x]<suf[y] ;}) ;
	for(int i = 1 ; i <= m ; ++ i) {
		int u = p[i] ;
		cnt[u] = t[u] ;
		for(auto v : vt[u]) {
			if(v>1 && vis[v-1])  cnt[u] += cnt[a[v-1]] ;
		}
	}
	for(int i = 1 ; i <= m ; ++ i)  cout << cnt[i] << " \n"[i==m] ;
	return 0 ;
}

inline bool solve()
{
	
	cin >> n >> m ;	
	for(int i = 1 ; i <= n ; ++ i)  cin >> a[i] ;
	for(int i = 1 ; i <= n ; ++ i)  suf[a[i]] = i ;
	for(int i = 1 ; i <= n ; ++ i)  ++t[a[i]] ;
	solve9() ;
//	if(solve1()&&solve2()&&solve9())  return 1 ;
	
	return 0 ;
}

signed main()
{
	freopen("card.in" , "r" , stdin) ;
	freopen("card.out" , "w" , stdout) ;
	
	cin.tie(0) -> sync_with_stdio(0) ;
	
//	system("fc card.out card5.ans") ;
	
//	int __T_ ;  cin >> __T_ ;  while(__T_ --)  solve() ;
	
//	while(!solve()) ;
	
	solve() ;
	
	return 0 ;
}

/*
zhu shi ying gai ke yi xie ba?
I think it's a DP problem first but I have mistakes.
It's feel like a DS (Data Structure) problem yet.
Maybe like the cijixiangxi? I don't make sure.
emm...This is CSP-J, not S, so there were not any difficult DS problems.
...I don't think I can solve this problem quickly. -- 2026/10/31 9:14:11
So, let's play game? Oh, the computer didn't have any games. Bad. -- 2026/10/31 9:18:47
da baoli O(nm) suan qiu le.  -- 2026/10/31 9:37:26 solved.
card6.in zhi you 0.6s ?!!! zhe shi baoli ?!!!
hao xiang shi yin wei kao chang ji zi tai hao le dao zhi de??
dan shi ji zi shi:
Intel(R) Core(TM) i5-10500T CPU @ 2.30GHz
mei you tong yi ping ce yong de hao a.
shi bu shi da yang li shui le.
ying gai jiu shi ba, deng wo cuo yi ge qiang yi dian de shi shi. -- 2026/10/31 9:46:49
que shi shi da yang li tai shui le ye.
gu fen [56,76].
Now I find the solution and solve it. -- 2026/10/31 10:05:31
fantastic contest.
dui pai qi dong! -- 2026/10/31 10:14:38
Difficulty : Red Orange Yellow Yellow.
The Easiest Contest I have joined.
cai fa xian shi 1024MB, zhe me liang xin ?! -- 2026/10/31 10:31:31
da yang li hao xiang dou mei you hen qiang de dong xi...
passkey shi `Trick||Treat!` ye tai shen qi le, nan dao wo men hai yao guo wan sheng ye ma?
sui ran wo ke yi xie zhong wen, dan shi wei le fang zhi cheng xu bian cheng bu ke yue du de luan ma, suo yi xie pin yin shi hao de.
bu xiao xin ba yi ti ji dian nao guan ji le, xi ti huan ji, huo de chao jue hao hua guo dao zuo wei. -- 2026/10/31 11:01:32
wo jue ding qu diao zhe ge lei ting shu ju dian fen zhi, zhi jie xie zheng jie ta bu xiang ma, fan zheng ye dui pai bu chu lai wen ti. -- 2026/10/31 11:04:37
*/