#include<bits/stdc++.h>
using namespace std;
#define ll long long
string c1, c2, z1, z2;
void check(){
	if(c1 != c2){
		cout << "0000";
		return ;
	}
	cout << 1;
	if(z1.substr(0, 2) != z2.substr(0, 2)){
		cout << "000";
		return ;
	}
	cout << 1;
	char a = z1[2], b = z2[2];
	if(a > b){
		swap(a, b);
	}
	if(a == 'C'){
		cout << "00";
		return ;
	}
	cout << 1;
	if(b == a + 1){
		cout << "1";
	}
	else{
		cout << "0";
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> z1 >> c2 >> z2;
	check();
	return 0;
} 
//.....................................................
//.RRRRRRRRRRR...PPPPPPPPPPP...........................
//.RR........RRR.PP........PPP......+...........+......
//.RR.........RR.PP.........PP......+...........+......
//.RR........RRR.PP........PPP......+...........+......
//.RRRRRRRRRRR...PPPPPPPPPPP...+++++++++++.+++++++++++.
//.RRRRRRR.......PP.................+...........+......
//.RR...RRRRR....PP.................+...........+......
//.RR......RRRRR.PP.................+...........+......
//.R.........RRR.PP....................................
//.....................................................