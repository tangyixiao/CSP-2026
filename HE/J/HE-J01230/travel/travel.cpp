#include<bits/stdc++.h> 
using namespace std;
string c1,c2,s1,s2;
int s[10];
void solve(){
	if(c1==c2){
		s[1]= 1;
		if(s1.substr(0,2)==s2.substr(0,2)){
			s[2] = 1;
			if((s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')||(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F')){
				s[3]= 1;
				if(abs(s1[2]-s2[2])==1) s[4]= 1;
				else s[4] = 0;
			}else s[3]= 0,s[4]= 0;
		}
		else {
			s[2] = 0;
			s[3] = 0;
			s[4] = 0;	
		}
	}
	else{
		s[1] = s[2] = s[3] = s[4] = 0;
	}
	
	
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	solve();
	for(int i = 1;i<=4;i++) cout<<s[i];	
	return 0;
}
