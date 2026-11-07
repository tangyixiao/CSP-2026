#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,s3,s4,s5,s6;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<3;i++){
	    if(i==2){
	    	s4=s1[i];
		}
		else{
			s3+=s1[i];
		}
	}
	for(int i=0;i<3;i++){
		if(i==2){
			s6=s2[i];
		} 
		else{
			s5+=s2[i];
		}
	}
	if(c1==c2){
		cout<<"1";
		if(s3==s5){
			cout<<"1";
			if((s4=="A"&&s6=="B")||(s4=="A"&&s6=="C")||(s4=="B"&&s6=="A")||(s4=="B"&&s6=="C")||(s4=="C"&&s6=="A")||(s4=="C"&&s6=="B")||(s4=="D"&&s6=="F")||(s4=="F"&&s6=="D")){
				cout<<"1";
				if((s4=="A"&&s6=="B")||(s4=="B"&&s6=="A")||(s4=="B"&&s6=="C")||(s4=="C"&&s6=="B")||(s4=="D"&&s6=="F")||(s4=="F"&&s6=="D")){
					cout<<"1";
				}
				else{
					cout<<"0"; 
				}
			}
			else{
				cout<<"00"; 
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
} 