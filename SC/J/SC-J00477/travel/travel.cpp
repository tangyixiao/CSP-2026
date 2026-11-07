#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s,a;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s;
	if(c1[0]==c2[0]&&c1[1]==c2[1]) cout<<"1";
	else{
		cout<<"0000";
		return 0;
	} 
	if(s1[0]==s[0]&&s1[1]==s[1]) cout<<"1";
	else cout<<"0";
	if(s1[0]!=s[0]||s1[1]!=s[1]) cout<<"00";
	else{
		if(((s1[2]='D')&&(s[2]='C'))||((s1[2]='C')&&(s[2]='D'))){
			cout<<"00";
		}
		else{
			if(((s1[2]-s[2]==1)||(s1[2]-s[2]==-1))&&(((s1[2]!='D')&&(s[2]!='C'))||((s1[2]!='C')&&(s[2]!='D')))){
				cout<<"11";
			}
			else cout<<"10";
		}
	}
	return 0;
}