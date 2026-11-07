#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,s;
int b[5],c,a;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		b[1]=1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		b[2]=1;
	}
	else{
		b[2]=0,c=1;
	}
	if(c==1){
		b[3]=0;
	}
	else if(s1[2]>='A'&&s1[2]<='C'){
		if(s2[2]>='A'&&s2[2]<='C'){
			b[3]=1;
		}
		else{
			b[3]=0;
		}
	}
	else{
		if(s2[2]>='A'&&s2[2]<='C'){
			b[3]=0;
		}
		else{
			b[3]=1;
		}
	}
	if(((s1[2]-s2[2])==1||(s2[2]-s1[2])==1)){
		if(c==1){
			b[4]=0;
		}
		else if(s1[2]=='C'&&s2[2]=='D'){
			b[4]=0;
		}
		else if(s2[2]=='C'&&s1[2]=='D'){
			b[4]=0;
		}
		else{
			b[4]=1;
		}
	}
	else{
		b[4]=0;
	}
	for(int i=1;i<=4;i++){
		s[i]='0'+b[i]; 
		cout<<s[i];
	}
	return 0;
}