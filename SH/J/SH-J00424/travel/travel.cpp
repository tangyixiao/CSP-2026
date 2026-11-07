#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	string ans="0000";
	if(c1[0]==c2[0]&&c1[1]==c2[1]){
		ans[0]='1';
	}else{
		cout<<ans<<endl;
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		ans[1]='1';
	}else{
		cout<<ans<<endl;
		return 0;
	}
	if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C')){
		ans[2]='1';
	}else{
		cout<<ans<<endl;
		return 0;
	}
	char a=s1[2],b=s2[2];
	if(a-b==1||a-b==-1){
		ans[3]='1';
	}else{
		cout<<ans<<endl;
		return 0;
	}
	cout<<ans<<endl;
	return 0;
}
