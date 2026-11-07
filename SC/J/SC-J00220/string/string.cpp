/*
acccccccacaca
*/
#include <iostream>
using namespace std;
using LL = long long;
const int N = 2e5 + 5;
struct csum
{
	char c;
	LL sum;
}a[N];
LL n, len;
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
//	bool cl = 1, cr = 1;
//	LL l = 0, r = len + 1, li = 1, ri = n, ans = 0;
//	LL mid = (l + r) / 2;
//	while (l <= r)
//	{
//		if (cl)
//		{
//			l += a[li].sum;
//			cl = 0;
//		}
//		if (cr)
//		{
//			r -= a[ri].sum;
//			cr = 0;
//		}
//		
//		if (a[li].c == a[ri].c)
//		{ 
//			LL cge;
//			if (a[li].sum > a[ri].sum)
//			{
//				cge = a[ri].sum;
//				cr = 1;
//			}
//			else if (a[li].sum < a[ri].sum)
//			{
//				cge = a[li].sum;
//				cl = 1;
//			}
//			else 
//			{
//				cge = a[li].sum;
//				cr = cl = 1;
//			}
//			l += cge;
//			r -= cge;
//		}
//		else
//		{
//			if (a[li].sum < a[ri].sum)
//			{
//				ans += a[li].sum;
//				l += a[li].sum;
//				r -= a[li].sum;
//				li++;
//			}
//		}
//	}
//	return 0;
	cin >> n;
	LL ans = 0;
	string N = " ";
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i].sum >> a[i].c;
		len += a[i].sum;
		for (int j = 1; j <= a[i].sum; j++)
		{
			N += a[i].c;
		}
	}
	for (int i = 1; i <= len / 2; i++)
	{
		if (N[i] != N[len - i + 1])
		{
			ans++;
		}
	}
	cout << ans;
	return 0;
}

/*
3
2 a
2 b
1 c

2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/