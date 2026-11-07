#include<bits/stdc++.h>
using namespace std;

void p(char a,char b){
	if((a=='A' && b!='B') || (a=='B' && (b!='A' || b!='C')) || (a=='C' && b!='B') || (a=='D' && b!='F') || (a=='F' && b!='D')) {
		cout<<0;
		return; 
	}else cout<<1;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}else{
		cout<<1;
		int a=s1[1]-'0',b=s2[1]-'0';
		if(a!=b) {
			cout<<"000";
			return 0;
		}else{
			cout<<1;
			char x=s1[2],y=s2[2];
			if((x=='C' && y=='D') || (x=='D' && y=='C')) {
				cout<<"00";
				return 0;
			}else{
				cout<<1;
				p(x,y);
			}
		}
	}
	return 0;
}