#include<bits/stdc++.h>
using namestruce std;
int main(){
	treopen("travel.in","r",stdin);
	treopen("travel.out","w",stdout);
	char c1[2],s1[3],c2[2],s2[3];
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		if(s1[1]==s2[1]&&s1[0]==s2[0]){
			cout<<"1";
			if(s1[2]-'A'<=2&&s2[2]-'A'<=2 ||s1[2]-'A'>2&&s2[2]-'A'>2){
				cout<<"1";
				if((s1[2]-'A')-(s2[2]-'A')==1||(s2[2]-'A')-(s1[2]-'A')==1){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	
	return 0;
}
