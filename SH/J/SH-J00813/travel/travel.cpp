#include <bits/stdc++.h>
using namespace std;
int r, x;
string ra, rb, xa, xb;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> ra >> rb >> xa >> xb;
	if(ra != xa){
		cout << "0000";
		return 0;
	}
	else{
		cout << 1;
	}
	if(rb[0] != xb[0] || rb[1] != xb[1]){
		cout << "000";
		return 0;
	}
	else{
		cout << 1;
	}
	r = rb[2] - 'A' + 1;
	x = xb[2] - 'A' + 1;  
	if(r >= 1 && r <= 3 && x >= 1 && x <= 3){
		cout << 1;
	}
	else if(r >= 4 && x >= 4){
		cout << 1;
	}
	else{
		cout << "00";
		return 0;
	}
	if((r == x + 1 || r == x - 1) || ((r == 4 && x == 6) || (r == 6 && x == 4))){
		cout << 1;
	}
	else{
		cout << 0;
	}
	return 0;
} 
