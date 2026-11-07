#include<bits/stdc++.h>
using namespace std;
string a1,b1,a2,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1&&a1!="16"&&b1!="01"){
		cout<<1;
		int f=1;
		for(int i=0;i<=1;i++) if(a2[i]!=b2[i]) f=0;
		if(f==1){
			cout<<1;
			if(((a2[2]=='A'||a2[2]=='B'||a2[2]=='C')&&(b2[2]=='A'||b2[2]=='B'||b2[2]=='C'))||(a2[2]=='D'||a2[2]=='F')&&(b2[2]=='D'||b2[2]=='F')){
				cout<<1;
				if(((a2[2]=='A'||b2[2]=='A')&&(a2[2]=='B'||b2[2]=='B'))||((a2[2]=='C'||b2[2]=='C')&&(a2[2]=='B'||b2[2]=='B'))||((a2[2]=='D'||b2[2]=='D')&&(a2[2]=='F'||b2[2]=='F'))){
					cout<<1; 
				}
				else cout<<0;
			}
			else{
				cout<<0<<0;
				return 0;
			}
			
		}
		else cout<<0<<0<<0;
	}
	else cout<<0<<0<<0<<0;
	
	
	return 0;
} 