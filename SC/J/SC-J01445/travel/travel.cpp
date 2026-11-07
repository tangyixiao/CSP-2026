#include<iostream>
#include<cmath>
using namespace std;
int c1, c2, d1, d2;
char x1, x2;
bool a1, a2;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> d1 >> x1 >> c2 >>  d2 >> x2;
	if(c1 != c2) cout << "0000";
	else{
		cout<< 1;
		if(d1 != d2) cout << "000";
		else{
			cout << 1;
			a1 = ((x1-'A') <= 2);
			a2 = ((x2-'A') <= 2);
			if(a1 != a2) cout << "00";
			else{
				cout << 1;
				if(abs((x1-'A') - (x2-'A')) == 1) cout << 1;
				else cout << 0;
			}
		}
	}
	
	return 0;
}