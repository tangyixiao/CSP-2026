#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	int v=0;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		v+=1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			v+=10;
			if(s1[2]=='A'&&(s2[2]=='B'||s2[2]=='C')){
				v+=100;
				if(s1[2]=='A'&&s2[2]=='B'){
					v+=1000;
				}
			}
			if(s1[2]=='B'&&(s2[2]=='A'||s2[2]=='C')){
				v+=1100;
			}
			if(s1[2]=='C'&&(s2[2]=='A'||s2[2]=='B')){
				v+100;
				if(s1[2]=='C'&&s2[2]=='B'){
					v+1000;
				}
			}
			if(s1[2]=='D'&&s2[2]=='F'||s1[2]=='F'&&s2[2]=='D'){
				v+=1100;
			}
		}
	}
	if(v==111){
		
		v*=10;

	}
	if(v==1){
		v*=1000;
	
	}
	if(v==11){
			
	v*=100;
	
    }
	cout<<v;
}
