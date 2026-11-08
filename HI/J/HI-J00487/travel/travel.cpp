#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2,a="0000";
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		a="1000";
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			a="1100";
			if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
				if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
					a="1110";
					if(s1[2]=='A'||s1[2]=='C'){
						if(s2[2]=='B'){
							a="1111";
						}
					}
					if(s1[2]=='B'){
						if(s2[2]=='A'||s2[2]=='C'){
							a="1111";
						}
					}
				}
			}
			else{
				if(s2[2]=='D'||s2[2]=='E'){
					a="1111";
				}
			}
		}
	}
	cout<<a;
	return 0;
}
 
