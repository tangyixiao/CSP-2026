#include <bits/stdc++.h>
using namespace std;
int a;
int b;
string sr;
string sx;
bool t = 0;
bool y = 0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> sr;
	cin >> b >> sx;
	if(a == b){
		cout << 1;
		if(sr[0] == sx[0] && sr[1] == sx[1]){
			cout << 1;
			t = 1;
		}else{
			cout << 0;
		}
		if(t == 0){
			cout << 0;
		}else{
			if(sr[2] == 'A' or sr[2] == 'B' or sr[2] == 'C'){
				if(sx[2] == 'A' or sx[2] == 'B' or sx[2] == 'C'){
					cout << 1;
					y = 1;
				}
			}
			if(sr[2] == 'D' or sr[2] == 'F'){
				if(sx[2] == 'D' or sx[2] == 'F'){
					cout << 1;
					y = 1;
				}
			}
		}
		if(y == 0){
			cout << 0;
			return 0;
		}//3rd
	}else{
		cout << 0 << 0 << 0;
	}
	if(sr[2] == 'C' or sr[2] == 'D'){
		if(sx[2] == 'C' or sx[2] == 'D'){
			cout << 0;
			return 0;
		}
	}else{
		if(sr[2] -'A' == sx[2] - 'A'+1){
//			cout << sr[2] -'A' << " " << sx[2] - 'A' << endl;
			cout << 1;
			return 0;
		}
		if(sr[2] -'A'+1 == sx[2] - 'A'){
//			cout << sr[2] -'A' << " " << sx[2] - 'A' << endl;
			cout << 1;
			return 0;
		}
	}
	cout << 0;
	return 0;
}
//02 01C 02 01D
