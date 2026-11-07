//travel
//2026-10-31
//×´Ì¬£º¿¼ÊÔ:( 
#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int car1, car2, row1, row2;
	char tmp1, tmp2;
	int col1, col2;
	cin >> car1 >> row1 >> tmp1 >> car2 >> row2 >> tmp2;
	col1 = tmp1 - 'A'; col2 = tmp2 - 'A';
	if (car1 == car2){
		cout << 1;
		if (row1 == row2){
			cout << 1;
			if (((col1<=2 && col1 >=0) && (col2<=2 && col2 >=0)) || ((col1<=4 && col1 >=3) && (col2<=4 && col2 >=3))){
				cout << 1;
				if (abs(col1 - col2) <=1){
					cout << 1 << endl;
				}else {
					cout << 0 << endl;
				}
			}else {
				cout << "00" << endl;
			}
		}else{
			cout << "000" << endl;
		}
	}else {
		cout << "0000"<< endl;
	}
	return 0;
}

