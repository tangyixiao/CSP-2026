#include <bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		cout << 1;
		string a = "",b = "";
		for(int i = 0;i <= 1;i++){
			a+=s1[i];
			b+=s2[i];
		}
		if(a == b){
			cout << 1;
			char a1 = s1[2],b1 = s2[2];
			if(('A' <= a1 && a1 <= 'C') && ('A' <= b1 && b1 <= 'C')){
				cout << 1;
				if(abs(a1-b1) == 1){
					cout << 1;
				}else{
					cout << 0;
				}
			}else if(('D' <= a1 && a1 <= 'F') && ('D' <= b1 && b1 <= 'F')){
				cout << "11";
			}else{
				cout << "00";
			}
		}else{
			cout << "000";
		}
	}
	else{
		cout << "0000";
	}
	return 0;
} 