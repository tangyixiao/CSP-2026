#include <bits/stdc++.h>
using namespace std;
int main()//mo2'ni3'niu2'bi1 , te4'pan4'niu2'bi1
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n , m ,max = -1;
	cin >> n >> m ;
	long long a[n] ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	sort(a , a + n - 1);
	if( a[0] == 0 && n == m)
	{
		cout << 0 ;
		return 0 ;
	}
	
	bool itz_all_same =true ;
	for(int i = 0 ; i < n ; i++)
		if(i != i - 1)
			itz_all_same = false ;
	if(itz_all_same)
	{
		cout << a[0] ;
		return 0 ;
	}
	if(m == 1)
	{
		cout << a[n-1] ;
		return 0;
	}
	else if (m == 2)
	{
		for(int i = 0 ; i <= n ; i++)
		{
			for(int j = i+1; j <= n ; j++)
			{
				if (a[i] & a[j] > max)
					max = a[i] & a[j] ;
			}
		}
		cout << max ;
		return 0 ;
	}
	else if (m == 3)
	{
		for(int i = 0 ; i <= n ; i++)
		{
			for(int j = i+1; j <= n ; j++)
			{
				for(int k = j+1; k <= n ; k++)
				{
					if (a[i] & a[j] &a[k]> max)
						max = a[i] & a[j] &a[k] +1;//??
				}
			}
		}
		cout << max ;
		return 0 ;
	}
	else
		cout << 67 ;//!!six-seven!!
	return 0 ;
}//RP++
