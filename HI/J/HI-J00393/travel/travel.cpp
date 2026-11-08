#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a,b;
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		if(s1.substr(0,2)==s2.substr(0,2)){
			a=s1[2];b=s2[2];
			if(a<='C'&&b<='C'||a>='D'&&b>='D'){
				if(a=='A'&&b=='B'||a=='B'&&b=='C'||a=='D'&&b=='F'){
					cout<<"1111";
				}
				else if(b=='A'&&a=='B'||b=='B'&&b=='C'||b=='D'&&a=='F'){
					cout<<"1111";
				}
				else{
					cout<<"1110";
				}
			}
			else{
				cout<<"1100";
			}
		}
		else{
			cout<<"1000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}
