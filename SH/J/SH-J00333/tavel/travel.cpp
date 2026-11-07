#include<bits/stdc++.h>
using namespace std;
string sr1,sx1,sr2,sx2,s;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>sr1;
	cin>>sr2;
	cin>>sx1;
	cin>>sx2;
	int fr=0,fx=0;
	if(sr1==sx1){
		s[0]='1';
	}else{
		s[0]='0';
	}
	if(sr2[0]==sx2[0]&&sr2[1]==sx2[1]&&s[0]=='1'){
		s[1]='1';
	}else{
		s[1]='0';
	}
	fr=sr2[2]-'C';
	fx=sx2[2]-'C';
	if((fr<=0&&fx<=0)||(fr>0&&fx>0)&&s[1]=='1'&&s[0]=='1'){
		s[2]='1';
	}else{
		s[2]='0';
	}
	if(abs(fx-fr)==1&&s[2]=='1'&&s[1]=='1'&&s[0]=='1'){
		s[3]='1';
	}else{
		s[3]='0';
	}
	for(int i=0;i<=3;i++){
		if(i!=0){
			if(s[i-1]=='0'){
				s[i]='0'; 
			}
		}
		cout<<s[i];
	}
	return 0;
} 
