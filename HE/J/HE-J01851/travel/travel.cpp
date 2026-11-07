#include<bits/stdc++.h>
using namespace std;
int m=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		m=1;
		if(s1[1]==s2[1]&&s1[0]==s2[0]){
			m=2;
			if(s1[2]==65&&s2[2]==66||s1[2]==65&&s2[2]==67||s1[2]==66&&s2[2]==65||s1[2]==66&&s2[2]==67||s1[2]==67&&s2[2]==66||s1[2]==67&&s2[2]==65){
				m=3;
			
				if(s1[2]==65&&s2[2]==66||s1[2]==66&&s2[2]==67||s1[2]==66&&s2[2]==65||s1[2]==67&&s2[2]==66){
					m=4;
				}
				
	}
			else if(s1[2]==68&&s2[2]==70||s1[2]==70&&s2[2]==68){
				m=4;
			}
		}
	}
	if(m==0){
		cout<<"0000";
	}
	if(m==1){
		cout<<"1000";
	}
	if(m==2){ 
		cout<<"1100";
	}
	if(m==3){
		cout<<"1110";
	}
	if(m==4){
		cout<<"1111";
	}
	return 0;
}

























