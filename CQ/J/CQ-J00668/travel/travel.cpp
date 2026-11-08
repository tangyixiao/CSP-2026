#include<bits/stdc++.h>
using namespace std;
char c1[3],s1[4],c2[3],s2[3];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%s%s%s%s",c1+1,s1+1,c2+1,s2+1);
	if(c1[1]==c2[1]&&c1[2]==c2[2])
		cout<<"1";
	else{
		cout<<"0000";
		return 0;
	}
	if(s1[1]==s2[1]&&s1[2]==s2[2])
		cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
	if(s1[3]=='A'||s1[3]=='B'||s1[3]=='C')
		if(s2[3]=='D'||s2[3]=='F'){
			cout<<"00";
			return 0;
		}
		else
			cout<<"1";
	else{
		if(s2[3]=='A'||s2[3]=='B'||s2[3]=='C'){
			cout<<"00";
			return 0;
		}else
			cout<<"1";
	}
	if(s1[3]+1==s2[3]-0||s1[3]-1==s2[3]-0)
		cout<<"1";
	else
		cout<<"0";
	return 0;
}
