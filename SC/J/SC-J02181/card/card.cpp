#include <bits/stdc++.h>
using namespace std;

const int N = 5e5 + 5;
int cnt [N] , a [N];
stack <int> st;

int main ()
{
	freopen ("card.in" , "r" , stdin);
	freopen ("card.out" , "w" , stdout);
	int n , m;
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a [i];
	}
	int k = 1;
	while (k <= n)
	{
		st.push (a [k]);
		for (int i = k + 1;i <= n;i++)
		{
			if (st.top () == a [i])
			{
				while (!st.empty ())
				{
					st.pop ();
				}
				st.push (a [i]);
			}
			else
			{
				st.push (a [i]);
			}
		}
		while (!st.empty ())
		{
			cnt [st.top ()] ++;
			st.pop ();
		}
		k++;
	}
	for (int i = 1;i <= m;i++)
	{
		cout << cnt [i] << " ";
	}
	return 0;
}