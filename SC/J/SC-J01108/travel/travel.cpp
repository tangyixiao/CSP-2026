#include<bits/stdc++.h>
using namespace std;

string s;
bool f1=0,f2=0,f3=0,f4=0;

int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
	getline(cin,s);
	if(s.substr(0,2)==s.substr(7,2)){
		f1=1;
		if(s.substr(3,2)==s.substr(10,2)){
			f2=1;
			if(s[5]<='C'&&s[12]<='C'){
				f3=1;
				if(max(s[5],s[12])-min(s[5],s[12])==1){
					f4=1;
				}
			}
			else if(s[5]>'C'&&s[12]>'C'){
				f3=1;
				f4=1;
			}
		}
	}
	cout<<f1<<f2<<f3<<f4;
	return 0;
}