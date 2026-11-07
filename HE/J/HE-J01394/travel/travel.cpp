#include<bits/stdc++.h>
using namespace std;
string c,s,cc,ss;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>cc>>ss;
	if(c!=cc){
		cout<<"0000";
	}
	else{
		cout<<"1";
		if(s[0]!=ss[0]||s[1]!=ss[1]){
			cout<<"000";
		}
		else{
			cout<<"1";
			int a,b;
			a=s[2]-'A'+1;
			b=ss[2]-'A'+1;
			if((a<=3)!=(b<=3)){
				cout<<"00";
			}
			else{
				cout<<"1";
				if(abs(a-b)==1||(a==4&&b==6)||(a==6&&b==4)){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
		}
	}
	return 0;
}
