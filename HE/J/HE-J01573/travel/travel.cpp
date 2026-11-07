#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool tj(string c1,string c2){
	if(c1[0]==c2[0]&&c1[1]==c2[1]) return true;
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(!tj(c1,c2)){
		cout<<"0000"<<'\n';
		return 0;
	}
	vector<char> h(4);
	h[0]='1';
	h[1]='0';
	h[2]='0';
	h[3]='0';
	bool f=false;
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		h[1]='1';
		f=true;
	}
	if(!f){
		for(int i=0;i<=3;i++) cout<<h[i];
		return 0;
	}
	f=false;
	if((s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')||(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F')){
		h[2]='1';
		f=true;
	}
	if(!f){
		for(int i=0;i<=3;i++) cout<<h[i];
		return 0;
	}
	f=false;
	if(char(s1[2]+1)==s2[2]||char(s1[2]-1)==s2[2]){
		h[3]='1';
	}
	for(int i=0;i<=3;i++) cout<<h[i];
	return 0;
}
