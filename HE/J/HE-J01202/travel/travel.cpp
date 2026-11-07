#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	bool f=false;
	if(c1[0]==c2[0]&&c2[1]==c1[1]) {
		printf("1");
		f=true;
	}
	else printf("0");
	if(f){
		if(s1[0]==s2[0]&&s1[1]==s2[1]) printf("1");
		else {
			printf("0");
			f=false;
		}
	}
	else printf("0");
	if(f){
		if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C')) printf("1");
		else {
			printf("0");
			f=false;
		}
	}
	else printf("0");
	if(f){
		if(s1[2]+1==s2[2]||s1[2]-1==s2[2]) printf("1");
		else if((s1[2]=='D'&&s2[2]=='F')||(s2[2]=='D'&&s1[2]=='F')) printf("1");
		else printf("0");
	}
	else printf("0");
	return 0;
} 
