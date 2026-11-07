#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int f1=1,f2=1,f3=1,f4=1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<=1;i++){
		if(c1[i]!=c2[i]){
			cout<<"0000";
			return 0; 
		}
	}
	for(int i=0;i<=1;i++){
		if(s1[i]!=s2[i]){
			cout<<"1000";
			return 0;
		}
	}
	if((s1[2]>='A'&&s1[2]<='C')&&(s2[2]>='A'&&s2[2]<='C')||(s1[2]>='D'&&s1[2]<='F')&&(s2[2]>='D'&&s2[2]<='F')){
		cout<<"111";
		if(abs(s1[2]-s2[2])==1||((s1[2]=='D'||s1[2]=='F')&&abs(s1[2]-s2[2])==2)){
			cout<<"1";
			return 0;
		}else{
			cout<<"0";
			return 0;
		}
	}else{
		cout<<"1100";
	}
	return 0;
}
