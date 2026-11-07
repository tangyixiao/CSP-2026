#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll read()
{
	ll x = 0 , f = 1;
	char ch = getchar();
	while(ch > '9' || ch < '0')
	{
		if(ch == '-') f = -f;
		ch = getchar();
	}
	while(ch <= '9' && ch >= '0')
	{
		x = x * 10 + ch - '0';
		ch = getchar();
	}
	return x * f;
}
const int N = 3e5 + 10;
const int M = 5e5 + 10;
int ans[N];
string s,st;
ll k;
char c;
string now;
ll x = 0;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	ll n = read() , m = read();
	getline(cin,s);
	st = s;

	for(int i = 1 ; i <= n ; i ++ )
	{
		st = s;
		if(i - 1)
		{
			while(st[x] != ' ')
			{
				x ++ ;
			}
			if(st[x] == ' ') x ++ ;
		}
		ll len = st.size();
		for(int j = x ; j < len ; )
		{
			now = "";
			if(st[j] == ' ') j ++ ;
			while(st[j] != ' ')
			{
				now += st[j];
				j ++;
			}
			if(st[j] == ' ') j ++ ;
			int k = st.find(now,j);
			if(k == -1)
			{
				ans[stol(now)] ++ ;
			} 
			else
			{
				j = k;
			}
		}
	}
	
	for(int i = 1 ; i <= m ; i ++ )
	{
		cout << ans[i] << ' ';
	}
	
	return 0;
}
