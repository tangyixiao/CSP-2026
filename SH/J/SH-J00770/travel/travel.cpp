#include <bits/stdc++.h>
using namespace std;
struct ticket{
	string cabin,seat;
};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ticket t[5];
	for (int i=1;i<=2;i++){
		cin >> t[i].cabin >> t[i].seat;
	}
	if (t[1].cabin!=t[2].cabin){
		cout << "0000";
		return 0;
	}
	else {
		cout << "1";
		string sn1,sn2;
		sn1=sn1+t[1].seat[0];
		sn1=sn1+t[1].seat[1];
		sn2=sn2+t[2].seat[0];
		sn2=sn2+t[2].seat[1];
		if (sn1!=sn2){
			cout << "000";
			return 0;
		}
		else {
			cout << 1;
			char sl1,sl2;
			sl1=t[1].seat[2];
			sl2=t[2].seat[2];
			if ( ((sl1<='C' and sl1>='A') and (sl2>='D' and sl2<='F')) or ((sl2<='C' and sl2>='A') and (sl1>='D' and sl1<='F')) ){
				cout << "00";
				return 0;
			}
			else {
				cout << "1";
				if (sl1-1==sl2 or sl2-1==sl1) cout << "1";
				else {
					cout << "0";
					return 0;
				}
			}
		}
	}
	return 0;
}
