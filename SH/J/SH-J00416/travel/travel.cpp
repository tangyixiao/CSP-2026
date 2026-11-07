#include <bits/stdc++.h>
using namespace std;
long long a,b;
string j,q;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> j >> b >> q;
	if(a == b){
		cout << "1";
		if(j[0] == q[0] && j[1] == q[1]){
			cout << "1";
			if(j[2] == 'A' || j[2] == 'B' || j[2] == 'C'){
				if(q[2] == 'A' || q[2] == 'B' || q[2] == 'C'){
					cout << "1";
					if(abs(q[2]-j[2]) == 1){
						cout << "1";
					}
					else{
						cout << "0";
					}
				}
				else{
					cout << "00";
				}
			}
			if(j[2] == 'D' || j[2] == 'F'){
				if(q[2] == 'D' || q[2] == 'F'){
					cout << "1";
					if(abs(q[2]-j[2]) == 1){
						cout << "1";
					}
					else{
						cout << "0";
					}
				}
				else{
					cout << "00";
				}
			}
		}
		else{
			cout << "000";
		}
	}
	else{
		cout <<"0000";
	}
	return 0;
} 
