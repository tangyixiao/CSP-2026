#include<bits/stdc++.h>
using namespace std;
string cr,sr,cx,sx;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s="";
	cin>>cr>>sr>>cx>>sx;
	if(cr==cx){
		s+='1';
	}else{
		s+='0';
	}
	if(s[0]=='1'&&sr[0]==sx[0]&&sr[1]==sx[1]){
		s+='1';
	}else{
		s+='0';
	}
	if(s[1]=='1'){
		if((sr[2]>='A'&&sr[2]<='C'&&sx[2]>='A'&&sx[2]<='C')||(sr[2]>='D'&&sr[2]<='F'&&sx[2]>='D'&&sx[2]<='F')){
			s+='1';	
		}else{
			s+='0';
		}
	}else{
		s+='0';
	}
	if(s[2]=='1'){
		if(abs(sr[2]-sx[2])==1){
			s+='1';
		}else{
			s+='0';
		}
	}else{
		s+='0';
	}
	cout<<s;
}
