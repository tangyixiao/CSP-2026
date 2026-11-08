#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5; 

int a, b, c, d = -1, e, f = -1, g[N];

bool vis[N];

bool cmp(int x, int y)
{
	return x > y;
}

int FOR3(int x)
{
	for(int i = x + 1; i <= a; i ++) for(int j = i + 1; j <= a; j ++) for(int k = j + 1; k <= a; k ++) f = max(f, g[i] & g[j] & g[k]);
	return f;
}
int FOR4(int x)
{
	for(int i = x + 1; i <= a; i ++) f = max(FOR3(i), f);
	return f;
}
int FOR5(int x)
{
	for(int i = x + 1; i <= a; i ++) f = max(FOR4(i), f);
	return f;
}
int FOR6(int x)
{
	for(int i = x + 1; i <= a; i ++) f = max(FOR5(i), f);
	return f;
}
int FOR7(int x)
{
	for(int i = x + 1; i <= a; i ++) f = max(FOR6(i), f);
	return f;
}
int FOR8(int x)
{
	for(int i = x + 1; i <= a; i ++) f = max(FOR7(i), f);
	return f;
}
int FOR9(int x)
{
	for(int i = x + 1; i <= a; i ++) f = max(FOR8(i), f);
	return f;
}
int FOR10(int x)
{
	for(int i = x + 1; i <= a; i ++) f = max(FOR9(i), f); 
	return f;
}
int FOR11(int x)
{
	for(int i = x + 1; i <= a; i ++) f = max(FOR10(i), f); 
	return f;
}
int FOR12(int x)
{
	for(int i = x + 1; i <= a; i ++) f = max(FOR11(i), f); 
	return f;
}
int FOR13(int x)
{
	for(int i = x + 1; i <= a; i ++) f = max(FOR12(i), f); 
	return f;
}
int FOR14(int x)
{
	for(int i = x + 1; i <= a; i ++) f = max(FOR13(i), f); 
	return f;
}
int FOR15(int x)
{
	for(int i = x + 1; i <= a; i ++) f = max(FOR14(i), f); 
	return f;
}
int FOR16(int x)
{
	for(int i = x + 1; i <= a; i ++) f = max(FOR15(i), f); 
	return f;
}
int FOR17(int x)
{
	for(int i = x + 1; i <= a; i ++) f = max(FOR16(i), f); 
	return f;
}
int FOR18(int x)
{
	for(int i = x + 1; i <= a; i ++) f = max(FOR17(i), f); 
	return f;
}
int FOR19(int x)
{
	for(int i = x + 1; i <= a; i ++) f = max(FOR18(i), f); 
	return f;
}
int FOR20(int x)
{
	for(int i = x + 1; i <= a; i ++) f = max(FOR19(i), f); 
	return f;
}


int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> a >> b;
	for(int i = 1; i <= a; i ++)
	{
		cin >> g[i];
		if(g[i] >= 4) e = 1;
	}
	if(b == 1)//6
	{
		for(int i = 1; i <= a; i ++) f = max(f, g[i]);
		cout << f;
		return 0;
	}
	if(b == a)//7
	{
		f = g[1];
		for(int i = 2; i <= a; i ++) f = f & g[i];
		cout << f;
		return 0;
	}
	if(b == 2)//8 9 10
	{
		for(int i = 1; i <= a; i ++)
		{
			for(int j = i + 1; j <= a; j ++)
			{
				f = max(f, g[i] & g[j]);
			}
		}
		cout << f;
		return 0;
	}
	if(b == a - 1)//11 12
	{
		f = g[1];
		for(int i = 2; i <= a; i ++) f = f & g[i];
		for(int i = 1; i <= a; i ++) d = max(d, f & (~g[i]));
		cout << d;
		return 0;
	}
	if(e == 0)//16 17
	{
		sort(g + 1, g + a + 1, cmp);
		f = g[1];
		for(int i = 2; i <= b; i ++) f = f & g[i];
		cout << f;
		return 0;
	}
	if(a <= 20 && b <= a) //1 2 3 4 5
	{
		if(b == 3) cout << FOR3(0);
		if(b == 4) cout << FOR4(0);
		if(b == 5) cout << FOR5(0);
		if(b == 6) cout << FOR6(0);
		if(b == 7) cout << FOR7(0);
		if(b == 8) cout << FOR8(0);
		if(b == 9) cout << FOR9(0);
		if(b == 10) cout << FOR10(0);
		if(b == 11) cout << FOR11(0);
		if(b == 12) cout << FOR12(0);
		if(b == 13) cout << FOR13(0);
		if(b == 14) cout << FOR14(0);
		if(b == 15) cout << FOR15(0);
		if(b == 16) cout << FOR16(0);
		if(b == 17) cout << FOR17(0);
		if(b == 18) cout << FOR18(0);
		if(b == 19) cout << FOR19(0);
		if(b == 20) cout << FOR20(0);
		return 0;
	}
	sort(g + 1, g + a + 1, cmp); //13
	for(int i = 1; i <= b; i ++) f = f & g[i];
	cout << f;
	return 0;
}

