#include <iostream>
#include <cstdio>
#include <algorithm>

#include <cmath>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	int c1,c2;
	string s1,s2;
	
	cin>>c1>>s1>>c2>>s2;
	string ans="0000";
	if(c1==c2){
		ans[0]='1';
		if((s1[0]==s2[0])&&(s1[1]==s2[1])){
			ans[1]='1';
			char r=s1[2],x=s2[2];
			
			if(((r>='D')&&(x>='D'))||((r<='C')&&(x<='C'))){
				ans[2]='1';
				
				if((r=='D')&&(x=='F')){
					ans[3]='1';
				}
				else if((r=='F')&&(x=='D')){
					ans[3]='1';
				}
				else if(abs((int)x-(int)r)==1){
					ans[3]='1';
				}
			}
		}
	}
	
	cout<<ans;
	
	
	
	return 0;
	
	fclose(stdin);
	fclose(stdout);
}