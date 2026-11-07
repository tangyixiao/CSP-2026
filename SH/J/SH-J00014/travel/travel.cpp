#include<bits/stdc++.h>
using namespace std;
char s1[3],s2[3];
string c1,c2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int q1,q2,q3,q4,p1,p2;
	cin>>c1>>s1>>c2>>s2;
	if(s1[2]=='D' || s1[2]=='F'){
		p1=1;
	}else{
		p1=2;
	}
	if(s2[2]=='D' || s2[2]=='F'){
		p2=1;
	}else{
		p2=2;
	}
	if(c1==c2){
		q1=1;
		if(s1[0]==s2[0] && s1[1]==s2[1]){
			q2=1;
			if(p1==p2){
				q3=1;
				if(abs(s1[2]-s2[2])==1){
					q4=1;
				}else{
					q4=0;
				}
			}else{
				q3=0;
				q4=0;
			}
		}else{
			q2=0;
			q3=0;
			q4=0;
		}
	}else{
		q1=0;
		q2=0;
		q3=0;
		q4=0;
	}
	cout<<q1<<q2<<q3<<q4;
	return 0;
}
