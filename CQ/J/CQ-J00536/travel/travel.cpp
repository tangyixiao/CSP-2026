#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int q1=0,q2=0,q3=0,q4=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		q1=1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			q2=1;
			if(s1[2]=='A'){
				if(s2[2]=='B'){
					q3=1;
					q4=1;
				}
				else if(s2[2]=='C'){
					q3=1;
				}
			}
			else if(s1[2]=='B'){
				if(s2[2]=='A'||s2[2]=='C'){
					q3=1;
					q4=1;
				}
			}
			else if(s1[2]=='C'){
				if(s2[2]=='B'){
					q3=1;
					q4=1;
				}
				else if(s2[2]=='A'){
					q3=1;
				}
			}
			else if(s1[2]=='D'){
				if(s2[2]=='F'){
					q3=1;
					q4=1;
				}
			}
			else{
				if(s2[2]=='D'){
					q3=1;
					q4=1;
				}
			}
		}
	}
	cout<<q1<<q2<<q3<<q4; 
	return 0;
}

