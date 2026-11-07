// 十年OI一场空，不开long long 见祖宗！！！ 

#include <bits/stdc++.h>
using namespace std ;

int n ,a[200005] ;
char c[200005] ;

int main()
{
	freopen("string.in","r",stdin) ;
	freopen("string.out","w",stdout) ;
	cin >> n ;
	bool flag = 1 ;
	for (int i = 1 ;i <= n ;i ++) 
	{
		cin >> a[i] >> c[i] ;
		if (c[i] != c[i - 1]) flag = 0 ;
	}
	if (flag)
	{
		cout << "0" ;
		return 0 ;	
	}
	int l = 1 ,r = n ;
	//char last = '0' ;
	//int lc = 0 ;
	long long cnt = 0 ;
	while (l <= r)
	{
		if (c[l] == c[r])// 大情况：两个字母相同 
		{
			if (a[l] == a[r])  // 全部消掉，没有剩余 （神 
			{
				l ++ ;
				r -- ;
			}
			else if (a[l] > a[r] ) // 如果左边的多了
			{
				a[l] -= a[r] ; //左边还没有消掉的 
				r -- ; // 右边全部的消掉了
			}
			else // 右边的多了
			{
				a[r] -= a[l] ;
				l ++ ; 
			 } 
		}
		else // 不相同, cnt 要加了 ！ 
		{
			if (a[l] == a[r]) // 数量相等，直接改一边就行
			{
				cnt += a[l] ;
				l ++ ;
				r -- ;
			 } 
			else if (a[l] > a[r])
			{
				// 只能够改变一半 只能把c[l]中的一些字母改成和c[r] ；
				cnt += a[r] ;
				a[l] -= a[r] ; 
				r -- ;
			}
			else 
			{
				cnt += a[l] ;
				a[r] -= a[l] ;
				l ++ ;
			}
		} 
	}
	cout << cnt ;
	return 0 ;
}