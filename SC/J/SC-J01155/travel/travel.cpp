#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}else if(s1[0]!=s2[0]||s1[1]!=s2[1]){
		cout<<"1000";
		return 0;
	}else if((s1[2]-'A'<3&&s2[2]-'A'>=3)||(s1[2]-'A'>=3&&s2[2]-'A'<3)){
		cout<<"1100";
		return 0;
	}else if((s1[2]-'A'+1==s2[2]-'A')||(s1[2]-'A'-1==s2[2]-'A')){
		cout<<"1111";
		return 0;
	}else{
		cout<<"1110";
		return 0;
	}
	return 0;
}
