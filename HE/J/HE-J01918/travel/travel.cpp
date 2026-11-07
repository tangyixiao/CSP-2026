#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			if(s1[2]>='A'&&s1[2]<='C'){
				if(s2[2]>='A'&&s2[2]<='C'){
					if(s1[2]-'A'+1==s2[2]-'A'||s1[2]-'A'-1==s2[2]-'A'){
						cout<<"1111";
					}else cout<<"1110"; return 0;
					}else cout<<"1100";02 01C 02 01D
				}else if(s1[2]=='F'||s1[2]=='D'){
					if(s1[2]-'A'+1==s2[2]-'A'||s1[2]-'A'-1==s2[2]-'A'){
						cout<<"1111";
				}else cout<<"1110";return 0;
			}else cout<<"1100";
		}else cout<<"1000";
	}else cout<<"0000";
	return 0;
}
