#include <bits/stdc++.h>
using namespace std;
#define int long long
struct node{
	int a;
	char c;
}str[200005];
signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for(int h = 1; h <= n; h ++)
		cin >> str[h].a >> str[h].c;
	int i = 1, j = n, cnt = 0;
	while(i < j)
	{
		if(str[i].a >= str[j].a && str[i].c != str[j].c)
		{
			cnt += str[j].a;
			str[i].a -= str[j].a;
			j --;
		}
		else if(str[i].a < str[j].a && str[i].c != str[j].c)
		{
			cnt += str[i].a;
			str[j].a -= str[i].a;
			i ++;
		}
		else if(str[i].a >= str[j].a && str[i].c == str[j].c)
		{
			str[i].a -= str[j].a;
			j --;
		}
		else if(str[i].a < str[j].a && str[i].c == str[j].c)
		{
			str[j].a -= str[i].a;
			i ++;
		}
	}
	cout << cnt;
	return 0;
}
