#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2; 
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int k1=(s1[0]-'0')*10+s1[1]-'0';//ее 
	int k2=(s2[0]-'0')*10+s2[1]-'0';//ее 
	if(c1==c2){
		cout<<"1";
		if(k1==k2){
			cout<<"1";
			if(s1[2]<='C'&&s2[2]<='C'||s1[2]>='D'&&s2[2]>='D')cout<<"1"; 
			else cout<<"0";
		}
		else cout<<"00"; 
	}
	else cout<<"000";
	if((k1==k2)&&((s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]>='D'))&&((s1[2]-s2[2]==1)||(s2[2]-s1[2]==1)))cout<<"1";
	else cout<<"0";
	return 0;
}
