#include<bits/stdc++.h>

using namespace std;

//main
string s1,s2,s3,s4;
string ans="";
//

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>s1>>s2>>s3>>s4;
	if(s1!=s3)ans="0000";//不同车厢 
	else{//同车厢 
		ans=ans+"1";
		if(s2[0]!=s4[0]||s2[1]!=s4[1])ans+="000";//不同排 
		else if(s2[0]==s4[0]&&s2[1]==s4[1]){
			ans+="1";//同排 
			if(s2[2]<='C'&&s4[2]<='C'){
				ans+="1";//同侧 
				if(char(s2[2]+1)==s4[2]||char(s4[2]+1)==s2[2])ans+="1";//同侧相邻 
				else ans+="0";//同侧不相邻 
			}else if(s2[2]>='D'&&s4[2]>='D')ans+="11";//同侧相邻（C,D） 
			else ans+="00";//不同侧 
		}
		
	} 
	cout<<ans;
	return 0;
}