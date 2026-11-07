#include <iostream>
using namespace std;

int main(){
	string c1,s1,c2,s2,s11,s21;
	char s12,s22;
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<s1.length()-1;i++) s11+=s1[i];
	s12=s1[s1.length()-1];
	s12-=(s22=='F');
	for(int i=0;i<s2.length()-1;i++) s21+=s2[i];
	s22=s2[s2.length()-1];
	s22-=(s22=='F');
	string ans="0000";
	if(c1==c2){
		ans[0]='1';
		if(s11==s21){
			ans[1]='1';
			if(!((s12>'C')^(s22>'C'))){
				ans[2]='1';
				if(abs(s22-s12)==1){
					ans[3]='1';
				}
			}
		}
	}cout<<ans;
	return 0;
}