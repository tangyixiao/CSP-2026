#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		cout << 1;
	}else{
		cout << "0000";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	string p1, p2;
	p1 = s1[0]+s1[1];
	p2 = s2[0]+s2[1];
	if(p1 == p2){
		cout << 1;
	}else{
		cout << "000";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	char a = s1[2], b = s2[2];
	if((a == 'A' || a == 'B' || a == 'C') && (b == 'A' || b == 'B' || b == 'C')){
		cout << 1;
	}else if((a == 'D' || a == 'F') && (b == 'D' || b == 'F')){
		cout << 1;
	}else{
		cout << "00";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	char x = a, y = b;
	if(b < a){
		x = b;
		y = a;
	}
	if(y-x == 1 || (x == 'D' && y == 'F')){
		cout << 1;
	}else{
		cout << 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
