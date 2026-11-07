#include <bits/stdc++.h>
using namespace std;

struct node{
	string c,s;
};
node r,x;
bool train,line,side,nxt;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r.c>>r.s>>x.c>>x.s;
	if(r.c==x.c){
		cout<<1;
		train=true;
	}else{
		cout<<0;
		train=false;
	}
	if(train&&r.s[0]==x.s[0]&&r.s[1]==x.s[1]){
		cout<<1;
		line=true;
	}else{
		cout<<0;
		line=false;
	}
	if(line&&((r.s[2]-'A'<=2&&x.s[2]-'A'<=2)||(r.s[2]-'A'>=3&&x.s[2]-'A'>=3))){
		cout<<1;
		side=true;
	}else{
		cout<<0;
		side=false;
	}
	if(line&&side&&abs(r.s[2]-x.s[2])==1){
		cout<<1;
		nxt=true;
	}else{
		cout<<0;
		nxt=false;
	}
	
	return 0;
}
