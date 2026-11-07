#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	bool o[4] = {0,0,0,0},flag = 0;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1[0]==c2[0] && c1[1] == c2[1]) o[0] = 1;

	if(s1[0]==s2[0] && s1[1] == s2[1] && o[0] == 1) o[1] = 1;

	if(o[1] == 1){
		if(s1[2]<='C'&&s2[2]<='C') o[2] = 1;
		else if(s1[2]>='D' && s2[2]>='D') o[2] = 1;
	}

	if(o[2] == 1){
		if(s1[2]-s2[2] == 1 || s1[2]-s2[2] == -1)
			o[3] = 1;
	}
	for(int i = 0; i < 4; i++) cout << o[i];
	return 0;
}