#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
string c1, c2, c3, c4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> c1 >> c2 >> c3 >> c4;
	if(c1==c3){
		cout << 1;
		if(c2[0]==c4[0] && c2[1]==c4[1]){
			cout << 1;
			if(c2[2]=='A' || c2[2]=='B' || c2[2]=='C'){
				if(c4[2]=='A' || c4[2]=='B' || c4[2]=='C'){
					cout << 1;
					int a=c2[2]-'0'+1;
					int b=c4[2]-'0'+1;
					if(a+1==b || b+1==a) cout << 1;
					else cout << 0;
				}else cout << "00";
			}else{
				if(c4[2]=='D' || c4[2]=='E'){
					cout << 1;
					cout << 1;
					int x=c2[2]-'0'+1;
					int y=c4[2]-'0'+1;
					if(x+1==y || y+1==x) cout << 1;
					else cout << 0;
				}else cout << 0;
			}
		}else cout << "000";
	}else cout << "0000";
	return 0;
}