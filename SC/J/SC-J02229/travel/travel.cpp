#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	string ss1="",ss2="";
	ss1=ss1+s1[0]+s1[1],ss2=ss2+s2[0]+s2[1];
	//cout<<ss1<<" "<<ss2<<endl;
	if(ss1!=ss2){
		cout<<"1000";
		return 0;
	}
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
		if(s2[2]!='A'&&s2[2]!='B'&&s2[2]!='C'){
			cout<<"1100";
		}else{
			if(abs(s1[2]-s2[2])==1)cout<<"1111";
			else cout<<"1110";
		}
	}
	
	return 0;
}