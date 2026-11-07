#include <bits/stdc++.h>
using namespace std ;

const int N = 5e5 + 7 , M = 3e5 + 7 ;

int n , m , a[N] , cnt[N] ;

bool vis[M] ;

stack<int> st ;

int main()
{
	freopen("card.in" , "r" , stdin) ;
	freopen("card.out" , "w" , stdout) ;
	cin >> n >> m ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a[i] ;
	}
	for(int i = 1 ; i <= n ; i++)
	{
		memset(vis , 0 , sizeof(vis)) ;
		for(int j = i ; j <= n ; j++)
		{
			if(vis[a[j]] == true)
			{
				while(st.top() != a[j])
				{
					vis[st.top()] = false ;
					st.pop() ; 
				}
			}
			else
			{
				st.push(a[j]) ;
				vis[a[j]] = true ;
			}
		}
		while(!st.empty())
		{
			int a = st.top() ;
			cnt[a]++ ;
			st.pop() ;
		}
	}
	for(int i = 1 ; i <= m ; i++) cout << cnt[i] << " " ;
} 
