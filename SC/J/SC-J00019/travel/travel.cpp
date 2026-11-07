#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,s,cc,ss;
	cin>>c>>s>>cc>>ss;
	int z=1;
	int q=1;
	for(int i=0;i<c.size();i++){
		if(c[i]!=cc[i]){
			z=0;
		}
		if(s[i]!=ss[i]){
			q=0;
		}
	}
	if(z==0){
		cout<<"0000";
		return 0;
	}else{
		cout<<z;
	}
	if(q==0){
		cout<<"000";
		return 0;
	}else{
		cout<<q;
	}
	int p=1;
	if(('A'<=s[2]&&s[2]<='C'&&'A'<=ss[2]&&ss[2]<='C')||('D'<=s[2]&&s[2]<='F'&&'D'<=ss[2]&&ss[2]<='F')){
		p=1;
	}else{
		p=0;
	}
	if(p==0){
		cout<<"00";
		return 0;
	}else{
		cout<<p;
	}
	if((s[2]=='A'&&ss[2]=='B')||(s[2]=='B'&&ss[2]=='C')||(s[2]=='D'&&ss[2]=='F')||(ss[2]=='A'&&s[2]=='B')||(ss[2]=='B'&&s[2]=='C')||(ss[2]=='D'&&s[2]=='F')){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}