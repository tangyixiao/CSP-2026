#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string r,R,x,X;
	cin >> r >> R >> x >> X;
	if(r!=x){
		cout << "0000";
	}
	else{
		cout << 1;
		if(R[0]+R[1]==X[0]+X[1]){
			cout << 1;
			if('A'<=R[2]<X[2]<='C'||'A'<=X[2]<R[2]<='C'){
				cout << 1;
				if(R[2]-X[2]==1||X[2]-R[2]==1){
					cout << "1";
				}
				else{
					cout << "0";
				}
			}
			else if('D'<=R[2]<='F'&&'D'<=X[2]<='F'){
				cout << "11";
			}
			else{
				cout << "00";
			}
		}
		else{
			cout << "000";
		}
	}
	
	
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}

