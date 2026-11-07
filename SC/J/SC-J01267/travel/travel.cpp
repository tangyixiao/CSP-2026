#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int ans[4];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1[c1.size()]-'0'==c2[c2.size()]-'0'){
		ans[1]=1;
	}
	else ans[1]=0;
	if(!(s1[s1.size()-1]-'0'==s2[s2.size()-1]-'0')){
		ans[2]=1;
	}
	else ans[2]=0;
	if((s1[s1.size()]>='A'||s1[s1.size()]<='C')&&(s2[s2.size()]>='A'||s2[s2.size()]<='C')||(s1[s1.size()]>='D'||s1[s1.size()]<='F')&&(s2[s2.size()]>='D'||s2[s2.size()]<='F')){
		ans[3]=1;	
	}
    else ans[3]=0;
	if(s1[s1.size()]-'A'==s2[s2.size()]-'A'+1||s1[s1.size()]-'A'==s2[s2.size()]-'A'-1){
    	ans[4]=1;
	}
	else ans[4]=0;
	for(int i=1;i<=4;i++){
		cout<<ans[i];
	}
	//cout<<ans[/*123*/4];
	return 0;
}