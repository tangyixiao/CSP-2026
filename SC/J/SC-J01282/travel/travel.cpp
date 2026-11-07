#include<bits/stdc++.h>
using namespace std;


int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;//R X
	cin>>c1>>s1>>c2>>s2;
	
	bool same=0; 
	if(c1==c2) {//同一届车 
		same=1;
		cout<<1;
	}
		
	else cout<<0;
	
	bool f=0;
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&same){//同一排 
		cout<<1;
		f=1; 
	}
	else cout<<0;
	
	bool samee=0;
	if(((s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')||
		(s1[2]>='E'&&s1[2]<='F'&&s2[2]>='E'&&s2[2]<='F'))&&f&&same){ //tongyipai座位 
		
			samee=1; 
			cout<<1;
		}
	else cout<<0;
	
	if((!samee)||(!f)||(!same)) cout<<0;
	else if((s1[2]=='A'&&s2[2]=='B')||(s2[2]=='A'&&s1[2]=='B')) cout<<1;
	else if ((s1[2]=='B'&&s2[2]=='C')||(s2[2]=='B'&&s1[2]=='C')) cout<<1;
	else if ((s1[2]=='E'&&s2[2]=='F')||(s2[2]=='E'&&s1[2]=='F')) cout<<1;
	else cout<<0;
	
	return 0;
}
