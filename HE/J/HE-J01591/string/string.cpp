#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s,c;
	long long n,a,cnt = 0;
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> a >> c;
		while(a--) s+=c;
	}
	int ss = s.size()-1;
	for(int i = 0 ;i <= ss / 2;i++)
	{
		if(s[i] != s[ss-i])
		{
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
//#include <bits/stdc++.h>
//using namespace std;
//const int MAXN = 2e5+5;
//int main()
//{
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
//	long long n,a[MAXN],sum=0;
//	string b;
//	for(int i = 1;i <= n;i++)
//	{
//		cin >> a[i] >> b[i];
//	}
//	if(n <= 2 && b[1] == b[2]) {
//		cout << 0;
//		return 0;
//	}
//	for(int i = 1;i <= n;i++)
//	{
//		if(b[i] != b[n-i+1] && b[n-i+1] != b[n-i+2])
//		{
//			int minn = min(a[i],a[n-i+1]);
//			sum += minn;
//		}
//		if(b[i] != b[n-i+1] && b[n-i+1] == b[n-i+2])
//		{
//			int maa = min(a[i],a[n-i+1]+b[i+1]);
//			sum += maa;
//			i++;
//		}
//		
//	}
//	cout << sum;
//	return 0;
//}
