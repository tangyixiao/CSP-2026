#include<iostream>
using namespace std;
int n , m;
int a[200005] = {};
int ans = 0;
void dfs(int cnt , int kk , int pos)
{
	if(cnt == m)
	{
		ans = max(ans , kk);
		return ;
	}
	if(pos > n)
	{
		return ;
	}
	for(int i = pos;i <= n;i++)
	{
		int b = kk & a[i];
		cnt++;
		dfs(cnt , b , i + 1);
		cnt--;
	}
	return ;
}
int main()
{
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i];
	int kkkkk = (1 << 30) - 1;
	cout << kkkkk;
	dfs(0 , kkkkk , 1);
	cout << ans;
	return 0;
}
