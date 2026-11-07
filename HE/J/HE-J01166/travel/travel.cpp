#include <bits/stdc++.h>
using namespace std;
int r1,x1;
char r[5],x[5];
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
	cin >> r1;
	for(int i=1;i<=3;i++){
		cin >> r[i];
	}
	cin >> x1;
	for(int i=1;i<=3;i++){
		cin >> x[i];
	}
	if(r1==x1){
		cout << "1";
		if(r[1]==x[1]&&r[2]==x[2]){
			cout << "1";
			if(r[3]>='D'&&x[3]>='D'||r[3]<='C'&&x[3]<='C'){
				cout << "1";
				if(r[3]-x[3]==1||x[3]-r[3]==1){
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
		else{
			cout << "000";
		}
	}
	else{
		cout << "0000";
	}
    return 0;
}
