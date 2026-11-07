#include <bits/stdc++.h>
using namespace std;
int n, ans, a, cnt, a1;
char c, c1;
string s;
int main()
{
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    cin >> n;
    int a1;
    char c1;
    for(int i = 1; i <= n; i++)
	{
		cin >> a >> c;
		if(i == 1)
			a1 = a, c1 = c;
		ans = a1;
    	char old = c1;
    	for(int i = 2; i <= n; i++)
		{
			old = c;
    		if(c == old) continue;
    		else ans += a;
		}
		for(int j = 1; j <= a; j++)
			s[++cnt] = c;
	}
	bool flag = false;
	for(int i = 1; i <= cnt; i++)
	{
		if(s[i] == s[cnt + 1 - i]) flag = true;
		else flag = false;
	}
	if(flag) cout << 0;
	else
		cout << abs((ans + 2) / 2);
    return 0;
}

