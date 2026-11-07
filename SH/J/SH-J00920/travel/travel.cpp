#include <bits/stdc++.h>
using namespace std;

int c1,c2,s1,s2;
string S1,S2;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> S1;
	cin >> c2 >> s2 >> S2;
	if (c1 != c2){
		cout << "0000";
	}
	else{
		cout << "1";
		if (s1 != s2){
			cout << "000";
		}
		else{
			cout << "1";
			if(!((S1=="A"&&S2=="B") || (S1=="A"&&S2=="C") || (S1=="B"&&S2=="A") || (S1=="B"&&S2=="C") || (S1=="C"&&S2=="A") || (S1=="C"&&S2=="B") || (S1=="D"&&S2=="F") || (S1=="F"&&S2=="D"))){
				cout << "00";
			}
			else{
				cout << "1";
				if((S1=="A"&&S2=="B") || (S1=="B"&&S2=="A")|| (S1=="B"&&S2=="C") || (S1=="C"&&S2=="B") || (S1=="D"&&S2=="F") || (S1=="F"&&S2=="D")){
					cout << "1";
				}
				else{
					cout << "0";
				}
			}
		}
	}
	return 0;
}
