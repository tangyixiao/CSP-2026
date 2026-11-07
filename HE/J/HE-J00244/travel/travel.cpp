#include<bits/stdc++.h>
using namespace std;
string c1,c2,c3,c4,a1,a2,s;
int s1,s2;
bool s3;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    cin>>c1>>c2>>c3>>c4;
    if(c1==c3){
    	s+='1';
	}
	else{
		s+='0';
	}
	a1+=c2[0];
	a1+=c2[1];
	a2+=c4[0];
	a2+=c4[1];
	if(a1==a2&&s[0]=='1'){
		s+='1';
	}
	else{
		s+='0';
	}
	if(c2[2]=='A'||c2[2]=='B'||c2[2]=='C'){
		s1=1;
	}
	else{
		s1=2;
	}
	if(c4[2]=='A'||c4[2]=='B'||c4[2]=='C'){
		s2=1;
	}
	else{
		s2=2;
	}
	if(s1==s2&&s[1]=='1'){
		s+='1';
	}
	else{
		s+='0';
	}
	if(s[2]=='1'){
		if(s1==1){
			if((c2[2]=='A'&&c4[2]=='C')||(c2[2]=='C'&&c4[2]=='A')){
				s3=false;
			}
			else{
				s3=true;
			}
		}
		else{
			s3=true;
		}
	}
	else{
		s3=false;
	}
	if(s3){
		s+='1';
	}
	else{
		s+='0';
	}
	for(int i=0;i<=3;i++){
		cout<<s[i];
	}
	return 0;
}
