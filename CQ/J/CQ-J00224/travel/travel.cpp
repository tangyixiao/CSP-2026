#include <iostream>
using namespace std;

int main(){
	freopen("travel.in","r",stdin)
	freopen("travel.out","w",stdout);
	
	string o = "";
	int c1;  cin >> c1;
	string z1; cin >> z1;
	int c2;  cin >> c2;
	string z2; cin >> z2;
	
	if (c1 == c2){
		o += "1";
		if (int(z1[0]+z1[1]) == int(z2[0]+z2[1])){
			o += "1";
			if ((z1[2]=='A'&&z2[2]=='B') || (z1[2]=='B'&&z2[2]=='A') || (z1[2]=='B'&&z2[2]=='C') || (z1[2]=='C'&&z2[2]=='B') || (z1[2]=='A'&&z2[2]=='C') || (z1[2]=='C'&&z2[2]=='A') || (z1[2]=='D'&&z2[2]=='F') || (z1[2]=='F'&&z2[2]=='D')){
				o += "1";
				if((z1[2]=='A'&&z2[2]=='B') || (z1[2]=='B'&&z2[2]=='A') || (z1[2]=='B'&&z2[2]=='C') || (z1[2]=='C'&&z2[2]=='B') || (z1[2]=='D'&&z2[2]=='F') || (z1[2]=='F'&&z2[2]=='D')){
					o += "1";
				}else{
					o += "0";
				}
			}else{
				o += "00";
			}
		}else{
			o += "000";
		}
	}else{
		o += "0000";
	}
	
	cout << o;
	
	return 0;
}
