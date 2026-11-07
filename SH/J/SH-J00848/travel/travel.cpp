#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool ans1,ans2,ans3,ans4;
bool samepai(string s,string t){
	for(int i=0;i<s.size()-1;i++){
		if(s[i]>='0'&&s[i]<='9'){
			if(s[i]!=t[i]){
				return 0;
			}
		}
	}
	return 1;
}
bool samece(char cs,char ct){
	if(cs>=65&&cs<=67&&ct>=65&&ct<=67){
		return 1;
	}
	if(cs>=68&&cs<=69&&ct>=68&&ct<=69){
		return 1;
	}
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int lenr=s1.size();
	int lenx=s2.size();
	if(c1==c2){
		ans1=1;
		if(samepai(s1,s2)){
			ans2=1;
			if(samece(s1[lenr-1],s2[lenx-1])){
				ans3=1;
				char chr=int(s1[lenr-1]);
				char chx=int(s2[lenx-1]);
				if(max(chr,chx)-1==min(chr,chx)){
					ans4=1;
				}
			}
		}
	}
	cout<<ans1<<ans2<<ans3<<ans4;
	return 0;
}
