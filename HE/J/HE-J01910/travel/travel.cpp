#include<bits/stdc++.h>
using namespace std; 
int main(){
  	freopen("travel.in","r",stdin);
  	freopen("travel.out","w",stdout);
	int nr,nx,pr,px;
	char sr[3],sx[3],s[5]="0000";
	cin>>nr;
	cin>>sr;
	cin>>nx;
	cin>>sx;
	if(nr==nx)s[0]='1';
	pr=(sr[0]-'0')*10+(sr[1]-'0');
	px=(sx[0]-'0')*10+(sx[1]-'0');
	if(pr==px)s[1]='1';
	bool i1=(sr[2]>='A'&&sr[2]<='C'&&sx[2]>='A'&&sx[2]<='C'),i2=(sr[2]>='D'&&sr[2]<='E'&&sx[2]>='D'&&sx[2]<='E');
	if(s[1]=='1'){
		if(i1||i2){
			s[2]='1';
		}
	}
	if(s[2]=='1'){
		if(i1){
			if((sr[2]=='A'&&sx[2]=='B')||(sx[2]=='A'&&sr[2]=='B')||(sr[2]=='B'&&sx[2]=='C')||(sx[2]=='B'&&sr[2]=='C'))s[3]='1';
		}if(sr[2]>='D'&&sr[2]<='E'&&sx[2]>='D'&&sx[2]<='E')s[3]='1';
	}cout<<s;
	fclose(stdin);
 	fclose(stdout); 
	return 0;
}
