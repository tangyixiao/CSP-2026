#include <bits/stdc++.h>;
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string anum,bnum;
	string a,b;
	cin >> anum >> a >> bnum >> b;
	if(anum[0] == bnum[0] && anum[1] == bnum[1]){
		cout << 1;
		if(a[0] == b[0] && a[1] == b[1]){
			cout << 1;
			if(a[2] >='A' && a[2] <= 'C'){
				if(b[2] >= 'A' && b[2] <= 'C'){
					cout << 1;
					if(a[2] == 'A' && b[2]=='B'){
						cout << 1;
					} else if(a[2] == 'B' && b[2] == 'A'){
						cout << 1;
					} else if(a[2] == 'B' && b[2] == 'C'){
						cout << 1;
					} else if(a[2] == 'C' && b[2] == 'B'){
						cout << 1;
					} else{
						cout << 0;
					}
				}else{
					cout << "00";
				}
			}else{
				if(b[2] >= 'A' && b[2] <= 'C'){
					cout << "00";
				}else{
					if(a[2] == 'D' && b[2] == 'F'){
						cout << 1;
					} else if(a[2] == 'F' && b[2] == 'D'){
						cout << 1;
					} else{
						cout << 0;
					} 
				}
			}
		}else{
			cout << "000";
		}
	}else{
		cout << "0000";
	}
	return 0;
}
