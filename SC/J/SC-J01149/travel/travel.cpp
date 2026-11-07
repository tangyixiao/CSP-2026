#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c;
	string s;
	cin>>c[0]>>c[1]>>s[0]>>s[1]>>s[2]>>c[2]>>c[3]>>s[3]>>s[4]>>s[5];
	if(c[1]==c[3]){
		cout<<"1";
		if(s[1]==s[4]){
			cout<<"1";
			if((s[2]<='C'&&s[5]<='C')||(s[2]>'C'&&s[5]>'C')){
				cout<<"1";
				if((s[2]-s[5])*(s[2]-s[5])==1){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}
			else{
				cout<<"00";
				
			}
		}
		else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	cout<<endl;
	return 0;
} 