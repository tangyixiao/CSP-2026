#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	bool b1 = (c1 == c2),b2 = false,b3 = false,b4 = false;
	if(b1){
		b2 = (s1[0] + s1[1] == s2[0] + s2[1]);
		if(b2){
			if(s1[2] <= 'C' && s2[2] <= 'C') b3 = true;
			else if(s1[2] >= 'D' && s2[2] >= 'D') b3 = true;
			else b3 = false;
			if(b3){
				int k = abs(s1[2] - s2[2]);
				if(k == 1) b4 = true;
				else if(s1[2] == 'D' && s2[2] == 'F' || s1[2] == 'F' && s2[2] == 'D') b4 = true;
				else b4 = false;
			}
			else b4 = false;
		}
		else{
			b3 = false;
			b4 = false;
		}
	}
	else{
		b2 = b1;
		b3 = b1;
		b4 = b1;
	}
	cout << b1 << b2 << b3 << b4 << '\n';
	return 0;
}
