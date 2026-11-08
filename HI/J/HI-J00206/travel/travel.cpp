#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	string ans="";
	if(c1==c2){
		ans=ans+'1';
	} 
	else{
		ans="0000";
		cout<<ans;
		return 0;
	}
	if(s1.substr(0,2)==s1.substr(0,2)){
		ans=ans+'1';
		if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]<='D')){
			ans=ans+'1';
		}
		else{
			ans=ans+"00";
			cout<<ans;
			return 0;
		}
	} 
	else{
		ans=ans+"000";
		cout<<ans;
		return 0;
	}
    if((s1[2]!='C'&&s2[2]!='D')||(s1[2]!='D'&&s2[2]!='C')){
    	int a=(int)(s1[2]-s2[2]);
    	if(abs(a)==1){
    		ans=ans+'1';
		}else{
			ans=ans+'0';
			cout<<ans;
			return 0;
		}
	}
	else{
		ans=ans+'0';
		cout<<ans;
		return 0;
	}
	cout<<ans;
	return 0;
}
