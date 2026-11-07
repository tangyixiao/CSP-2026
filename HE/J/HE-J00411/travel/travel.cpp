#include<bits/stdc++.h>
using namespace std;
#define int long long
string c1,c2,s1,s2;
char p,d;
bool flag1 = 0,flag2 = 0,flag3 = 0,flag4 = 0,flag5 = 0;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> c2 >> s1 >> s2;
	p = c2[2];
	d = s2[2];
	if(c1 == s1){
		cout << 1;
		flag1 = 1;
	} 
	else cout << 0;
	
	if(c2[0] == s2[0] && c2[1] == s2[1] && flag1){
		cout << 1;
		flag2 = 1;
	}
	else cout << 0;
	
	if(p >= 'D' && d >= 'D' && flag1 && flag2){
		cout << 1;
		flag3 = 1;
	}
	else if(p < 'D' && d < 'D' && flag1 && flag2){
		cout << 1;
		flag4 = 1;
	}
	else cout << 0;
	
	if(flag3){
		if(p == 'D' && d == 'F') cout << 1;
		else if(p == 'F' && d == 'D') cout << 1;
		else cout << 0;
	}
	else if(flag4){
		if(p == 'A' && d == 'B') cout << 1;
		else if(p == 'B' && d == 'A') cout << 1;
		else if(p == 'B' && d == 'C') cout << 1;
		else if(p == 'C' && d == 'B') cout << 1;
		else cout << 0;
	}
	else cout << 0;
	return 0;
} 
