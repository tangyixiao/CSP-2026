#include<bits/stdc++.h>
using namespace std;
int main(){
	int c1=0,c2=0;
	char s1[105],s2[105];
	cin>>c1;
	for(int i=0;i<3;i++){
		cin>>s1[i];
	}
	cin>>c2;
	for(int i=0;i<3;i++){
		cin>>s2[i];
	}
	
	if(c1==c2){
		cout<<1;
		if((s1[0]==s2[0]&&s1[1]==s2[1])&&((c1>1&&c1!=16&&c1<18)&&(c2>1&&c2!=16&&c2<18))){
			cout<<1;
			if(((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))||((s1[2]=='D'||s1[2]=='F')||(s1[2]=='D'||s2[2]=='F'))){
				cout<<1;
				if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='C'&&s2[2]=='B')||(s1[2]=='F'&&s2[2]=='D')||(s1[2]=='D'&&s2[2]=='F')){
				    cout<<1;
			    }else{
			    	cout<<0;
				}
			}else{
				cout<<00;
			}
		}else{
			cout<<000;
		}
	}else{
		cout<<0000;
	}
	return 0;
} 
