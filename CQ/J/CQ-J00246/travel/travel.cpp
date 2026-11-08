#include<bits/stdc++.h>
using namespace std;
int c,x;
string s,y;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","W",stdout);
	if(c==x){
		cout<<"1";
		if(s[0]-'0'*10+s[1]-'0'*10==y[0]-'0'*10+y[1]-'0'*10){
			cout<<"1";
			if(s[2]<='C'&&s[2]>='A'&&y[2]<='C'&&y[2]>='A'){
				cout<<"1";
				if(s[2]<='C'&&s[2]>='A'){
					if(abs((s[2]-'0')-(y[2]-'0'))==1){
						cout<<"1";
					}else cout<<"0";
				}
			}else cout<<"00"; 
		}else cout<<"000"; 
	}else cout<<"0000";
	return 0;
}
