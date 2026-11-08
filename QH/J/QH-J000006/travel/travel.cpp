#include<bits/stdc++.h>
using namespace std;
string r1,r2,x1,x2;
bool s1,s2,s3,s4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    cin>>r1>>r2>>x1>>x2;
    int xl=(x2[0]-48)*10+(x2[1]-48);
    int rl=(r2[0]-48)*10+(r2[1]-48);
    char xd=x2[2];
    char rd=r2[2];
    if(xd=='D') xd='E';
    if(rd=='D') rd='E';
    if(r1==x1){
    	s1=1;
    	if(xl==rl){
    		s2=1;
    		if((xd<='C'&&rd<='C')||(xd>='E'&&rd>='E')){
    			s3=1;
    			if(abs(xd-rd)==1){
    				s4=1;
				}
			}
		}
    	
	}
	cout<<s1<<s2<<s3<<s4;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
