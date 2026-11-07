#include <bits/stdc++.h>
using namespace std;

int cx1,cx2;
string st1,st2;

int main (){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> cx1;
	cin >> st1;
	cin >> cx2;
	cin >> st2;
	
	if (cx1 == cx2){
		cout << '1';
		if (st1[0] == st2[0] && st1[1] == st2[1]){
			cout << '1';
			if ((st1[2] == 'C' and st2[2] == 'D') || (st1[2] == 'D' and st2[2] == 'C')){
				cout << "00";
				return 0;
			} else {
				cout << '1';
				if (abs(st1[2] - st2[2]) <= 2){
					cout << '1';
					return 0;
				} else{
					cout << '0';
					return 0;
				}
			}
		} else {
			cout << "000";
			return 0;
		}
	} else {
		cout << "0000";
		return 0;
	}

}
