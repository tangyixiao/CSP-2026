#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(s1[2]=='F') s1[2]='E';
	if(s2[2]=='F') s2[2]='E';
	if(c1!=c2){
		cout << "0000" << endl;
	}else{
		if(s1[0]!=s2[0] || s1[1]!=s2[1]){
			cout << "1000" << endl;
		}else{
			if(s1[2]<='C' && s2[2]<='C' || s1[2]>'C' && s2[2]>'C'){
				if(min(s1[2], s2[2])+1==max(s1[2], s2[2])){
					cout << "1111" << endl;
				}else{
					cout << "1110" << endl;
				}
			}else{
				cout << "1100" << endl;
			}
		}
	}
	return 0;
}