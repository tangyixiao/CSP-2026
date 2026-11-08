#include<bits/stdc++.h>
using namespace std;
char n1[8],n2[8];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    string s1,s2;
    cin>>s1>>n1[0]>>n1[1]>>n1[2]>>s2>>n2[0]>>n2[1]>>n2[2];
    if(s1==s2){
    	cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	if(n1[0]==n2[0]&&n1[1]==n2[1]){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	if(n1[2]=='A'||n1[2]=='B'||n1[2]=='C'){
		if(n2[2]=='A'||n2[2]=='B'||n2[2]=='C'){
			cout<<"1";
		}else{
			cout<<"00";
			return 0;
		}	
	}else{
		if(n2[2]=='D'||n2[2]=='F'){
			cout<<"11";
			return 0;
		}else{
			cout<<"00";
			return 0;
		}
	}
	if(n1[2]+1==n2[2]||n1[2]-1==n2[2]){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}
