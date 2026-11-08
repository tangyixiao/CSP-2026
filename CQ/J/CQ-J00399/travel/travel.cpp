#include <bits/stdc++.h>
using namespace std;
string a1,b1,a2,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> a1 >> a2 >> b1 >> b2;
	string a3,b3;
	char a4,b4;
	a3 = a2[0] + a2[1];
	b3 = b2[0] + b2[1];
	a4 = a2[2];
	b4 = b2[2];
	if(a1 == b1){
		cout << '1';
		if(a3 == b3){
			cout << '1';
			if((a4 >= 'A' && a4 <= 'C' && b4 >= 'A' && b4 <= 'C') || (a4 >= 'D' && a4 <= 'F' && b4 >= 'D' && b4 <= 'F')){
				cout << '1';
				if(a4 + 1 == b4 || b4 + 1 == a4){
					cout << '1';
				}else{
					cout << '0';
				}
			}else{
				cout << "00";
			}
		}else{
			cout << "000";
		}
	}else{
		cout << "0000";
	}
	return 0;
}

