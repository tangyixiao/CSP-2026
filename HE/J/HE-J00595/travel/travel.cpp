#include <bits/stdc++.h>
using namespace std;
string rz,xz;
int rx,xx;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> rx >> rz >> xx >> xz;
	if(rx==xx){
		cout << "1";
		if(rz[0]==xz[0]&&rz[1]==xz[1]){
			cout << "1";
			if((rz[2]<='C'&&xz[2]<='C')||(rz[2]>='D'&&xz[2]>='D')){
				cout << "1";
				int cha=rz[2]-xz[2];
				if(cha==1||cha==-1){
					cout << "1";
				}else{
					cout << "0";
				}
			}else{
				cout << "00";
			}
		}else{
			cout << "000";
		}
	}else{
		cout << "0000";
	}
	return 0;
}
