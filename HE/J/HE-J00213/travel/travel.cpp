#include<bits/stdc++.h>
using namespace std;

string cx,cy,sx,sy;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> cx >> sx >> cy >> sy;
	if(cx != cy){
		cout << "0000" << endl;
		return 0; 
	}
	cout << 1;
	if(sx[0] != sy[0] || sx[1] != sy[1]){
		cout << "000" << endl;
		return 0; 
	}
	cout << 1;
	if(!((sx[2] >= 'D'&&sy[2] >= 'D')||(sx[2] <= 'C'&&sy[2] <= 'C'))){
		cout << "00" << endl;
		return 0;
	}
	cout << 1;
	if(abs(sx[2]-sy[2]) != 1||(sx[2] == 'C'&&sy[2] == 'D')||(sx[2] == 'D'&&sy[2] == 'C')){
		cout << "0" << endl;
		return 0;
	}
	cout << 1;
	return 0;
} 
