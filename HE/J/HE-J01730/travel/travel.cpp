#include<bits/stdc++.h>
using namespace std;
#define int long long
char c1[2],s1[3],c2[2],s2[3];
int flag1,flag2,flag3;


signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]==c2[0]&&c1[1]==c2[1]){
		flag1=1;
		cout<<1;
		}else{
			cout<<0;
		}
		
	if(flag1==1&&s1[0]==s2[0]&&s1[1]==s2[1]){
		flag2=1;
		cout<<1;
	}else{
		cout<<0;
	}
	
	
	
	if(flag2==1&&(((s1[2]<='C'&&s1[2]>='A')&&(s2[2]<='C'&&s2[2]>='A')&&(s1[2]!=s2[2]))||((s1[2]<='E'&&s1[2]>='D')&&(s2[2]<='E'&&s2[2]>='D')&&(s1[2]!=s2[2])))){
		flag3=1;
		cout<<1;
	}else{
		cout<<0;
	}
	if(flag3==1&&((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='A'&&s2[2]=='C')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='B')||(s1[2]=='C'&&s2[2]=='A')||(s1[2]=='D'&&s2[2]=='E')||(s1[2]=='E'&&s2[2]=='D'))){
		cout<<1;
	}else{
		cout<<0;
	}
	
	
	return 0;
} 
