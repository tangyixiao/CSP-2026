#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int x=0;
	if(c1==c2){
		x++;	
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			x++;
			if(((s1[2]=='D'&&s2[2]=='F')||(s2[2]=='D'&&s1[2]=='F'))||((s1[2]!='D'&&s2[2]!='F')&&(s2[2]!='D'&&s1[2]!='F'))){
				x++;
				if(abs((s1[2]-'A')-(s2[2]-'A'))==1&&(s1[2]!='D'&&s2[2]!='C')&&(s1[3]!='C'&&s2[3]!='D')){
					x++;
				}
			}
		}
	}
	if(x==0)cout<<"0000";
	else if(x==1) cout<<"1000";
	else if(x==2) cout<<"1100";
	else if(x==3) cout<<"1110";
	else cout<<"1111";
	return 0;
}
