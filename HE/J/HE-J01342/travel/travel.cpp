#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;string s1;string s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		
		
		int t=1;
	for(int i=0;i<2;i++){
		if(s1[i]!=s2[i]){
			t=0;break;
		}
	}
	if(t==1){
		cout<<1;
		if(s1[2]<='C'&&s2[2]<='C'){
			cout<<1;
		}else if(s1[2]>='D'&&s2[2]>='D'){
			cout<<1;
		}else{
			cout<<0;
		}
		if(s1[2]=='C'&&s2[2]=='D'){
			cout<<0;
		}else{
		
		if(s1[2]-'A'+1==s2[2]-'A'||s1[2]-'A'-1==s2[2]-'A'){
			cout<<1;
		}else{
			cout<<0;
		}}
	}else{
		cout<<"000";
	}
	
		
		
	}else{
		cout<<"0000";
	}
	
	
	return 0;
} 
