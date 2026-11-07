#include<bits/stdc++.h>
using namespace std;
string x1, x2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		cout << "1";
		for(int i = 0; i <= 1; i++){
			x1 += s1[i];
			x2 += s2[i];
		}
		if(x1 == x2){
			cout << 1;
			char o1 = s1[2];
			char o2 = s2[2];
			if(o1 == 'A' || o1 == 'B' || o1 == 'C'){
				if(o2 == 'A' || o2 == 'B' || o2 == 'C'){
					cout << "1";
					int tmp1 = int(o1);
					int tmp2 = int(o2);
					if(abs(o1-o2) == 1) cout << "1";
					else cout << "0";
				}
				else cout << "00";
			}
			else if(o1 == 'D' || o1 == 'F'){
				if(o2 == 'D' || o2 == 'F'){
					cout << "1";
					int tmp1 = int(o1);
					int tmp2 = int(o2);
					if(abs(o1-o2) == 1) cout << "1";
					else cout << "0";
				}
				else cout << "00";
			}
		}
		else cout << "000";
	}
	else cout << "0000";
	return 0;
}