#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,c1,s2,c2;
	cin>>s1>>s2>>c1>>c2;
	int f=0;
	for(int i=0;i<2;i++){
		if(s1[i]!=c1[i]){
			f++;
		}
	}if(f){
		cout<<"0000";
		return 0; 
	}else{
		cout<<"1";
	}f=0;
	for(int i=0;i<2;i++){
		if(s2[i]!=c2[i]){
			f++;
		}
	}if(f){
		cout<<"000";
		return 0;
	}else{
		cout<<"1";
	}
	if(((s2[2] >= 'A' && s2[2] <= 'C') && (c2[2] >= 'A' && c2[2] <= 'C')) || ((s2[2] >= 'D' && s2[2] <= 'F') && (c2[2] >= 'D' && c2[2] <= 'F'))){
		cout<<"1";
	}else{
		cout<<"00";
		return 0;
	}if((s2[2]-c2[2]==-1) || (s2[2]-c2[2]==1) || (s2[2]=='D' && c2[2]=='F') || (s2[2]=='D' && c2[2]=='F')){
		cout<<"1";
	}else{
		cout<<"0";
	}
}