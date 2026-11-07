#include<bits/stdc++.h> 
using namespace std;
string c1,s1,c2,s2;
int a1=0,a2=0,a3=0; 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		a1=1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	int t=1;
	for(int i=0;i<2;i++){
		if(s1[i]!=s2[i]&&a1==1){
			t=0;
			break;
		}
	}
	if(t==1){
		cout<<"1";
		a2=1;
	}
	else{
		cout<<"000";
		return 0;
	}
	if((((s1[2]>='A'&&s1[2]<='C')&&(s2[2]>='A'&&s2[2]<='C'))&&a2==1)||(((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F'))&&a2==1)){
		cout<<"1";
	}
	else{
		cout<<"00";
		return 0;
	}
	char q1=s1[2],q2=s2[2];
	if(q1>q2){
		char w=q1;
		q1=q2;
		q2=w;
	}
	if((q1=='A'&&q2=='B')||(q1=='B'&&q2=='C')||(q1=='D'&&q2=='F')){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	return 0;
}
