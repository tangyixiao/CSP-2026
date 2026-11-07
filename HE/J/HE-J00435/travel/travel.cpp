#include<bits/stdc++.h>
using namespace std;
string ra,rb,xa,xb;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> ra>>rb>>xa>>xb;
	if(ra==xa){
		cout << '1';
		if(rb[0]==xb[0]&&rb[1]==xb[1]){
			cout << '1';
			if(rb[2]-'A'<3&&xb[2]-'A'<3){
				cout << '1';
				if(rb[2]-xb[2]==1||rb[2]-xb[2]==-1){
					cout << '1';
				}else{
					cout << '0';
				}
			}else if(rb[2]-'A'>2&&xb[2]-'A'>2){
				cout << "11";
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
