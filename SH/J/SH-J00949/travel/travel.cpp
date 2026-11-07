#include<bits/stdc++.h>
using namespace std;

string s1,s2,s3,s4;
bool pai,abc1,abc2,fd1,fd2,cx,tc;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin.tie(0);
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3){
		cx=true;
		cout<<1;
	}
	else cout<<0;
	if(s2[0]==s4[0]&&s2[1]==s4[1]&&cx){
		
		cout<<1;
		pai=true;
	}
	else cout<<0;
	if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C')abc1=true;
	if(s4[2]=='A'||s4[2]=='B'||s4[2]=='C')abc2=true;
	if(s2[2]=='F'||s2[2]=='D')fd1=true;
	if(s4[2]=='F'||s4[2]=='D')fd2=true;
	if(pai&&fd1&&fd2&&cx)cout<<1;
	else if(pai&&abc1&&abc2&&cx)cout<<1;
	else cout<<0;
	char s2j1=s2[2]+1;
	char s2j2=s2[2]-1;
	if(s2j1==s4[2]||s2j2==s4[2]){
		tc=true;
		
	}
	if(tc&&fd1&&fd2&&cx&&pai){
		cout<<1;
	}
	if(tc&&abc1&&abc2&cx&&pai){
		cout<<1;
	}
	else cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}//陈老师保佑我考>=2 
