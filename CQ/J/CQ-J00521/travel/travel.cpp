#include<bits/stdc++.h>
#define int long long
using namespace std;
void io(){ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);}
void fp(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
}
string c1,c2,s1,s2;
main(){
	io();fp();
	cin >> c1 >> s1 >> c2 >> s2;
	char a=s1[2],b=s2[2];
	if(a=='F') a='E';
	if(b=='F') b='E';
//	cout << (int)(abs(a-b)) <<"\n\n";
	if(c1==c2) {
		cout << 1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout << 1;
			if((a>='D'&&b>='D')||(a<='C'&&b<='C')){
				cout << 1;
				if((int)abs((int)a-(int)b)==1){
					if((a=='C'&&a=='D')||(a=='D'&&b=='C')){
						cout << 0;return 0;
					}
					else {
						cout << 1;return 0;
					}
				}
				else {
					cout <<0;return 0;
				}
			}
			else {
				cout <<"00";return 0;
			}
		}
		else {
			cout <<"000";return 0;
		}
	}
	else {
		cout << "0000";
		return 0;
	}		
}
