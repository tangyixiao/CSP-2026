//#include <iostream>
//using namespace std;
//#define int long long
//int a[100010],b[100010],sa[100010],sb[100010];
//string c[100010],d[100010];
//signed main()
//{
//	int n,ans,cntac = 1,cntbd = 1;
//	cin >> n;
//	for(int i = 1 ; i <= n ; i ++)
//	{
//		cin >> a[i] >> c[i];
//		sa[i] = sa[i - 1] + a[i];
//	}
//	ans = 0;
//	for(int i = 1 ; i <= n ; i ++)
//	{
//		b[i] = a[n - i + 1],d[i] = c[n - i + 1];
//		sb[i] = sb[i - 1] + b[i];
//	}
//	bool F = 0,FF = 0,FFF = 0;
//	while(cntac <= n && cntbd <= n)
//	{
//		int tac = cntac,tbd = cntbd;
//		if(sa[cntac] >= sb[cntbd])
//		{
//			cntbd ++;
//			if(F != 0)
//			{
//				FF = 1;
//				FFF = 0;
//			}
//			F = 0;
//		}
//		else
//		{
//			cntac ++;
//			if(F == 0)
//			{
//				FF = 1;
//				FFF = 1;
//			}
//			F = 1;
//		}
//		if(c[cntac] != c[cntbd])
//		{
//			if(FF == 0)
//			{
//				ans += abs(sa[cntac] - sb[cntbd]);
//				cout << ans << ")" << abs(sa[cntac] - sb[cntbd]) << endl;
//			}
//			else if(FFF == 1)
//			{
//				ans += abs(sa[cntac] - sa[tac]);
//				cout << ans << "!" << abs(sa[cntac] - sa[tac]) << endl;
//			}
//			else
//			{
//				ans += abs(sb[cntbd] - sb[tbd]);
//				cout << ans << "," << abs(sb[cntbd] - sb[tbd]) << "," << cntbd << " " << tbd << endl;
//			}
//		}
//	}
//	cout << ans << endl;
//	return 0;	
//}
#include <iostream>
using namespace std;
int main()
{
	int n,ans = 0;
	cin >> n;
	string s;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	for(int i = 1 ; i <= n ; i ++)
	{
		int a;
		char c;
		cin >> a >> c;
		for(int i = 1 ; i <= a ; i ++)
		{
			s += c;
		}
	}
	for(int i = 0 ; i < s.size() ; i ++)
	{
		if(s[i] != s[n - i + 1])
		{
			ans ++;
		}
	}
	cout << ans / 2 << endl;
	return 0;
}
