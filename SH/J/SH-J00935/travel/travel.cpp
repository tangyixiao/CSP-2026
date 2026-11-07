#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string cr, sr, cx, sx;
	int f = 1;
	cin >> cr >> sr >> cx >> sx;
	for (int i = 1;i <= 2;i++){
		if (cr[i] != cx[i]) f == 0;
	}
	cout << f;
	if (f){
		for (int i = 0;i < 2;i++){
			if (sr[i] != sx[i]) f == 0;
		}
		cout << f;
		if (f){
			if (sr[2] <= 'C' && sx[2] <= 'C' || sr[2] >= 'D' && sr[2] >= 'D'){
				cout << f;
			}
			if (f){
				if (sr[2] == 'A' && sx[2] == 'B'){
					cout << f;
				}
				else if (sx[2] == 'B' && sr[2] == 'A') cout << f;
				else if (sr[2] == 'C' && sx[2] == 'B') cout << f;
				else if (sr[2] == 'B' && sx[2] == 'C') cout << f;
				else if (sr[2] == 'D' && sx[2] == 'F') cout << f;
				else if (sr[2] == 'F' && sx[2] == 'D') cout << f;
				else cout << "0";
			}
		}
		else cout << "00";
	}
	else cout << "000";
	fclose(stdin);
	fclose(stdout);
}
