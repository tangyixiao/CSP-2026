#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	string c1,c2,c3,c4;
	cin >> c1 >> c2 >> c3 >> c4;
	string s = "0000";
	if(c1 == c3){
		s[0] = '1';
		if(c2[0] == c4[0]&& c2[1] == c4[1]){
			s[1] = '1';
			if((c2[2] <= 'C' && c4[2] <= 'C') || (c2[2] > 'C' && c4[2] > 'C') ){
				s[2] = '1';
				int a = (c2[2] - 'A'),b=(c4[2] - 'A') ;
				if(abs(a-b) == 1) s[3] = '1'; 
			}
		} 
	}
	cout << s;
	return 0;
} 
