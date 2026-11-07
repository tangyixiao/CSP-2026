#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	int a1,b1,a2,b2;
	cin >> c1 >> s1 >> c2 >> s2;
	a1 = c1[1] - '0';
	if(c1[0] == '1') a1 += 10;
	a2 = c2[1] - '0';
	if(c2[0] == '1') a2 += 10;
	if(a1 == a2){
		cout << 1;
		b1 = s1[1] - '0';
		if(s1[0] == '1') b1 += 10;
		b2 = s2[1] - '0';
		if(s2[0] == '1') b2 += 10;
		if(b1 == b2){
			cout << 1;
			if(s1[2] <= 'C' && s2[2] <= 'C') cout << 1;
			else if(s1[2] > 'C' && s2[2] > 'C'){
				cout << 11;
				return 0;
			}
			else{
				cout << "00";
				return 0;
			}
			if(abs((int)s1[2]-(int)s2[2]) == 1) cout << 1;
			else cout << 0;
		}
		else cout << "000";
	}
	else cout << "0000";
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
