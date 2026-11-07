#include<bits/stdc++.h>
#define ll long long
const int N = 3e5 + 5;
using namespace std;
struct node
{
	int a;
	char c;
} t[N];
int n, head, tail;
ll ans;
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	if(n == 1)
	{
		cout << 0;
		return 0;
	}
	for(int i = 1; i <= n; i++)
		cin >> t[i].a >> t[i].c;
	head = 1, tail = n;
	while(head < tail)
	{
		int p = min(t[head].a, t[tail].a);
		if(t[head].c != t[tail].c)
			ans += p;
		t[head].a -= p, t[tail].a -= p;
			if(t[head].a == 0)
				head++;
			if(t[tail].a == 0)
				tail--;
	}
	cout << ans;
}
