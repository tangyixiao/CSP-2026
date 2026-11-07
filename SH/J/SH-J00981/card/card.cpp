#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 5e5 + 5;
int a[N]; 
int cnt[N];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i]; 
	}
	string desk;
	for(int i = 1; i <= n; i++) // 游戏轮数 
	{
		for(int j = i; j <= n; j++)// 每轮的手牌 
		{
			char tmp = a[j] + '0';
			if(desk.find(tmp) != string::npos)
			{
				desk.erase(desk.find(tmp));
			}
			desk += a[j] + '0';
//			cout << desk << endl;// right!
		}
//		cout << desk << endl; // 
		for(int i = 0; i < desk.size(); i++)
		{
			cnt[desk[i] - '0']++;
		}
		desk = "";
	}
	for(int i = 1; i <= m; i++)
	{
		cout << cnt[i] << " ";
	}
	
	return 0;
}
