#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
string c1, s1, c2, s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<2;i++){//chexiang
		if(c1[i]==c2[i]){
			continue;
		}
		else{
			cout<<"0000";
			return 0;
		}
	}
	cout<<"1";
	for(int i=0;i<2;i++){//pai
		if(s1[i]==s2[i]){
			continue;
		}
		else{
			cout<<"000";
			return 0;
		}
		
	}
	cout<<"1";
	if((s1[2]=='C'&&s2[2]=='D')||(s1[2]=='D'&&s2[2]=='C')){
		cout<<"00";
		return 0;
	}
	if('A'||'B'||'C'&&'A'||'B'||'C'){
		cout<<"1";
		if(s1[2]-s2[2]==1||s1[2]-s2[2]==-1){
			cout<<"1";
			return 0;
		}
		else{
			cout<<"0";
			return 0;
		}
	}else{
		cout<<"00";
		return 0;
	}
	if(s1[2]=='D'||'F'&&s2[2]=='D'||'F'){
		cout<<"11";
		return 0;
	}
}
