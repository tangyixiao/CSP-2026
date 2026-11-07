#include<bits/stdc++.h>
using namespace std;
string a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	int c,d;
	cin >> c1 >> s1 >> c2 >> s2;
	a = s1[0]+s1[1];
	b = s2[0]+s2[1];
	c = s1[2];
	d = s2[2];
	if (c > d){
		swap(c,d);
		swap(s1,s2);
	}
	if (c1 == c2){
		cout << '1';
		if (a == b){
			cout << '1';
			if (c+1 == d && s1[2] != 'C'){
				cout << "11";
			}
			else if(c+2 == d){
				if (s1[2] == 'A'){
					cout << "10";
				}
				else{
					cout << "00";
				}
			}
			else{
				cout << "00";
			}
		}
		else{
			cout << "000";
		}
	}
	else{
		cout << "0000";
	}
	return 0;
}