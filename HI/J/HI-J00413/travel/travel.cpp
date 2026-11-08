#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r,r2;
	string x,x2;
	cin>>r>>r2>>x>>x2;
	int s=r2[2],s6=x2[2],sum=0;
	if(r==x){
		cout<<"1";
		if(r2[0]==x2[0]&&r2[1]==x2[1]){
			cout<<"1";
			if((s=='A'||s=='B'||s=='C')&&(s6=='A'||s6=='B'||s6=='C')){
				cout<<"1";
			}
			else if((s=='D'||s=='F')&&(s6=='F'||s6=='D')){
				cout<<"1";
			}
			else{
				cout<<"0";
			}
			if(((s=='A'&&s6=='B')&&(s!='C'&&s6!='C'))||((s=='B'&&s6=='A')&&(s!='C'&&s6!='C'))){
				cout<<"1";
			}
			else if(((s=='B'&&s6=='C')&&(s!='A'&&s6!='A'))||((s=='C'&&s6=='B')&&(s!='A'&&s6!='A'))){
				cout<<"1";
			}
			else if((s=='D'&&s6=='F')||(s=='F'&&s6=='D')){
				cout<<"1";
			}
			else {
				cout<<"0";
			}
		}
		else{
			cout<<"000";
		}	
	}
	else{
		cout<<"0000";
	}
	
	return 0;
}
