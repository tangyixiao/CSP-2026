#include<bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int ans1, ans2, ans3, ans4;
int main(){
	cin.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		ans1 = 1;
		if((s1[0] + s1[1]) == (s2[0] + s2[1])){
			ans2 = 1;
			if((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C')){
				ans3 = 1;
				if(abs(int(s1[2]) - int(s2[2])) == 1){
					ans4 = 1;
				}
			}else if((s1[2] == 'D' || s1[2] == 'E') && (s2[2] == 'D' || s2[2] == 'E')){
				ans3 = ans4 = 1;
			}
		}
	}
	cout << ans1 << ans2 << ans3 << ans4;
	return 0;
}