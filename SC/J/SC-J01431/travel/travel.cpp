#include <bits/stdc++.h>
#define ll long long
using namespace std;
int c1,c2;
string s1,s2;
string s;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		s=s+'1';
		if(s1[0]+s1[1]==s2[0]+s2[1]){
			s=s+'1';
			if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C')){
				s=s+'1';
				if(s1[2]+1==s2[2]||s1[2]==s2[2]+1){
					s=s+'1';
				}else{
					s=s+'0';
				}
			}else{
				s=s+"00";
			}
		}else{
			s=s+"000";
		}
	}else{
		s="0000";
	}
	cout<<s;
	return 0;
}