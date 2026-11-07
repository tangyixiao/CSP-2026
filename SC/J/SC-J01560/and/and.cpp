#include <bits/stdc++.h>
using namespace std ;

int n ,m ;

struct node 
{
	string s ; // 二进制形式  
	long long a ; // 原来的数字 
}x[200005] ; 

string solve(long long u)
{
	string res = "" ;
	while (u != 0)
	{
		res = char(u % 2 + '0') + res ; // 在想什么！！！为什么不加'0  !!!
		u /= 2 ;
	 } 
	return res ;
}

bool cmp(node ux ,node uy)
{
	return ux.s >= uy.s ;
}

int main()
{
	freopen("and.in","r",stdin) ;
	freopen("and.out","w",stdout) ;
	cin >> n >> m ;
	// 第一步输入加转二进制
	for (int i = 1 ;i <= n ;i ++)
	{
		cin >> x[i].a ;
		x[i].s = solve(x[i].a)  ;
	}
	// 第二步对二进制进行排序
	sort(x + 1 ,x + n + 1 ,cmp) ; 
	long long ans = x[1].a ;
	for (int i = 2 ;i <= m ;i ++)
	{
		ans = ans & x[i].a ;
	}
	cout << ans << endl ;
	return 0 ;
}