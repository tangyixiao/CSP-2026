#include<bits/stdc++.h>
using namespace std;
string c,c1,s,s1;
int main(){
	freopen("travel.in","r",stdin);
	cin>>c>>s>>c1>>s1;
	if(c==c1){
		cout<<"1";
		if(s[0]==s1[0] && s[1]==s1[1]){
			cout<<"1";
			if((s[2]<='C' && s1[2]<='C') || (s[2]>'C' && s1[2]>'C')){
				cout<<"1";
				if((s[2]==s1[2]-1) || (s[2]==s1[2]+1)){
					cout<<"1";
				}else cout<<"0";
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	
	freopen("travel.out","w",stdout);
	
	return 0;
}