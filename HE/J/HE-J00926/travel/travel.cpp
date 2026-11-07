#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		cout << "1";
		if(s1[0] == s2[0] and s1[1] == s2[1]){
			cout << "1";
			if(s1[2] >= 'A' and s1[2] <= 'C' and s2[2] >= 'A' and s2[2] <= 'C'){
				cout << "1";
				if(s1[2] + 1 == s2[2] or s1[2] - 1 == s2[2]){
					cout << "1";
				}
				else{
					cout << "0";
				}
			}
			else if(s1[2] >= 'D' and s1[2] <= 'F' and s2[2] >= 'D' and s2[2] <= 'F'){
				cout << "11";
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
