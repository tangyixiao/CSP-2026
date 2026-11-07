#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string ans="";
	string c1,c2,s1,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2)ans+='1';
	else ans+='0';
	if((s1[0]==s2[0]&&s2[1]==s1[1])&&ans[0]=='1')ans+='1';
	else	ans+='0';
	int i=0,j=0;
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
		if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
			if(ans[1]=='1')i=1;
		}
	}
	if(s2[2]=='F'||s2[2]=='D'){
		if(s1[2]=='F'||s1[2]=='D'){
			if(ans[1]=='1')i=1;
		}
	}
	if(i!=0){
		if(s1[2]==s2[2]-1||s1[2]==s2[2]+1){
			j=1;
		}
		if((s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D')){
			j=1;
		}
	}
	ans+='0'+i;
	ans+='0'+j;
	cout << ans; 
	return 0;
} 
