#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	bool cx=1;
	for(int j=0;j<c1.size();j++){
		if(c1[j]!=c2[j]){
			cout<<"0000";
			return 0;
			cx=false;
		}
	}
	if(cx){
		cout<<1;
	}
	
	bool p=0;
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<1;
		p=1;
	}else{
		cout<<0;
	}
	
	bool z1=0,z2=0;
	if((s1[2]>='A'&&s1[2]<='C')&&(s2[2]>='A'&&s2[2]<='C')){
		cout<<1;
	}else if((s1[2]>='D'&&s1[2]<='F')&&(s2[2]>='D'&&s2[2]<='F')){
		cout<<1;
	}else{
		cout<<0;
	}
	
	char a=s1[2],b=s2[2];
	if(a=='C'&&b=='D'){
		cout<<0;
	}else if((a+1==b||a-1==b)&&p){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
