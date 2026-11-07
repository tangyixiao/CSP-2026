#include <iostream>
#define int long long
using namespace std;
const int MAXN = 2e6 + 5;
int n, ans;
int a[MAXN];
char c[MAXN], s[MAXN];
char s1[MAXN], s2[MAXN];
signed main(void)
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	int flag = 0;
	for(int i = 0;i < n;i++)
	{
		cin >> a[i] >> c[i];
		int b = flag + a[i];
		for(int j = flag;j < b;j++)
		{
			s[j] = c[i];
			flag++;
		}
	}
	for(int i = 0;i < flag / 2;i++) s1[i] = s[i];
	for(int i = 0, j = flag;i < flag / 2;i++) s2[i] = s[--j];
	for(int i = 0;i < flag;i++) if(s1[i] != s2[i]) ans++;
	cout << ans << endl;
	return 0;
}
