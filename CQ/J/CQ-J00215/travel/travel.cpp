#include <bits/stdc++.h>
using namespace std;
/*
? 两张车票对应的座位是否在同一节车厢；
? 两张车票对应的座位是否在同一节车厢的同一排；
? 两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧；
? 两张车票对应的座位是否相邻。
*/
int main(){
	freopen("travle.in","r",stdin);
	freopen("travle.out","w",stdout);
	string xa,xb,za,zb;
	cin >> xa >> za >> xb >> zb;
	if(xa != xb){
		cout << "0000";
		return 0;
	}else{
		cout << '1';
		string ta,tb;
		ta += za[0] + za[1];
		tb += zb[0] + zb[1];
		if(ta != tb){
			cout << "000";
			return 0;
		}else{
			cout << '1';
			if(za[2] <= 'C' && zb[2] <= 'C' || za[2] > 'C' && zb[2] > 'C'){
				cout << '1';
				if((za[2] - zb[2] == 1 || zb[2] - za[2] == 1) || (za[2] == 'D' && zb[2] == 'F' || za[2] == 'F' && zb[2] == 'D')) cout << '1';
				else cout << '0';
			}else{
				cout << "00";
			}
		}
	}
	return 0;
}

