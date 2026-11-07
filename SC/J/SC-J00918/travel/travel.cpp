#include<bits/stdc++.h>
using namespace std;
char s[6],s1[6];
int fg(char a,char b){
	return (a-'0')*10+(b-'0');
}
bool fx(char a,char b){
	if('A'<=a&&a<='C'&&'A'<=b&&b<='C')
	return 1;
	if('D'<=a&&a<='F'&&'D'<=b&&b<='F')
	return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s[0]>>s[1]>>s[3]>>s[4]>>s[5];
	cin>>s1[0]>>s1[1]>>s1[3]>>s1[4]>>s1[5];
	if(fg(s[0],s[1])!=fg(s1[0],s1[1])){
		cout<<0<<0<<0<<0;
		return 0;	
	}
	else{
		if(fg(s[3],s[4])==fg(s1[3],s1[4])){
			;		
		}
		else{
		cout<<1<<0<<0<<0;
		return 0;	
		}
		if(fx(s1[5],s[5])){
		 	;
		}
		else{
		cout<<1<<1<<0<<0;
		return 0;
		}
		if(s[5]+1==s1[5]||s[5]-1==s1[5]){
		  cout<<1<<1<<1<<1;
		}
		else
		cout<<1<<1<<1<<0;
	}
	return 0;
} 