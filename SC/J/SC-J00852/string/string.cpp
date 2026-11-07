#include <bits/stdc++.h>
using namespace std;

int n;
long long sum;
bool z[30];
struct node
{
	long long x;
	char s;
}a[200005];

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i].x >> a[i].s;
		z[a[i].s - 'a' + 1] = true;
		sum += a[i].x;
	}
	
	int cnt = 0;
	for(int i = 1;i <= 26;i++)
	{
		if(z[i] != 0)
			cnt++;
	}
	if(cnt == 1)
	{
		cout << 0;
		return 0;
	}
	
	if(sum % 2 == 0)
	{
		cout << sum / 2;
		return 0;
	}	
	
	if(sum % 2 != 0)
		cout << (sum - (sum + 1) / 2);
	return 0;
}