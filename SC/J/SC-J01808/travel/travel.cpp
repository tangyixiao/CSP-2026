#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	string ss1;ss1+=s1[0];ss1+=s1[1];
	string ss2;ss2+=s2[0];ss2+=s2[1];
	if(c1==c2){
		cout<<"1";
		if(ss1==ss2){
			cout<<"1";
			if((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C')||(s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F')){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else{
			cout<<"00";
		}
	}
	else{
		cout<<"0000";
	}
	int f1=0,f2=0;
	for(int i=0;i<ss1.size();i++){
		f1=ss1[i]-'0'+f1*10;
	}
	for(int i=0;i<ss2.size();i++){
		f2=ss2[i]-'0'+f2*10;
	}
	if(abs(f2-f1)<=1&&c1==c2){
		int n1=s1[2]-'0',n2=s2[2]-'0';
		if((s1[2]=='C'&&s2[2]=='D')||(s2[2]=='C'&&s1[2]=='D')){
			cout<<"0";
		}else{
			if(abs(n1-n2)<=1&&(abs(n1-n2)!=abs(f2-f1)))cout<<"1";
			else cout<<"0";
		}
	}
	return 0;
}