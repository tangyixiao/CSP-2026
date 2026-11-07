#include<bits/stdc++.h>
using namespace std;
long long c1[20],s1[20],c2[20],s2[20];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    for(int i=0;i<=3;i++){
    	cin>>c1[i]>>s1[i]>>c2[i]>>s2[i];
	}

   	if(c1[0]==c2[0]&&c1[1]==c2[1]){
   		cout<<"1";
	}
	else{
		cout<<"0";
	}

	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<"1";
		if((s1[2]=='A'&&(s2[2]=='B'||s2[2]=='c')||s1[2]=='B'&&(s2[2]=='A'||s2[2]=='c')||s1[2]=='C'&&(s2[2]=='B'||s2[2]=='A'))||(s1[2]=='D'&&s2[2]=='F'||s1[2]=='F'&&s2[2]=='D')){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}
	else{
		cout<<"0";
	}
	if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='B')||(s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D')){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	return 0;
}
