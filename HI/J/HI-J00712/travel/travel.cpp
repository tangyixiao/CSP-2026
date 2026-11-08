#include<bits/stdc++.h>
using namespace std;
int main(){
	int sa,sb;
	string c1,c2;
	char s1[3],s2[3];
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1"<<" ";
	}
	else{
		cout<<"0"<<" "; 
	}
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<"1"<<" ";
		}
	else{
		cout<<"0"<<" ";
	}
	if(s1[2]>='A'&&s1[2]<='C'){
		sa=1;
	}
	else{
		sa=0;
	}
	if(s2[2]>='A'&&s2[2]<='C'){
		sb=1;
	}
	else{
		sb=0;
	}
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&sa==sb){
		cout<<"1"<<" ";
	}		
	else{
		cout<<"0"<<" ";
	}
	int bl=0;
	if(s1[2]==s2[2]-1){
		bl=1;
	}
	if(s1[2]=='D'){
		if(s1[2]==s2[2]-2){
			bl=1;
		}
	}
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&sa==sb&&bl==1){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
