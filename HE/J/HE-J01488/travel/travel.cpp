#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	char str_1 = s1[2];
	char str_2 = s2[2];
	if(c1 == c2){
		cout<<"1";
		if(s1[0] == s2[0] and s1[1] == s2[1]){
			cout<<"1";
			if(((s1[2] <= 'C' and s1[2] >='A') and (s2[2] <= 'C' and s2[2] >= 'A')) or ((s1[2] <= 'F' and s1[2] >= 'D') and (s2[2] <= 'F' and s2[2] >= 'D'))){
				cout<<"1";
				if((str_1 != 'C' and str_2 != 'D') or (str_1 != 'D' and str_2 != 'C') and (str_1 + 1 == str_2) or (str_2 + 1 == str_1)){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000"; 
	}
	return 0;
}
