#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2,a;
	int x,y;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		a+="1";
		if(s1[0]==s2[0] && s1[1]==s2[1]){
			a+="1";
			if(s1[2]>='A' && s1[2]<='C'){
				x=1;
			}else{
				x=0;
			}
			if(s2[2]>='A' && s2[2]<='C'){
				y=1;
			}else{
				y=0;
			}
			if(x==y){
				a+="1";
				if(x==1){
					if(s1[2]=='B' || s2[2]=='B'){
						a+="1";
					}else{
						a+="0";
					}
				}
				if(x==0){
					a+="1";
				}
			}else{
				a+="00";
			}
		}else{
			a+="000";
		}
	}else{
		a="0000";
	}
	cout<<a;
	
	return 0;
} 