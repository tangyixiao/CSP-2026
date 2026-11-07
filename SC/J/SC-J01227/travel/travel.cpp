#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
string c1,c2,s1,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> c1 >> s1 >> c2 >> s2;
	string l1,h1,l2,h2;
	l1=s1.substr(0,2);
	l2=s2.substr(0,2);
	h1=s1[2];
	h2=s2[2];
	if(c1==c2){
		cout << "1";
		if(l1==l2){
			cout << "1";
			if((h1>="A")&&(h1<="C")&&(h2>="A")&&(h2<="C")){
				cout << "1";
				if(((h1=="A")&&(h2=="C"))||((h2=="A")&&(h1=="C"))){
					cout << "0";
				}else{
					cout << "1";
				}
			}else if((h1>="D")&&(h1<="F")&&(h2>="D")&&(h2<="F")){
				cout << "11";
			}else{
				cout << "00";
			}
		}else{
			cout << "000";
		}
	}else{
		cout << "0000";
	}
	return 0;
}