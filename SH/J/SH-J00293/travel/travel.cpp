#include <bits/stdc++.h>
using namespace std;

int r,x;//rºÍxµÄ³µÏáºÅ 
string s1,s2;
int q1,q2,q3,q4;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r>>s1>>x>>s2;
	if(r==x){
 		q1=1;
 		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			q2=1;
	 		if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C'&&s1[2]<='F'&&s2[2]<='F')){
	 			q3=1;
				if(s1[2]=='D'&&s2[2]=='F'||s1[2]=='F'&&s2[2]=='D'){
	 				q4=1;
				}else if(s1[2]=='B'&&s2[2]=='C'||s1[2]=='C'&&s2[2]=='B'){
					q4=1;
				}else if(s1[2]=='A'&&s2[2]=='B'||s1[2]=='B'&&s2[2]=='A'){
					q4=1;
				}
			}
		}
	}
	cout<<q1<<q2<<q3<<q4;
 	return 0;
}
 
//13 14F 13 14D
//1111

//02 09C 02 09A
//1110
