#include <bits/stdc++.h>
using namespace std;
char a[3] = {'A', 'B', 'C'};
char b[3] = {'D', 'F', 'F'};
string c_1, c_2, s_1, s_2;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c_1 >> s_1 >> c_2 >> s_2;
	if (c_1 != c_2){
		cout << "0000";
		return 0;
	}
	if (c_1 == c_2)
		cout << "1";
	if (s_1[0] == s_2[0] && s_1[1] == s_2[1])
		cout << "1";
	else{
		cout << "000";
		return 0;
	}
	char seat1 = (char) s_1[2];
	char seat2 = (char) s_2[2];
	int cnt1 = 0, cnt2 = 0, ans1 = 0, ans2 = 0;
	for (int i = 0; i < 3; i++){
		if (seat1 == a[i]){
			cnt1 = 1;
			ans1 = i + 1;
		}
		else if (seat1 == b[i]){
			cnt1 = 2;
			ans1 = i + 5;
		}
		if (seat2 == a[i]){
			cnt2 = 1;
			ans2 = i + 1;
		}
		else if (seat2 == b[i]){
			cnt2 = 2;
			ans2 = i + 5;
		}
	}
	if (cnt1 == cnt2)
		cout << "1";
	else{
		cout << "00";
		return 0;
	}
	if (abs(ans1 - ans2) == 1)
		cout << "1";
	else
		cout << "0";
	return 0;
}
