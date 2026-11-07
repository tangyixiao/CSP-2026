#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		string a, b;
		a += s1[0];
		a += s1[1];
		b += s2[0];
		b += s2[1];
		if(a == b){
			string aa, bb;
			aa += s1[2];
			bb += s2[2];
			int x, y;
			if(aa == "D" || aa == "F"){
				x = 1;
			}
			else{
				x = 0;
			}
			if(bb == "D" || bb == "F"){
				y = 1;
			}
			else{
				y = 0;
			}
			if(x == y){
				int xx = aa[0] - 'A';
				int yy = bb[0] - 'A';
				xx = min(xx, 4);
				yy = min(yy, 4);
				if(xx - 1 == yy || xx + 1 == yy){
					cout << "1111" << "\n";
				}
				else{
					cout << "1110" << "\n"; 
				}
			}
			else{
				cout << "1100" << "\n"; 
			}
		}
		else{
			cout << "1000" << "\n";
		}
	}
	else{
		cout << "0000" << "\n";
	}
	

	return 0;
} 