#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int a1=(s1[0]-'0')*10+(s1[1]-'0'),a2=(s2[0]-'0')*10+(s2[1]-'0');
	if(c1==c2){
		if(a1==a2){
			if((s1[2]-'A'<=2&&s2[2]-'A'<=2)||(s1[2]-'A'>2&&s2[2]-'A'>2)){
				if(abs(s1[2]-s2[2])==1&&(s1[2]!='C'&&s2[2]!='D')&&(s1[2]!='D'&&s2[2]!='C')){
					cout<<"1111";
				}
				else cout<<"1110";
			} 
			else cout<<"1100";
		}
		else cout<<"1000";
	}
	else cout<<"0000"; 
	return 0;
}