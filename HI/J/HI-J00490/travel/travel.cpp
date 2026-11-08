#include <bits/stdc++.h>
using namespace std;

int cx_a, cx_b;
string zw_a, zw_b;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> cx_a >> zw_a >> cx_b >> zw_b;
	
	if(cx_a != cx_b){
		cout << "0000";
		return 0;
	}

	if(zw_a[0]==zw_b[0] && zw_a[1]==zw_b[1]){
		if(zw_a[2] == 'D' || zw_a[2] == 'F'){
			if(zw_b[2] == 'D' || zw_b[2] == 'F'){
				cout << "1111";
				return 0;
			}
			else{
				cout << "1100";
				return 0;
			}
		}
		else{
			if(zw_b[2] == 'D' || zw_b[2] == 'F'){
				cout << "1100";
				return 0;
			}
			else{
				if((zw_a[2] == 'A' && zw_b[2] == 'C') || (zw_a[2] == 'C' && zw_b[2] == 'A')){
					cout << "1110";
					return 0;
				}
				else{
					cout << "1111";
					return 0;
				}
			}
		}
	}
	else{
		cout << "1000";
		return 0;
	}
	
	return 0;
}

