#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int f=0;
	cin>>c1>>c2>>s1>>s2;
	if(c1!=s1){
		cout<<"0000";
		return 0;
	}else{
		cout<<"1";
	}
	for(int i=0;i<2;i++){
		if(c2[i]==s2[i]){
			f=1;
		}else{
			f=0; 
		}
	}
	if(f==1){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	if(c2[2]=='D'&&s2[2]=='F'||s2[2]=='D'&&c2[2]=='F'){
		cout<<"11";
		return 0;
	}else if((c2[2]=='C'||c2[2]=='A'||c2[2]=='B')&&(s2[2]=='C'||s2[2]=='A'||s2[2]=='B')){
		cout<<"1";
	}else{
		cout<<"00";
		return 0;
	} 
	if(c2[2]=='B'&&(s2[2]=='A'||s2[2]=='C')){
	cout<<"1";
	}
	else if(s2[2]=='B'&&(c2[2]=='A'||c2[2]=='C')){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	fclose(stdin); fclose(stdout);
	return 0;
}
