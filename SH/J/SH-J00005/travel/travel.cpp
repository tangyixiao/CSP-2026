#include<bits/stdc++.h>
#define LL long long
using namespace std;
string c_1, s_1, c_2, s_2;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin >> c_1 >> s_1 >> c_2 >> s_2;
	if(c_1 == c_2){
		cout << "1";
		if(s_1.substr(0, 2) == s_2.substr(0, 2)){
			cout << "1";
			if(s_1[2] <= 'C' && s_2[2] <= 'C'){
				cout << "1";
				if(abs(s_1[2] - s_2[2]) == 1)
					cout << "1";
				else
					cout << "0";
			}
			else if(s_1[2] >= 'D' && s_2[2] >= 'D')
				cout << "11";
			else
				cout << "00";
		}
		else
			cout << "000";
	}
	else
		cout << "0000";
	cout << '\n';
	return 0;
}
