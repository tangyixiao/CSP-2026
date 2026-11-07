#include<bits/stdc++.h>
using namespace std;
string s,ss,sss,ssss;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>ss>>sss>>ssss;
	if(s==sss){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(ss[0]==ssss[0]&&ss[1]==ssss[1]){
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	if((ss[2]=='A'&&ssss[2]=='C')||(ss[2]=='C'&&ssss[2]=='A')){
		cout<<10;
		return 0;
	}
	else if((ss[2]=='A'&&ssss[2]=='B')||(ss[2]=='B'&&ssss[2]=='A')||(ss[2]=='C'&&ssss[2]=='B')||(ss[2]=='B'&&ssss[2]=='C')||(ss[2]=='D'&&ssss[2]=='F')||(ss[2]=='F'&&ssss[2]=='D')){
		cout<<11;
	}
	else{
		cout<<"00";
	}
} 
