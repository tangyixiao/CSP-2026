#include<bits/stdc++.h>
using namespace std;
string r;
string r1;
string x;
string x1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r>>r1>>x>>x1;
	if(r[0]==x[0]&&r[1]==x[1]){
		cout<<1;
	}else{
		cout<<"0000";
		return 0; 
	}
	if(r1[0]==x1[0]&&r1[1]==x1[1]){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if((r1[2]=='F'||r1[2]=='D')&&(x1[2]=='F'||x1[2]=='D')){
		cout<<1;
	}else if((r1[2]=='A'||r1[2]=='B'||r1[2]=='C')&&(x1[2]=='A'||x1[2]=='B'||x1[2]=='C')){
		cout<<1;
	}else cout<<0;
	if((r1[2]=='A'&&x1[2]=='B')||(r1[2]=='B'&&x1[2]=='A')||(r1[2]=='B'&&x1[2]=='C')||(r1[2]=='C'&&x1[2]=='B')||(r1[2]=='F'&&x1[2]=='D')||(r1[2]=='D'&&x1[2]=='F')){
		cout<<1;
	}else cout<<0;
	return 0;
}
