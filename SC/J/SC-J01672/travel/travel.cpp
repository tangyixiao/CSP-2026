#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string cx , sx , cy , sy;
	cin >> cx >> sx >> cy >> sy;
	if(cx == cy){
		cout << '1';//1
		string sn = sx.substr(0 , 2) , sm = sy.substr(0 , 2);
		if(sn == sm){
			cout << '1';//2
			if(sx[2] >= 'A' && sx[2] <= 'C' && sy[2] >= 'A' && sy[2] <= 'C'){
				cout << '1';//3
				int x = sx[2] - 'A' , y = sy[2] - 'A';
				if(abs(x - y) == 1){
					cout << '1';//4
				}
				else{
					cout << '0';
				}
			}
			else if(sx[2] >= 'D' && sx[2] <= 'F' && sy[2] >= 'D' && sy[2] <= 'F'){
				cout << '1';//3
				int x = sx[2] - 'A' , y = sy[2] - 'A';
				if(abs(x - y) == 2){
					cout << '1';//4
				}
				else{
					cout << '0';
				}
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