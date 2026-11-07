#include <iostream>
#include <algorithm>

const int N = 2e5 + 99;

int n, m;
long long a[N];

void init() {
	
	for(int i = 1; i <= n; i++)
		std::cin >> a[i];
	return ;
	
}

namespace n_small{
	//n  <= 20
	long long dfs( int i, long long res, int use) {
		
		if( i == n+1 || use == m) {
			
			if(use == m)
				return res;
			return 0;
			
		}
		
		long long cnt = 0;
		cnt = dfs( i+1, res, use);
		if(use != 0)
			cnt = std::max ( dfs( i+1, res&a[i], use+1), cnt);
		else
			cnt = std::max ( dfs( i+1, a[i], use+1), cnt);
		
		return cnt;
		
	}
	void solve() {
		
		init();
		std::cout << dfs( 1, 0, 0);
		return ;
		
	}
}
namespace m_1{
	//m  =  1
	void solve() {
		long long temp, ans = 0;
		for(int i = 1; i <= n; i++) {
			std::cin >> temp;
			ans = std::max( ans, temp);
		}
		std::cout << ans;
		return ;
	}
}
namespace m_2{
	//m = 2
	void solve() {
		init();
		
		long long ans = 0;
		for(int i = 1; i < n; i++)
			for(int j = i+1; j <= n; j++)
				ans = std::max( ans, a[i]&a[j]);
		std::cout << ans;
		
		return ;
		
	}
}
namespace m_n{
	//m  =  n
	void solve() {
		init();
		long long ans = a[1];
		for(int i = 1; i <= n; i++) {
			ans &= a[i];
		}
		std::cout << ans;
		return ;
	}
}
namespace m_n_1{
	//m  = n-1
	long long pre[N], pev[N];
	void solve() {
		
		init();
		
		pre[0] = a[0];
		for(int i = 1; i <= n; i++)
			pre[i] = pre[i-1]&a[i];
		pev[n+1] = a[n];
		for(int i = n; i >= 1; i--)
			pev[i] = pev[i+1]&a[i];
		
		long long ans = std::max( pev[2], pre[n-1]);
		
		for(int i = 2; i < n; i++)
			ans = std::max( ans, pev[i-1]&pre[i+1]);
		
		std::cout << ans;
		return ;
		
	}	
}
namespace s_A{
	//for A
	bool is_sub() {
		
		for(int i = 1; i <= n; i++){
			
			long long temp = a[i];
			while(temp) {
				if((temp&1) == 0)
					return false;
				temp >>= 1;
			}
			
		}
		
		return 1;
		
	}
	
	void solve() {
		std::sort( a+1, a+1+n);
		std::cout << a[n-m+1];
		return ;
	}
}
namespace s_B{
	//for B
	bool is_pow() {
		for(int i = 1; (1 << i) <= n; i++){
			if((1 << i) == n)
				return true;
		}
		return false;
	}
	
	bool is_sub() {
		if(!is_pow())
			return 0;
		for(int i = 1; i <= n; i++)
			if(a[i] != i-1)
				return 0;
		return 1;
	}
	
	void solve() {
		
		long long ans = a[n];
		
		for(int i = 2; i <= m; i++)
			ans &= a[n-i+1];
		
		std::cout << ans;
		
	}	
}
namespace n_big{
	//for 16-19
	
	bool check(long long now) {
		
		int use = 0;
		for(int i = n; i >= 1 && use <= m; i--)
			if((now & a[i]) == now)
				use++;
		
		return use == m||use == m+1;
		
	}
	
	void solve() {
		
		std::sort( a+1, a+1+n);
		
		int index = 0;
		while(a[n] >= (1ll<<index))
			index++;
		index -= 1;
		
		long long ans = 0;
		for(int k = index; k >= 0;k--) {
			
			long long temp = ans | (1ll<<k);
			if(check(temp))
				ans = temp;
			
		}
		
		std::cout << ans;
		return ;
		
	}
	
}

int main() {
	
	freopen( "and.in", "r", stdin);
	freopen( "and.out", "w", stdout);
	
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr), std::cout.tie(nullptr);
	
	std::cin >> n >> m;
	
//	if(n <= 20)
//		n_small::solve();//ac
//	else if(m == 1)
//		m_1::solve();//ac
//	else if(m == 2)
//		m_2::solve();//ac
//	else if(m == n)
//		m_n::solve();//ac
//	else if(m == n-1)
//		m_n_1::solve();//ac time = 10:05
//	else {
		
	init();
//		if(s_B::is_sub()) 
//			s_B::solve();
//		else if(s_A::is_sub())
//			s_A::solve();
//		else
	n_big::solve();
//		
//	}
	
	return 0;
	
}

/*

for 100pts
write time : 9:40 - 10:52

*/