#include <bits/stdc++.h>
#define lin long long
#define endl "\n"
#define hash ZhaoAk
#define y1 qht_yjx
#define maxn 200005
#define I ios :: sync_with_stdio (0);
#define AK cin.tie (0);
#define CSP cout.tie (0);
#define rep(i ,l ,r) for (int i = l ;i <= r ;i ++)
#define per(i ,l ,r) for (int i = r ;i >= l ;i --)
#define vt vector
#define pii pair <int ,int>


using namespace std;


signed main ()
{
	I AK CSP
	
	freopen ("travel.in" ,"r" ,stdin);
	freopen ("travel.out" ,"w" ,stdout);
	
	string a1 ,b1 ,a2 ,b2;
	cin >> a1 >> b1 >> a2 >> b2;
	
	if (a1 != a2)
	{
		cout << "0000" << endl;
		return 0;
	}
	cout << "1";
	if (b1[0] != b2[0] || b1[1] != b2[1])
	{
		cout << "000" << endl;
		return 0;
	}
	cout << "1";
	if (b1[2] <= 'C' && b2[2] >= 'D' || b1[2] >= 'D' && b2[2] <= 'C')
	{
		cout << "00" << endl;
		return 0;
	}
	cout << "1";
	char ch1 = min (b1[2] ,b2[2]) ,ch2 = max (b1[2] ,b2[2]);
	if (ch1 == 'A' && ch2 == 'B' || ch1 == 'B' && ch2 == 'C' || ch1 == 'D' && ch2 == 'F')
	{
		cout << "1" << endl;
		return 0;
	}
	cout << "0";

	return !!!!! ("ShZhao" && "SHzhao");
}
