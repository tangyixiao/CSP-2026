#include<bits/stdc++.h>
using namespace std;
long long c1,c2;
string s1,s2;
bool checkp(){
	if((s1[0]==s2[0])&&(s1[1]==s2[1])){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
bool checkb(){
	if(((s1[2]=='A')||(s1[2]=='B')||(s1[2]=='C'))&&((s2[2]=='A')||(s2[2]=='B')||(s2[2]=='C'))){
		return 1;
	}else if(((s1[2]=='D')||(s1[2]=='F'))&&((s2[2]=='D')||(s2[2]=='F'))){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
bool checkx(){
	if(((s1[2]-s2[2])==1)||((s2[2]-s1[2])==1)){
		return 1;
	}else if(((s1[2]=='D')||(s1[2]=='F'))&&((s2[2]=='D')||(s2[2]=='F'))){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<0;
	}
	if(checkp()&&(c1==c2)){
		cout<<1;
	}else{
		cout<<0;
	}
	if((checkp()&&checkb())&&(c1==c2)){
		cout<<1;
	}else{
		cout<<0;
	}
	if(((checkp()&&checkb())&&checkx())&&(c1==c2)){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
