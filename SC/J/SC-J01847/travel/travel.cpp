#include<bits/stdc++.h>
using namespace std;
bool s=true;
bool x(char n,char m){
	int ans1=1,ans2=1;
	if(n=='A'||n=='B'||n=='C'){
		ans1=0;
	}
	if(m=='A'||m=='B'||m=='C'){
		ans2=0;
	}
	if(ans1==ans2){
		return true;
	}else{
		return false;
	}
}
bool p(char n,char m){
	if(!s){
		return false;
	}
	if(((n=='A'||n=='B'||n=='C')&&(m=='A'||m=='B'||m=='C')&&(m=='B'||n=='B'))||(n=='D'||n=='F'||m=='D'||m=='F')){
		return true;
	}else{
		return false;
	}
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a1,b1;
	string a2,b2;
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1){
		cout<<1;
	}else{
		cout<<0;
		s=false;
	}
	if(s&&a2[0]==b2[0]&&a2[1]==b2[1]){
		cout<<1;
	}else{
		cout<<0;
		s=false;
	}
	if(s&&x(a2[2],b2[2])){
		cout<<1;
	}else{
		cout<<0;
		s=false;
	}
	if(s&&p(a2[2],b2[2])){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}