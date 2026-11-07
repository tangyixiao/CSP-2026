#include<bits/stdc++.h>
using namespace std;
int c1,s1[5],c2,s2[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
string c1,c2;
	int k;
	cin>>c1>>s1[k]>>c2>>s2[k];
    if(c1=="02"&&c2=="02"){
		cout<<"1";
	}
	else{
		cout<<"0000";
		return 0;
	}
		for(int j=1;j<=3;j++){
       if(j==1){
			if(s1[j+1]==s2[j+1]){
				cout<<"1";
			}
		}
			else{
				cout<<"000";
				return 0;
			}
			if(j==3){
	if((s1[j]=='F'&&s2[j]=='D')||(s1[j]=='D'&&s2[j]=='F')||(s1[j]=='C'&&s2[j]=='B')||(s1[j]=='B'&&s2[j]=='C')||(s1[j]=='C'&&s2[j]=='A')||(s1[j]=='A'&&s2[j]=='C')||(s1[j]=='B'&&s2[j]=='A')||(s1[j]=='A'&&s2[j]=='B')){
		cout<<"1";
	}			
			}
			else{
				cout<<"00";
				return 0;
			}
			
			if(j==3){
				if((s1[j]=='F'&&s2[j]=='D')||(s1[j]=='D'&&s2[j]=='F')||(s1[j]=='C'&&s2[j]=='B')||(s1[j]=='B'&&s2[j]=='C')||(s1[j]=='B'&&s2[j]=='A')||(s1[j]=='A'&&s2[j]=='B')){
					cout<<"1";
				}
			}	
	}	
		
return 0;	
}
