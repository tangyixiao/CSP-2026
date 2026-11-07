#include <bits/stdc++.h>
using namespace std;
string cr,sr,cx,sx;
int a,b,c,d,g;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> cr >> sr >> cx >> sx;
	if(cr!=cx){
		cout << "0000";
		return 0;
	}
	if(sr[2]=='A'&&sx[2]=='C'){
		g=1;
	}
	if(sx[2]=='A'&&sr[2]=='C'){
		g=1;
	}
	if(sr[0]==sx[0]&&sr[1]==sx[1]){
		int e=sr[2];
		int f=sx[2];
		if(abs(e-f)<=1||g==1){
			if(e==67&&f==68){
				cout << "1100";
				return 0;
			}
			if(f==67&&e==68){
				cout << "1100";
				return 0;
			}
			if(g==0){
				cout << "1111";
				return 0;
			}
			cout << "1110";
			return 0;
		}
		cout << "1100";
		return 0;
	}
	cout << "1000";
	return 0;
}
