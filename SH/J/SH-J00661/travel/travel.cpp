#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int cnt=0,ans=0;
	string w1="0000",w2="000",w3="00";
	string a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	for(int i=0;i<a1.size();i++){
		if(a1[i]==b1[i]){
			cnt++;
		}
		if(cnt==2){
			cout<<1;
			ans++;
		}
	}
	if(ans==0){
		cout<<w1;
		return 0;
	}
	cnt=0;
	ans=0;
	for(int i=0;i<a2.size()-1;i++){
		if(a2[i]==b2[i]){
			cnt++;
		}
		if(cnt==2){
			cout<<1;
			ans++;
		}
	}
	if(ans==0){
		cout<<w2;
		return 0;
	}
	cnt=0;
	ans=0;
	if((((a2[2]>='A')&&(a2[2]<='C'))&&((b2[2]>='A')&&(b2[2]<='C')))||((a2[2]=='D'&&b2[2]=='F')||(a2[2]=='F'&&b2[2]=='D'))){
		cout<<1;
		ans++;
	}
	if(ans==0){
		cout<<w3;
		return 0;
	}
	cnt=0;
	ans=0;
	if(a2[2]=='A'&&b2[2]=='B'){
		cout<<1;	
	}
	else if(a2[2]=='B'&&b2[2]=='A'){
		cout<<1;	
	}
	else if(a2[2]=='B'&&b2[2]=='C'){
		cout<<1;	
	}
	else if(a2[2]=='C'&&b2[2]=='B'){
		cout<<1;	
	}
	else if(a2[2]=='D'&&b2[2]=='F'){
		cout<<1;	
	}
	else if(a2[2]=='F'&&b2[2]=='D'){
		cout<<1;	
	}
	else{
		cout<<0;	
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
