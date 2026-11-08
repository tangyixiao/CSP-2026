#include <cstdio>
#include <string> // Of course! (actually useless)
#include <vector>
#include <cassert>
#include <utility>
#include <iostream>
#include <algorithm>

using namespace std;

class wsx { public: long long l, r; char c; } wsxsw[200005]; // stO wsx Orz

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	scanf("%d", &n);
	long long sp = 0;
	for(int i=1;i<=n;i++)
	{
		int lxc;
		scanf("%d %c", &lxc, &wsxsw[i].c);
		wsxsw[i].l = sp + 1;
		wsxsw[i].r = sp += lxc;
	}
	long long s = 0;
	int vl = n;
	for(int i=1;i<=n;i++)
	{
		while(vl >= 1 && sp - wsxsw[vl].l + 1 <= wsxsw[i].r)
		{
			if(wsxsw[vl].c != wsxsw[i].c) s += min(wsxsw[i].r, sp - wsxsw[vl].l + 1) - max(wsxsw[i].l, sp - wsxsw[vl].r + 1) + 1;
			vl--;
		}
		if(vl >= 1 && sp - wsxsw[vl].r + 1 <= wsxsw[i].r && wsxsw[vl].c != wsxsw[i].c) s += min(wsxsw[i].r, sp - wsxsw[vl].l + 1) - max(wsxsw[i].l, sp - wsxsw[vl].r + 1) + 1;
	}
	// fprintf(stderr, "s = %lld\n", s);
	// assert(s % 2 == 0);
	printf("%lld\n", s / 2);
	return 0;
}