#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool f1,f2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
		f1=true;
	}else{
		f1=false;
	}
	if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
		f2=true;
	}else{
		f2=false;
	}
	if(c1==c2){
		cout<<1;
	}else{
		cout<<0;
	}
	if(c1==c2&&s1.substr(0,2)==s2.substr(0,2)){
		cout<<1;
	}else{
		cout<<0;
	}
	if(c1==c2&&s1.substr(0,2)==s2.substr(0,2)&&f1==f2){
		cout<<1;
	}else{
		cout<<0;
	}
	if(c1==c2&&s1.substr(0,2)==s2.substr(0,2)&&f1==f2&&((f1==false&&f2==false)||abs(s1[2]-s2[2])==1)){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
