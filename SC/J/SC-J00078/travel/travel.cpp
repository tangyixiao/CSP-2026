#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
string ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		ans+="1";
	}else{
		cout<<"0000";
		return 0;
	}
	bool f=1;
	for(int i=0;i<=1;i++){
		if(s1[i]!=s2[i]){
			f=0;
			break;
		}
	}
	if(f==1){
		ans+="1"; 
	}else{
		cout<<"1000";
		return 0;
	}
	if((s1[2]>='D'&&s2[2]>='D')||(s1[2]<'D'&&s2[2]<'D')){
		ans+="1";
	}else{
		cout<<"1100";
		return 0;
	}
	if(s1[2]+1==s2[2]||s2[2]+1==s1[2]){
		cout<<"1111";
	}else{
		cout<<"1110";
	}
	return 0;
} 