#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
	}
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	if(s1[s1.size()-3]==s2[s2.size()-3]&&s1[s1.size()-2]==s2[s2.size()-2]){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	if(s2[s2.size()-3]==s1[s1.size()-3]&&s2[s2.size()-2]==s1[s1.size()-2]){
		
		if((s1[s1.size()-1]<='C'&&s1[s1.size()-1]>='A')&&(s2[s2.size()-1]<='C'&&s2[s2.size()-1]>='A')){
			cout<<"1";
		}else if((s1[s1.size()-1]<='F'&&s1[s1.size()-1]>='D')&&(s2[s2.size()-1]<='F'&&s2[s2.size()-1]>='D')){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}
	if(s2[s2.size()-3]==s1[s1.size()-3]&&s2[s2.size()-2]==s1[s1.size()-2]){
		if((s1[s1.size()-1]=='C'&&s2[s2.size()-1]=='D')||(s1[s1.size()-1]=='D'&&s2[s2.size()-1]=='C')){
			cout<<"0";
			return 0;
		}
	}
	if(s2[s2.size()-3]==s1[s1.size()-3]&&s2[s2.size()-2]==s1[s1.size()-2]){
		if(s1[s1.size()-1]+1==s2[s2.size()-1]&&s2[s2.size()-1]-1==s1[s1.size()-1]){
			cout<<"1";
			return 0;
		}
		if(s1[s1.size()-1]+1!=s2[s2.size()-1]&&s2[s2.size()-1]-1!=s1[s1.size()-1]){
			cout<<"0";
			return 0;
		}
	}
	return 0;
}
