#include<bits/stdc++.h>
using namespace std;
string c,s,cc,ss,ans="";
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>cc>>ss;
	bool flag=0,f=0;
	if((s[2]<='C'&&ss[2]<='C')||(s[2]>'C'&&ss[2]>'C'))flag=1;
	if(flag){
		if(abs(s[2]-ss[2])<=1)f=1;
	}
	if(c==cc){
		if(s[0]==ss[0]&&s[1]==ss[1]){
			if(flag){
				if(f){
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
