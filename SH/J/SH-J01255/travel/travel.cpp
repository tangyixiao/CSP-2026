#include <bits/stdc++.h>
using namespace std;

string c1,c2,s1,s2;

bool aa(char a, char b){
	if(s1[2] == a && s2[2] ==b) return 1;	
	if(s1[2] == b && s2[2] ==a) return 1;
}
bool ia(char a, string b){
	for (int i =0;i<3;i++){
		if (b[i] == a) return 1;
	}
	return 0;
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2>> s2;
	if (c1 == c2) cout << 1;
	else cout << 0;
	if ((s1[0] == s2[0] &&s1[1] == s2[1]) && c1 == c2) cout << 1;
	else cout << 0;
	string bo1 = "ABC", bo2="DF";
	int ans4=0;
	if (s1[0] == s2[0] &&s1[1] == s2[1] && c1 == c2){	
		if ((ia(s1[2],bo1) && ia(s2[2],bo1)) ||(ia(s1[2],bo2) && ia(s2[2],bo2))) {
			cout << 1;
			
			if(aa('A','B')) ans4=1;	
			if(aa('B','C')) ans4=1;	
			if(aa('D','F')) ans4=1;	
		}else cout << 0;
	}else cout << 0;
	
	cout << ans4;
	
}
