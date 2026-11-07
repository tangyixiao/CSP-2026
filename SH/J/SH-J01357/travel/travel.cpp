#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int cR,cX;
	string sR,sX;
	cin >> cR >> sR >> cX >> sX;
	int hangR = stoi(sR.substr(0,2));
	int hangX = stoi(sX.substr(0,2));
	if (cR != cX){
		cout << "0000";
		return 0;
	}
	if (hangR != hangX){
		cout << 1000;
		return 0;
	}
	if (sR[2] <= 'C' && sX[2] <= 'C' || sR[2] >= 'D' && sX[2] >= 'D'){
		cout << 111;
		bool A = 0,B = 0,C = 0,D = 0,F = 0;
		if (sR[2] == 'A')A = 1;
		else if(sR[2] == 'B')B = 1;
		else if(sR[2] == 'C')C = 1;
		else if(sR[2] == 'D')D = 1;
		else if(sR[2] == 'F')F = 1;
		
		if (sX[2] == 'A')A = 1;
		else if(sX[2] == 'B')B = 1;
		else if(sX[2] == 'C')C = 1;
		else if(sX[2] == 'D')D = 1;
		else if(sX[2] == 'F')F = 1;
		
		if (A && B || B && C || D && F)cout << "1";
		else cout << "0";
	}else{
		cout << 1100;
	}
	return 0;
}
