#include <bits/stdc++.h>
using namespace std;

int  n, m, a[10010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		cout << a[i];
	}
	return 0;
}

//for(int i = 1; i <= n; i++) //n局
//{
//	int numbero = i - 1; //第i局的第1张牌
//	while(n - numbero) //出n张牌
//	{
//		pai = numbero; //临时numbero
//		for(int j = 0; j <= s.size(); j++)
//		{
//		}
//		s += a[pai];
//	}
//}