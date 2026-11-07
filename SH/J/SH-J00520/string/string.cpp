#include<iostream>
using namespace std;

long long b[200002];
int a[200002];
char c[200002];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++) cin >> a[i] >> c[i],b[i] = b[i-1] + a[i];
	long long sum = 0,w = 0,x = 1,y = n;
	while (x < y)
	{
		long long mi = min(b[x],b[n]-b[y-1]);
		if (c[x] != c[y]) sum += mi-w;
		w = mi;
		if (b[x] == mi) x++;
		if (b[n]-b[y-1] == mi) y--;
	}
	cout << sum;
	return 0;
}
