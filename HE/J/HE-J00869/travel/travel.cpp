#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
bool ccc(string x,string y){
	for(int i=1;i<=17;i++){
		if(x=="16"||x=="01"||y=="16"||y=="01"){
			cout<<"0";
			return 0;
		}
		else if(x==y){
			cout<<"1";
			return 0;
		}else{
			cout<<"0";
			return 0;
		}
 	}
}
bool sss(string x1,string y1){
	for(int i=1;i<=18;i++){
		if(x1[1]==y1[1] && x1[0]==y1[0] && ccc(c1,c2)==true){
			cout<<"1";
			return 0;
		}
		else{
			cout<<"0";
			return 0;
		}
	}
}
bool aaa(string ff,string nn){
	for(int i=1;i<=17;i++){
		if(ff[2]=='A' || ff[2]=='B' || ff[2]=='C' && nn[2]=='A'||nn[2]=='B'||nn[2]=='C'&&sss(ff,nn)=='1'){
			cout<<"1";
			return 0;
		}
		else if((ff[2]=='D'||ff[2]=='F') && (nn[2]=='D'||nn[2]=='F'&&sss(ff,nn)=='1')){
			cout<<"1";
			return 0;
		}
		else{
			cout<<"0";
			return 0;
		}
	}
}
bool xxx(string ll,string pp){
	for(int i=1;i<=17;i++){
		if(ll[2]+1==pp[2] && ll[2]!='C'&&pp[2]!='D'){
			cout<<"1";
			return 0;
		}
		else{
			cout<<"0";
			return 0;
		}
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);

	cin>>c1>>s1>>c2>>s2;
	ccc(c1,c2);
	sss(s1,s2);	
	aaa(s1,s2);
	xxx(s1,s2);	
	
	
	
	return 0;
}
