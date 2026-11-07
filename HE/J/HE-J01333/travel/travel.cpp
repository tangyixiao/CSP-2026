#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,s3,s4;
	bool yc,yp,yce,ag;
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3){
        cout<<1;
        yc==true;
	}
	else{
        cout<<0;
        yc=false;
	}
	if(yc && s2[1]-'0'==s4[1]-'0' && s2[0]-'0'==s4[0]-'0'){
        cout<<1;
        yp==true;
	}
	else{
        cout<<0;
        yp==false;
	}
	if(s2[2]<='C' && s2[2]>='A'  && s4[2]<='C' && s4[2]>='A'){
        yce==true;
	}
	else if(s2[2]>'C' && s2[2]<='F'  && s4[2]>'C' && s4[2]<='F'  ){
        yce==true;
	}
	else{
        yce==false;
	}
	if(yc && yp && yce ){
        cout<<1;
	}
	else {
        cout<<0;
	}
	if(abs(s2[2]-s4[2])==1){
        ag=true;
	}
	else{
        ag=false;
	}
	if(yc && yp && yce && ag){
        cout<<1;
	}
	else {
        cout<<0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
