#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		cout << 1;
		string r1 = "",r2 = "";
		r1 += s1[0],r1 += s1[1];
		r2 += s2[0],r2 += s2[1];
		if(r1 == r2){
			cout << 1;
			if((s1[2] >= 'A' && s1[2] <= 'C' && s2[2] >= 'A' && s2[2] <= 'C') || (s1[2] >= 'E' && s1[2] <= 'F' && s2[2] >= 'E' && s2[2] <= 'F')){
				cout << 1;
				char x1 = s1[2],x2 = s2[2];
				if(x1 == x2+1 || x2 == x1+1){
					cout << 1;
				}else{
					cout << "0";
				}
			}else{
				cout << "00";
			}
		}else{
			cout << "000";
		}
	}else{
		cout << "0000";
	}
	return 0;
}
