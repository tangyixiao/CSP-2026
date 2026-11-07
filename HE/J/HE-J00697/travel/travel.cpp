#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		ans+="1";
	}
	else {
		cout<<"0000";
		return 0;
	}
	
	if(s1.substr(0,2)==s2.substr(0,2)){
		cout<<"1";
		ans+="1";
	} 
	else {
		cout<<"000";
		return 0;
	}
	if(ans=="11")
		if((s1[2]=='C'&&s2[2]=='D')||(s1[2]=='C'&&s2[2]=='F')){
			cout<<"00";
			return 0;
		}
		else if((s1[2]=='A'&&s2[2]=='D')||(s1[2]=='A'&&s2[2]=='F')){
			cout<<"00";
			return 0;
		}
		else if((s1[2]=='B'&&s2[2]=='D')||(s1[2]=='B'&&s2[2]=='F')){
			cout<<"00";
			return 0;
		}
		else if((s1[2]=='D'&&s2[2]=='A')||(s1[2]=='D'&&s2[2]=='B')||(s1[2]=='D'&&s2[2]=='C')){
			cout<<"00";
			return 0;
		}
		else if((s1[2]=='F'&&s2[2]=='A')||(s1[2]=='F'&&s2[2]=='B')||(s1[2]=='F'&&s2[2]=='C')){
			cout<<"00";
			return 0;
		}
		else {
			cout<<"1";
			ans+="1";
		}
	int l=s1[2]-'0',r=s2[2]-'0';
	if(ans=="111"&&abs(l-r)==1)cout<<"1";
	else cout<<"0";
	return 0;
} 
