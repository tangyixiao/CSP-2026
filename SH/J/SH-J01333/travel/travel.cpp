#include<bits/stdc++.h>

using namespace std;

map<char,int> m;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	m['A'] = 1;m['B'] = 1;m['C'] = 1;
	m['D'] = 0;m['F'] = 0;
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if ((c1[0] == c2[0]) and (c1[1] == c2[1])){
		cout << 1;
	}else{
		cout << "0000";
		return 0;
	}
	
	if((s1[0] == s2[0]) and (s1[1] == s2[1])){
		cout << 1;
	}else{
		cout << "000";
		return 0;
	}
	
	if(m[s1[2]] == m[s2[2]]){
		cout << 1;
	}else{
		cout << "00";
		return 0;
	}
	
	//(s1 == 'A' and s2 == 'B') or (s1 == 'B' and s2 == 'A') or (s1 == 'B' and s2 == 'C') or (s1 == 'C' and s2 == 'B') or (s1 == 'D' and s2 == 'F') or (s1)
	
	if(abs(s1[2]-s2[2]) == 1){
		cout << 1; 
	}else{
		cout << 0;
		return 0;
	}
}
