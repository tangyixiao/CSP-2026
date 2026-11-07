#include<bits/stdc++.h>
using namespace std;
string x,y,X,Y;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> x >> y >> X >> Y;
	if(x==X){
		cout << 1;
		if((y[0]==Y[0])&&(y[1]==Y[1])){
			cout << 1;
			if((y[2]=='D'&&Y[2]=='F')||(y[2]=='F'&&Y[2]=='D')||(y[2]=='A'&&Y[2]=='B')||(y[2]=='B'&&Y[2]=='A')||(y[2]=='A'&&Y[2]=='C')||(y[2]=='C'&&Y[2]=='A')||(y[2]=='B'&&Y[2]=='C')||(y[2]=='C'&&Y[2]=='B')){
				cout << 1;
				if(abs(y[2]-Y[2])==1||(y[2]=='D'&&Y[2]=='F')||(y[2]=='F'&&Y[2]=='D')){
					cout << 1;
				}
				else{
					cout << 0;
				}
			}
			else{
				cout << 0 << 0;
			}
		}
		else{
			cout << 0 << 0 << 0;
		}
	}
	else{
		cout << 0 << 0 << 0 << 0;
	}
	return 0;
} 