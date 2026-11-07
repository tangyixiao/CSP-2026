#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int rx,xx;
	string rz,xz;
	cin >> rx >> rz >> xx >> xz;
	if(rx==xx){
		cout << "1";
		if(rz[0]-'0'==0 && xz[0]-'0'==0){
			if(rz[1]==xz[1]){
				cout << "1";
				if(rz[2]=='A' || rz[2]=='B' || rz[2]=='C'){
					if(xz[2]=='D' || xz[2] =='F'){
						cout << "00";
						return 0;
					}
					else{
						cout << "1";
						if(rz[2]==xz[2]+1 || rz[2]==xz[2]-1){
							cout << "1";
						}
						else{
							cout << "0";
							return 0;
						}
					}
				}
			}
			else{
				cout << "000";
			}
		}
		else{
			cout << "000";
		}
	}
	else{
		cout << "0000";
	}
	return 0;
}
