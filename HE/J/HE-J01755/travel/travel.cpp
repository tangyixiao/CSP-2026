#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;
char s1[10],s2[10];
string c1,c2;
bool mid(char a,char b,char c){
	return (a>=b&&a<=c);
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		if((s1[0]==s2[0])&&(s1[1]==s2[1])){
			cout<<1;
			if(mid(s1[2],'A','C')&&mid(s2[2],'A','C')){
				cout<<1;
				cout<<(abs(s1[2]-s2[2])==1);
			}
			else if((mid(s1[2],'D','F')&&mid(s2[2],'D','F'))){
				cout<<1;
				cout<<(abs(s1[2]-s2[2])==2);
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
