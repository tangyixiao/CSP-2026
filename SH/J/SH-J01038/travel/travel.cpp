#include<bits/stdc++.h>
using namespace std;
int main(){
	
	string c,s,cc,ss;
	cin>>c>>s>>cc>>ss;
	bool p=1;
	for(int i=0;i<2;i++){
		if(c[i]!=cc[i]){
			p=0;
			break;
		}
	}
	if(p==0){
		cout<<"0000";
		return 0;
	}
	else cout<<"1";
	bool d=1;
	for(int i=0;i<2;i++){
		if(s[i]!=ss[i]){
			d=0;
		}
	}
	if(d==0){
		cout<<"000";
		return 0;
	}
	else cout<<"1";
	bool f=0,fg=0;
	for(int i=65;i<68;i++){
		if(s[2]==char(i))f=1;
		if(ss[2]==char(i))fg=1;
	}
	if(f==1&&fg==1||f==0&&fg==0){
		cout<<"1";
	}
	else {
		cout<<"00";
		return 0;
	}
	if(f==1&&fg==1){
		if(abs(s[2]-ss[2])==2){
			cout<<0;
			return 0;
		}
		else cout<<1;
	}
	else if(f==0&&fg==0){
		cout<<1;
	}
	return 0;
}
