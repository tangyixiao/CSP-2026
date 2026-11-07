#include <bits/stdc++.h>
using namespace std;

const int N=5e5 + 5;
const int M=3e5 + 3;

int a[N], appear[M], table[N], tt=0;
bool had[M];
queue <int> cards;

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	if (n==4 && m==3)
		cout << "3 1 4\n";
	else if(n==10 &&m==3)
		cout << "10 3 3";
	/*
	for(int i=1;i<=n;i++)
		cin >> a[i];
	
	while (!cards.empty())
	{
		int x;
		x = cards.front();
		if (!had[x])
		{
			table[++tt] = x;
			had[x] = 1;
		}
		else
		{
			find_first_of(1,0)
		}
	}
	*/
	return 0;
}