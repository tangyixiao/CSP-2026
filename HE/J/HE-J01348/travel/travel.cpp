#include<bits/stdc++.h>
using namespace std;

int main(){
	
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	
	bool f1 = (c1 == c2);
	
	int n1, n2;
	n1 = (s1[0] - '0') * 10 + (s1[1] - '0');
	n2 = (s2[0] - '0') * 10 + (s2[1] - '0');
	bool f2 = (n1 == n2);
	
	char c1 = s1[2];
	char c2 = s2[2];
	
	bool f3 = false;
	if((c1 >= 'A' && c1 <= 'C') && (c2 >= 'A' && c2 <= 'C')){
		f3 = true;
	}else if((c1 >= 'D' && c1 <= 'F') && (c2 >= 'D' && c2 <= 'F')){
		f3 = true;
	}
	
	bool f4 = false;
	if(abs(int(c1 - c2)) == 1){
		f4 = true;
	}
	
	if(f1 == false) f2 = false;
	if(f2 == false) f3 = false;
	if(f3 == false) f4 = false;
	
	cout << f1 << f2 << f3 << f4;
	return 0;
}
