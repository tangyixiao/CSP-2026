#include <bits/stdc++.h>

using namespace std;

string C1, S1, C2, S2;

bool f(){
	if ((('A' <= S1[2]) && (S1[2] <= 'C') && ('A' <= S2[2]) && (S2[2] <= 'C')) || (('D' <= S1[2]) && (S1[2] <= 'E') && ('D' <= S2[2]) && (S2[2] <= 'E'))){
		return 1;
	}else return 0;
}

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	//ios::sync_with_stdio(0);
	//cin.tie(0), cout.tie(0);
	cin >> C1 >> S1 >> C2 >> S2;
	if (C1 == C2){
		cout << "1";
		if ((S1[0] == S2[0]) && (S1[1] == S2[1])){
			cout << "1";
			if (f()){
				cout << "1";
				if ((S1[2] - S2[2] == 1) || (S1[2] - S2[2] == -1)){
					cout << "1";
				}else{
					cout << "0";
				}
			}else{
				cout << "00";
				return 0;
			}
		}else{
			cout << "000";
			return 0;
		}
		
	}else{
		cout << "0000";
		return 0;
	}	
	return 0;
}
