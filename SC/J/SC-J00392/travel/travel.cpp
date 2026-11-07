#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> s1 >> s2 >> s3 >> s4;
	bool a1 = 0,a2 = 0,a3 = 0,a4 = 0;
	if(s1 == s3){
		a1 = 1;
		if(s2[0] == s4[0] && s2[1] == s4[1]){	
			a2 = 1;
			if((s2[2] < 'D' && s4[2] < 'D') || (s2[2] >= 'D' && s4[2] >= 'D')){
				a3 = 1;
				if((s2[2] == 'A' && s4[2] == 'B') || 
				   (s2[2] == 'B' && s4[2] == 'C') || 
				   (s2[2] == 'D' && s4[2] == 'F')){
					a4 = 1;
				}
			}
		}
	}
	if(a1)cout << 1;
	else cout << 0;
	if(a2)cout << 1;
	else cout << 0;
	if(a3)cout << 1;
	else cout << 0;
	if(a4)cout << 1;
	else cout << 0;
	return 0;
}