#include<bits/stdc++.h>
using namespace std;
bool tong_ce(string x,string y){
	if((x <= "C" && x >= "A") && (y <= "C" && y >= "A")) return true;
	else if((x <= "F" && x >= "D") && (y <= "F" && y >= "D")) return true;
	return false;
}
bool xinglin(string x,string y){
	char x_x = x[0];
	char y_y = y[0];
	int p = x_x-64;
	int q = y_y - 64;
	if(abs(p-q) == 1) return true;
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r_1,r_2,x_1,x_2;
	cin >> r_1 >> r_2 >> x_1 >> x_2;
	string a_1 = r_2.substr(0,2);
	string b_1  = x_2.substr(0,2);
	string a_2 = r_2.substr(2,1);
	string b_2 = x_2.substr(2,1);
	if(r_1 == x_1) cout << 1;
	else cout << 0;
	if(r_1 == x_1 && a_1 == b_1) cout << 1;
	else cout << 0;
	if(r_1 == x_1 && a_1 == b_1 && tong_ce(a_2,b_2)) cout << 1;
	else cout << 0;
	if(r_1 == x_1 && a_1 == b_1 && tong_ce(a_2,b_2) && xinglin(a_2,b_2)) cout << 1;
	else cout << 0;
	return 0;
}
