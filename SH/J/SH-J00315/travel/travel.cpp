#include <iostream>
#include <algorithm>
using namespace std;
int a,d;
int main() {
	string s,f,ans = "";
	a.freopen("travle","r",in);
	s.freopen("travle","r",in);
	d.freopen("travle","r",in);
	f.freopen("travle","r",in);
	char  g = s[2],h = f[2];
	if (a == d) {
		ans += "1";
		if ((s[0] == f[0]) && (s[1] == f[1])) {
			ans += "1";
			if (abs(g-h)) {
				if (h == "D" || g == "D") {
					ans += "00";
				}
				else {
					ans += "11";
				}
			}
			else if (abs(g-h) == 2) {
				if (h == "F" || g == "F")
					ans += "11";
				else{
					if (g != "D" || f != "D")
						ans += "10";
					else
						ans += "00";
				}
			}
			else
				ans += "00";
		}
		else {
			ans += "000";
		}
	}
	else {
		ans += "0000";
	}
	ans.freopen("travle","w",in);
	return 0;
}
