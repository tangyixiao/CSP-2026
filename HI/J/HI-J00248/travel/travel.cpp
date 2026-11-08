#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	char a,b;
	string endd;
	if (c1 == c2){
		if(s1[0] == s2[0]&&s1[1] == s2[1]){
			if((s1[2]<'D'&&s2[2]<'D')||(s1[2]>'C'&&s2[2]>'C')){
			a = s1[2];
			b = s2[2];
			if(a<b){
				char t = a;
				a = b;
				b = t;
			}
			if(a == b+1)cout<<"1111";
				
			else cout<<"1110";
			
			} 
			else cout<<"1100";
		}
		else cout<<"1000";
			
	}
	else {
		cout<<"0000";
		
	}
	
	return 0;
}
