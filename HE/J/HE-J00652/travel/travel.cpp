#include<bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(s1[0]=='0'){
		s1[0]=s1[1];
		s1[1]=s1[2];
	}
	if(s2[0]=='0'){
		s2[0]=s2[1];
		s2[1]=s2[2];
	}
	if(c1==c2){
		if(s1[0]==s2[0]){
			
			if(s1[1]<='C'&&s2[1]<='C'||s1[1]>'C'&&s2[1]>'C'){
				if(s1[1]!='D'&&s1[1]!='F'&&s2[1]!='D'&&s2[1]!='F'){
					if(s1[1]=='A'&&s2[1]=='B'||s1[1]=='B'&&s2[1]=='A'||s1[1]=='B'&&s2[1]=='C'||s1[1]=='C'&&s2[1]=='B')
					cout<<1111;
				}else if(s1[1]=='D'&&s2[1]=='F'||s1[1]=='F'&&s2[1]=='D'){
					cout<<1111;
				}else{
					cout<<1110;
				}
			}else{
				cout<<1100;
			}
		}else{
			cout<<1000;
		}
	}else{
		cout<<0000;
	}
	return 0;
} 
