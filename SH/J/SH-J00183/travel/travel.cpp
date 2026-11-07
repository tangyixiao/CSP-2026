#include<bits/stdc++.h>
using namespace std;
string s,s2,s3,s4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> s >> s2 >> s3 >> s4;
	if(s == s3){
		cout << 1;
		if(s2[0] == s4[0] && s2[1] == s4[1]){
			cout << 1;
			char a = s2[2],b = s4[2];
			if(a == 'F' || a == 'D'){
				if(b == 'D' || b == 'F')
					cout << 11;
				else cout << "00";
			}
			else{
				if(b == 'A' || b == 'B' || b == 'C'){
					cout << 1;
					if(a == b + 1 || b == a + 1)
						cout << 1;
					else cout << 0;
				}
				else cout << "00";
			}
		}
		else cout << "000";
	}
	else cout << "0000";
	return 0;
} 
