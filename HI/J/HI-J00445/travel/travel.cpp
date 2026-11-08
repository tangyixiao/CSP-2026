#include<bits/stdc++.h>
using namespace std;
string ax,bx,aw,bw;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> ax >> aw >> bx >> bw;
	if(ax!=bx){
		cout << "0000";
		return 0;
	}
	cout << 1;
	if(aw[0]==bw[0] && aw[1]==bw[1]){
		cout << 1;
		if(aw[2]<='C' && bw[2]>='D' || aw[2]>='D' && bw[2]<='C'){
			cout << "00";
		}else{
			cout << 1;
			if(aw[2]+1==bw[2]+0 || aw[2]-1==bw[2]+0 || (aw[2]=='D' && bw[2]=='F') || (aw[2]=='F' && bw[2]=='D')){
				cout << 1;
			}else{
				cout << 0;
			}
		}
	}else{
		cout << 0 << 0 << 0;
	}
	
	return 0;
}
