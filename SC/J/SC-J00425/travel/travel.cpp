#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int maxn = 1e5 + 2, mod = 998244353;
const ll inf = 1e18;
string c1, s1, c2, s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2){
		cout << "1";
		if (s1[0] == s2[0] && s1[1] == s2[1]){
			cout << "1";
			char a = s1[2], b = s2[2];
			if (('A' <= a && a <= 'C' && 'A' <= b && b <= 'C') || ('D' <= a && a <= 'F' && 'D' <= b && b <= 'F')){
				cout << "1";
				if ((a == b - 1 && b != 'D') || (b == a - 1 && a != 'D')) cout << "1";
				else cout << "0";
			}else
				cout << "00";
		}else
			cout << "000";
	}else
		cout << "0000";
	return 0; 
}
/*
8:20 鼠标好难用！滚轮是坏的！ 
8:30 Trick||Treat!
8:35 终于解压好了
8:42 哦我看错题面了。。。
8:46 写完T1，测大样例 
8:52 终于测完大样例（饭堂了），提交代码 
8:53 检查freopen 
*/ 