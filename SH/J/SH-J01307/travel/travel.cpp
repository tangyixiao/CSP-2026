#include <bits/stdc++.h>
using namespace std;
int carA,carB,rowA,rowB,sideA,sideB;
char seatA[3],seatB[3];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>carA>>seatA[0]>>seatA[1]>>seatA[2];
	rowA=10*(seatA[0]-'0')+seatA[1]-'0';
	cin>>carB>>seatB[0]>>seatB[1]>>seatB[2];
	rowB=10*(seatB[0]-'0')+seatB[1]-'0';
	if (carA!=carB){
		cout<<"0000";
		return 0;
	}
	if (rowA!=rowB){
		cout<<"1000";
		return 0;
	}
	if (seatA[2]=='A'||seatA[2]=='B'||seatA[2]=='C')sideA=1;
	if (seatB[2]=='A'||seatB[2]=='B'||seatB[2]=='C')sideB=1;
	if (sideA!=sideB){
		cout<<"1100";
		return 0;
	}
	if (seatA[2]-seatB[2]==2||seatA[2]-seatB[2]==-2){
		cout<<"1110";
	}
	if (seatA[2]-seatB[2]==1||seatA[2]-seatB[2]==-1){
		cout<<"1111";
	}
	return 0;
}
