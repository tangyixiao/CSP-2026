#include<bits/stdc++.h>
using namespace std;

string a1,a2,s1,s2; 
int b1=0,b2=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>s1>>a2>>s2;
	if(a1==a2){
		cout<<1;
	}else{
		cout<<0;
	}
	if(a1==a2&&s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<1;
	}else{
		cout<<0;
	}
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
		b1=1;
	}else{
		b1=2;	
	}
	if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
		b2=1;
	}else{
		b2=2;	
	}	
	if(a1==a2&&s1[0]==s2[0]&&s1[1]==s2[1]&&b1==b2){
		cout<<1;
	}else{
		cout<<0;
	}
	int flag=1;
	if(b1==b2&&b2==1){
		if((s1[2]=='A'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='A')){
			flag=0;
		}
	}
	if(a1==a2&&s1[0]==s2[0]&&s1[1]==s2[1]&&b1==b2&&flag==1){
		cout<<1;
	}else{
		cout<<0;
	}	
//	cout<<b1<<b2<<flag;
	return 0;
}