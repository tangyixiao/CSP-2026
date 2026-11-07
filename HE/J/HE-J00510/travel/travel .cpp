#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	string s1,s2;
	string a1,a2;
	cin>>s1>>s2>>a1>>a2;
	
	if(1==1){
	if(s1==a1){
		cout<<1;
	}
	else if(s1==a1){
		cout<<0;
	}		
	}

	
	
	if(1==1){
		
//	if(s2[1]==a2[1]&&s2[2]==a2[2]&&s1==a1){
//		cout<<1;
//	}
	if(s2[0]==a2[0]&&s2[1]==a2[1]&&s1==a1){
		cout<<1;
	}
	else if(s2[0]!=a2[0]||s2[1]!=a2[1]||s1!=a1){
		cout<<0;
	}
	}

	
	
	if(1==1){	
	if(s2[0]==a2[0]&&s2[1]==a2[1]&&s1==a1&&(a2[2]=='F'||s2[2]=='D')&&(a2[2]=='D'||s2[2]=='F')){
		cout<<1;
	}
	
	else if(s2[0]==a2[0]&&s2[1]==a2[1]&&s1==a1&&((a2[2]=='A'||s2[2]=='A')&&(a2[2]=='B'||s2[2]=='B'))||((a2[2]=='A'||s2[2]=='A')&&(a2[2]=='C'||s2[2]=='C'))||((a2[2]=='C'||s2[2]=='C')&&(a2[2]=='B'||s2[2]=='B'))){
		cout<<1;
	}
		else{
		cout<<"0";
	}	
	}

	
	
	if(1==1){
 if(s2[0]==a2[0]&&s2[1]==a2[1]&&s1==a1&&((a2[2]=='B'&&s2[2]=='C')||(a2[2]=='B'&&s2[2]=='A'))){
		cout<<1;
	}
	else if(s2[0]==a2[0]&&s2[1]==a2[1]&&s1==a1&&((a2[2]=='A'&&s2[2]=='B')||(a2[2]=='B'&&s2[2]=='A'))){
		cout<<1;
	}
		else if(s2[0]==a2[0]&&s2[1]==a2[1]&&s1==a1&&((a2[2]=='D'&&s2[2]=='F')||(a2[2]=='F'&&s2[2]=='D'))){
		cout<<1;
	}
	else{
		cout<<"0";
	}		
	}		
//02 01A 02 01B
	return 0;
}
