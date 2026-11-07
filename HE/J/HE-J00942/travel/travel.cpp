#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char s1[10],s2[10];
	int c1,c2,ss1[10],S1=0,ss2[10],S2=0;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2||c1==1||c1==16||c2==1||c2==16||s1==s2){
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	for(int i=0;i<2;i++){
		ss1[i]=s1[i]-'0';
		ss2[i]=s2[i]-'0';
		if(ss1[i]!=ss2[i]){
			cout<<"000";
			return 0;
		}
	}
	if(s1[2]=='C'&&s2[2]=='D'||s1[2]=='D'&&s2[2]=='C'){
		cout<<"100";
	    return 0;
	}
	if(s1[2]=='A'){
		S1=1; 
	}if(s1[2]=='B'){
		S1=2; 
	}if(s1[2]=='C'){
		S1=3; 
	}if(s1[2]=='D'){
		S1=4; 
	}if(s1[2]=='F'){
		S1=5; 
	}if(s2[2]=='A'){
		S2=1; 
	}if(s2[2]=='B'){
		S2=2; 
	}if(s2[2]=='C'){
		S2=3; 
	}if(s2[2]=='D'){
		S2=4; 
	}if(s2[2]=='F'){
		S2=5; 
	}if(S1>=4&&S2<=3||S2>=4&&S1<=3){
		cout<<"110";
		return 0;
	}if(S1-S2==1||S2-S1==1){
		cout<<"111";
	}else{
		cout<<"110";
	}
	fclose(stdin);
	fclose(stdout);
    return 0;	
}
