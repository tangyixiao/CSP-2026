#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int cnt=0;	
	if(c1==c2){
		cout<<1;
	}

	else cout<<0;
	for(int i=0;i<2;i++){
		if(s1[i]==s2[i]){
			cnt++;
		}
	}
	if(cnt==2&&c1==c2){
		cout<<1;
		
	}
	else cout<<0;
	if(c1==c2&&cnt==2&&((((s1[2]>='A')&&(s1[2]<='C'))&&((s2[2]>='A')&&(s2[2]<='C')))||((s1[2]>='D'&&s1[2]<='F')&&((s2[2]>='D')&&(s2[2<='F']))))){
		cout<<1;
		if((char(s1[2]+1)==s2[2]&&s2[2]<='C')||(char(s1[2]-1)==s2[2]&&s2[2]>='A')||(char(s1[2]+1)==s2[2]&&s2[2]=='F')||(char(s1[2]-1)==s2[2]&&s2[2]=='D'))cout<<1;
		else cout<<0;
	}
	else{
		cout<<0;
		cout<<0;
	} 
	
	return 0;
}
