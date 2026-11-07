#include<iostream>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2,ans="";
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)ans+="1";
	else{
	    ans+="0000";
	    cout<<ans;
	    return 0;
    }
    if(s1[0]==s2[0]&&s1[1]==s2[1])ans+="1";
    else{
    	ans+="000";
    	cout<<ans;
    	return 0;
	}
	if(s1[2]>'C'&&s2[2]>'C'){
		ans+="11";
		cout<<ans;
		return 0;
	}
	else if(s1[2]<='C'&&s2[2]<='C'){
		ans+="1";
		if(s1[2]=='A'&&s2[2]=='C')ans+="0";
	    else ans+="1";
	}
	else ans+="00";
	cout<<ans;
	return 0;
}
