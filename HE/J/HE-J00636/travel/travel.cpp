#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int rc,xc;
string rs,xs;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> rc >> rs >> xc >> xs;
	if(rc == xc){
		cout << '1';
		if(rs[0] == xs[0] && rs[1] == xs[1]){
			cout << '1';
			if(rs[2] == 'D' && xs[2] == 'C'){
				cout << "00";
			}
			else if(rs[2] == 'C' && xs[2] == 'D'){
				cout << "00";
			}
			else if(rs[2] - xs[2] == 1 || xs[2] - rs[2] == 1){
				cout << "11";
			}
			else if(rs[2] - xs[2] == 2 && rs[2] != 'D' && xs[2] != 'D'){
				cout << "10";
			}
			else if(xs[2] - rs[2] == 2 && rs[2] != 'D' && xs[2] != 'D'){
				cout << "10";
			}
			else{
				cout << "00";
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
