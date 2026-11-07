#include <bits/stdc++.h>
using namespace std;
string c1,r1,c2,r2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> r1 >> c2 >> r2;
	r1 = " " + r1;
	r2 = " " + r2;
	c1 = " " + c1;
	c2 = " " + c2;
	if(c1 == c2) cout << "1";
	else {
		cout << "0000";
		return 0;
	}
	if(r1[1] == r2[1] && r1[2] == r2[2]) cout << "1";
	else{
		cout << "000";
		return 0;
	}
	if(r1[3] == 'F' && r2[3] == 'D') {cout << "11";return 0;} 
	else if(r2[3] == 'F' && r1[3] == 'D') {cout <<"11";return 0;} 
	else if(r1[3] == 'A' && r2[3] == 'B') {cout << "11";return 0;} 
	else if(r2[3] == 'A' && r1[3] == 'B') {cout << "11";return 0;} 
	else if(r1[3] == 'B' && r2[3] == 'C') {cout << "11";return 0;} 
	else if(r2[3] == 'B' && r1[3] == 'C') {cout << "11";return 0;} 
	else if(r1[3] == 'A' && r2[3] == 'C') {cout << "10";return 0;} 
	else if(r2[3] == 'A' && r1[3] == 'C') {cout << "10";return 0;}
	else cout << "00";
	return 0;
} 
