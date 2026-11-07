#include <bits/stdc++.h>
using namespace std ;

int vis[300010] ,cnt[300010]; 
int n ,m ,a[500010] ;
string s = "" ;
stack<int> st ;

int main()
{
	freopen("card.in","r",stdin) ;
	freopen("card.out","w",stdout) ;
	cin >> n >> m ;
	int cur = 1 ;
	for (int i = 1 ;i <= n ;i ++)
	{
		cin >> a[i] ;
		if (vis[a[i]] == 0)
		{
			st.push(a[i]) ;
			s = s + char(a[i] + '0') ;
			for (int j = 0 ;j < s.size() ;j ++)
			{
				cnt[int(s[j] - '0')] ++ ;
			}
			vis[a[i]] = 1 ;
		}
		else 
		{
			int len = 0 ;
			while(st.top() != a[i])
			{
				st.pop() ;
				len ++ ;
			}
			s = s.substr(0 ,s.size() - len ) ;
			//s = s + char(a[i] - '0') ;
			for (int j = 0 ;j < s.size() ;j ++)
			{
				cnt[int(s[j] - '0')] ++ ;
			}
		}
	}
	for (int i = 1 ;i <= m ;i ++)
		cout << cnt[i] << " " ;
	return 0 ;
}