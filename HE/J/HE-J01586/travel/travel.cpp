#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string xx1,rr1;
	string xx2,rr2,ans;
	cin>>xx1>>xx2>>rr1>>rr2;
	
	if(xx1[1]==rr1[1]&&xx1[0]==rr1[0])ans+="1";
	else ans+='0';
	if(xx2[0]==rr2[0]&&xx2[1]==rr2[1]){
		ans+="1";
	}
	else ans+='0';
	if((xx2[2]=='A'||xx2[2]=='B'||xx2[2]=='C')&&(rr2[2]=='A'||rr2[2]=='B'||rr2[2]=='C')){
		ans+="1";
	}
	else if(((xx2[2]=='D'||xx2[2]=='F')&&(rr2[2]=='D'||rr2[2]=='F')&&xx2[2]!=rr2[2])){
		ans+="1"; 
	}
	else ans+='0';
	bool tot =0;
	if(xx2[2]+1==rr2[2]||rr2[2]+1==xx2[2])tot=1;
	if((xx2[2]=='C'&&rr2[2]=='D')||(rr2[2]=='D'&&xx2[2]=='C'))tot=0;
	if((xx2[2]=='D'&&rr2[2]=='F')||(rr2[2]=='D'&&xx2[2]=='F'))tot=1;
	if(tot)ans+='1';
	else ans+='0';
	cout<<ans;
	return 0;
} 
