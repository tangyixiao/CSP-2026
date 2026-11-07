#include<bits/stdc++.h>
using std::string;
using std::cin;
int main(){
	std::freopen("travel.in","r",stdin);
	std::freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		printf("1");
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			printf("1");
			if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C')){
				printf("1");
				if(s1[2]>s2[2]) std::swap(s1,s2);
				if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='D'&&s2[2]=='F')) printf("1");
				else printf("0");
			}else printf("00");
		}else printf("000");
	}else printf("0000");
	return 0;
}