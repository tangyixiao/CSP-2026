#include <iostream>
#include <string>
using namespace std;
string c1,s1,c2,s2;
bool check1(char a,char b){
	if (a > b) swap(a,b);
	if ((a == 'A' && b == 'B') || (a == 'A' && b == 'C') || (a == 'B' && b == 'C') || (a == 'D' || a == 'F')) return 1;
	return 0;
}
bool check2(char a,char b){
	if (a > b) swap(a,b);
	if (b - a == 1 || (a == 'D' && b == 'F')) return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2){
		cout << "1";
		if (s1.substr(0,2) == s2.substr(0,2)){
			cout << "1";
			if (check1(s1[2],s2[2])){
				cout << "1";
				if (check2(s1[2],s2[2])) cout << "1";
				else cout << "0";
			}
			else cout << "00";
		}
		else{
			cout << "000";
		}
	}
	else{
		cout << "0000"; 
	}
} 