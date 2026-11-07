#include <bits/stdc++.h>
using namespace std;
string s1,s2,c1,c2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    cin >> c1 >> s1 >> c2 >> s2;
    if(c1==c2){
    	int x=(s1[0]-'0')*10+(s1[1]-'0'),y=(s2[0]-'0')*10+(s2[1]-'0');
    	if(x==y){
    		if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C'){
    			if((s1[2]=='A'&&s2[2]=='B')||(s2[2]=='A'&&s1[2]=='B')) cout << "1111";
    			else if((s1[2]=='B'&&(s2[2]=='A'||s2[2]=='C'))||(s2[2]=='B'&&(s1[2]=='A'||s1[2]=='C'))) cout << "1111";
    			else if((s1[2]=='C'&&s2[2]=='B')||(s2[2]=='C'&&s1[2]=='B')) cout << "1111";
    			else cout << "1110";
			}
			else if(s1[2]>='D'&&s2[2]>='D') cout << "1111";
			else cout << "1100";
		}
		else cout << "1000";
    	
	}else cout << "0000";
	return 0;
}
