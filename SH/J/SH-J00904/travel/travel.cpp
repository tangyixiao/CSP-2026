#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool fl1,fl2;	
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1[1]==c2[1]){
		cout<<1;
		fl1=1;
	}else{
		cout<<0;
	}
	if(fl1&&s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<1;
		fl2=1;
	}else{
		cout<<0;
	}	
	if(fl1&&fl2&&((s1[2]>='A'&&s2[2]<='C'&&s1[2]!=s2[2])||(s1[2]>='D'&&s2[2]<='F'&&s1[2]!=s2[2]))){
		cout<<1;
	}else{
		cout<<0;
	}
	if((s1[2]=='C'&&s2[2]=='D')||(s1[2]=='D'&&s2[2]=='C')){
		cout<<0;
	}else if(fl1&&fl2&&abs(s1[2]-s2[2])==1){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
} 
