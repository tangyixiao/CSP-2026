#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 != c2){
		cout << "0000";
		return 0;
	}
	cout << 1;
	string p1 = s1.substr(0,2),p2 = s2.substr(0,2);
	if(p1 != p2){
		cout << "000";
		return 0;
	}
	cout << 1;
	char id1 = s1[2],id2 = s2[2];
	int l1 = (id1 >= 'D' && id1 <= 'F') ? 1 : 0;
	int l2 = (id2 >= 'D' && id2 <= 'F') ? 1 : 0;
	if(l1 != l2){
		cout << "00";
		return 0;
	}
	if(l1 == 1){
		cout << "11";
		return 0;
	}
	if(abs(id1 - id2) == 1){
		cout << "11";
		return 0;
	}
	cout << "10";
	return 0;
} 