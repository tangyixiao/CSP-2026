// travel by A67dgt027FxdGT54 (luogu user 1417426)

// I spent 20mins to try linux.

// vim is ***.

#include<bits/stdc++.h>
using namespace std;
#define int long long // 10 year OI = GUNMU


signed main(signed argc, const char* argv[]){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("travel.in", "r", stdin); // i found filename is string (8:53)
	freopen("travel.out", "w", stdout);
	
	string trainA, trainB;
	string seatA, seatB;
	
	cin >> trainA >> seatA >> trainB >> seatB;
	
	if(trainA == trainB){ // in the same train
		cout << "1";
		if(seatA.substr(0, 2) == seatB.substr(0, 2)){ // in the same row
			cout << "1";
			if(seatA[2] <= 'C' && seatB[2] <= 'C' || seatA[2] >= 'D' && seatB[2] >= 'D'){ // at the same side
				cout << "1";
				if(
					seatA[2] == 'A' && seatB[2] == 'B' || // wtf?
					seatA[2] == 'B' && seatB[2] == 'C' ||
					seatA[2] == 'D' && seatB[2] == 'F' ||
					seatA[2] == 'B' && seatB[2] == 'A' ||
					seatA[2] == 'C' && seatB[2] == 'B' ||
					seatA[2] == 'F' && seatB[2] == 'D' 
				){
					cout << "1";
				}
				else cout << "0";
			} 
			else cout << "00";
		}
		else cout << "000";
	}
	else{
		cout << "0000";
	}
	
} 
