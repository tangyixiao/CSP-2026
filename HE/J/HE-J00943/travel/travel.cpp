#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	string a,b;
	for(int i=0;i<2;i++) a+=s1[i],b+=s2[i];
	if(c1==c2){
		cout<<"1";
		if(a==b){
			cout<<"1";
			if(((s1[2]=='D'||s1[2]=='E')&&(s2[2]=='D'||s2[2]=='E'))||((s1[2]>='A'&&s1[2]<='C')||(s1[2]>='A'&&s1[2]<='C'))&&!(s1[2]=='C'&&s2[2]=='D' || s2[2]=='C'&&s1[2]=='D')){
				cout<<"1";
				if((s1[2]-'0'+1==s2[2]-'0' || s2[2]-'0'+1==s1[2]-'0')&&!(s1[2]=='C'&&s2[2]=='D' || s2[2]=='C'&&s1[2]=='D')){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}else{
				cout<<"00";
			}
			
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
}
