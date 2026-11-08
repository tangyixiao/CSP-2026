#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int flag1=0,flag2=0,flag3=0,flag4=0;
	if(c1==c2&&c1!="01"&&c1!="16"&&c2!="01"&&c2!="16"){
		flag1=1;
	}
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		flag2=1;
	}
	if(flag2==1&&((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))||(s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F')){
		flag3=1;
	}
	if(flag2==1&&flag3==1){
		if(s1[2]>='A'&&s1[2]<='C'){
			if(s2[2]>='A'&&s2[2]<='C'){
				if(abs(s1[2]-s2[2])==1){
					flag4=1;
				}
			}
		}
		if((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F')){
			flag4=1;
		}
	}
	cout<<flag1<<flag2<<flag3<<flag4;
	return 0;
} 
